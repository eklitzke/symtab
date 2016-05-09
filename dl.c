#include <dlfcn.h>
#include <stdio.h>

int main(int argc, char **argv) {
  void *handle = dlopen("./test.so", RTLD_NOW);
  if (handle == NULL) {
    fprintf(stderr, "error in dlopen: %s\n", dlerror());
    return 1;
  }
  void *sym = dlsym(handle, "hello");
  if (sym == NULL) {
    fprintf(stderr, "failed to dlsym: %s\n", dlerror());
    return 1;
  }
  printf("it worked!\n");
  return 0;
}
