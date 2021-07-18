#include <stdio.h>

int main(int argc, char* argv[]) {
  const static int SUCCESS = 0;
  const static int ERROR_ARGUMENT_NUMBER = 1;

  if (argc != 2) {
    printf("Error: argument number\n");
    printf("argc: %d\n", argc);
    return ERROR_ARGUMENT_NUMBER;
  }

  printf("Hello, %s!\n", argv[1]);

  return SUCCESS;
}
