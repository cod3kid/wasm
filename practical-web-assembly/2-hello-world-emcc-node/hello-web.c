#include <stdio.h>
int main() {
  printf("Hello, Web!\n");
  return 0;
}

// To instruct Emscripten to generate .html file
// emcc hello_web.c -o helloweb.html