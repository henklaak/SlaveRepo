#include "slave.h"
#include <cstdio>

int main(int argc, char *argv[]) {
  FILE *fp = fopen("myincludes.h", "wt");
  if (fp) {
    fprintf(fp, "#define MYCONSTANT (3)");
    fclose(fp);
  }
}
