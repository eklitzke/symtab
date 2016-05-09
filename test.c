#include <stdio.h>

void foo(const char *name) { printf("hello %s\n", name); }

int main(int argc, char **argv) {
  foo("from main");
  return 0;
}
