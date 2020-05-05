#include <errno.h>
#include <fcntl.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>

int main(int argc, char **argv) {
  char buffer;
  if (argc < 2 || argv[1][0] == '-') {
    while (read(0, &buffer, 1) != 0) {
      write(1, &buffer, 1);
    }
  } else {
    int file, i, errnum;
    i = 1;
    while (i < argc) {
      file = open(argv[i], O_RDONLY);
      if (file >= 0) {
        while (read(file, &buffer, 1) != 0) {
          write(1, &buffer, 1);
        }
      } else {
        errnum = errno;
        fprintf(stderr, "cat: %s: %s\n", argv[i], strerror(errnum));
      }
      close(file);
      i++;
    }
  }
  return (0);
}