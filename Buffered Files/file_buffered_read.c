/*
 * Problem: Open an existing text file, set a custom user-space buffer
 *          using setvbuf(), then read and print the file contents
 *          to the screen.
 * Input:   An existing text file
 * Output:  The contents of the file printed to stdout
 */

#include <stdio.h>
#define FILE_NAME "data.txt"
#define BUFFER_SIZE 1024

int main ()
{
FILE * stream = fopen(FILE_NAME, "r");

if (stream == NULL) {
 perror("fopen");
 return 1;
}

char buff[BUFFER_SIZE];

if (setvbuf(stream, buff, _IOFBF, sizeof(buff)) != 0) {
 perror("setvbuf");
 fclose(stream);
 return 1;
}

char readBuff[BUFFER_SIZE];

while (fgets(readBuff, sizeof(readBuff), stream) != NULL)
{
 if (fputs(readBuff, stdout) == EOF) {
  perror("fputs");
  fclose(stream);
  return 1;
 }
}

if (ferror(stream)) {
 perror("fgets");
 fclose(stream);
 return 1;
}

if (fclose(stream) == EOF) {
 perror("fclose");
 return 1;
}

return 0;
}