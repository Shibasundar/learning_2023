#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

  if (argc != 3) {
    printf("Usage: %s C:\\Users\\ASUS\\Desktop\\Module 1\\Day 7\\text.txt\n", argv[0]);
    return 1;
  }

  FILE *source = fopen(argv[1], "r");
  if (source == NULL) {
    printf("Could not open source file: %s\n", argv[1]);
    return 1;
  }

  FILE *target = fopen(argv[2], "w");
  if (target == NULL) {
    printf("Could not open target file: %s\n", argv[2]);
    return 1;
  }

  char ch;
  while ((ch = fgetc(source)) != EOF) {
 
    fputc(ch, target);
  }

  fclose(source);
  fclose(target);

  printf("File copied successfully.\n");

  return 0;
}

