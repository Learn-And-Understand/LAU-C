#include <stdio.h>

struct Data {
  int number;
  char text[20];
};

int main() {
  printf("Write and read binary file.\n");

  struct Data wdata = {20, "Hello, World!"};

  FILE *wfile = fopen("data.bin", "wb");
  // buffer, buffer size, element count, output
  fwrite(&wdata, sizeof(struct Data), 1, wfile);
  fclose(wfile);

  struct Data rdata;
  FILE *rfile = fopen("data.bin", "rb");
  fread(&rdata, sizeof(struct Data), 1, rfile);
  fclose(rfile);

  printf("number: %d, text: %s\n", rdata.number, rdata.text);

  return 0;
}