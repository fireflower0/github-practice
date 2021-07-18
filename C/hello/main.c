#include <stdio.h>

int main(int argc, char* argv[]) {
  const static int SUCCESS = 0;
  const static int ERROR_ARGUMENT_NUMBER = 1;

  if (argc != 2) {
    printf("Error: argument number\n");
    return ERROR_ARGUMENT_NUMBER;
  } else {
    if (argv[1][0] == '-') {
      switch (argv[1][1]) {
      case 'v':
        printf("Version: 0.0.1\n");
        return SUCCESS;
      case 'h':
        printf("[Help]\n"
               "Usage: ./hello <your name>\n"
               "v : Show version\n"
               "h : Show help message\n");
        return SUCCESS;
      }
    }
  }

  printf("Hello, %s!\n", argv[1]);

  return SUCCESS;
}
