#include <stdio.h>
#include <stdlib.h>

void trapezoid(int top, int bot, int offset) {
  top = top / 2 + 1;
  bot = bot / 2 + 1;
  while (top <= bot) {
    int k = 0;
    for (int i = 0; i < offset; i++) {
      printf(" ");
    }
    while (bot - top > k) {
      printf(" ");
      k++;
    }
    k = 0;
    while (k < top) {
      printf("*");
      k++;
    }
    k = 1;
    while (k < top) {
      printf("*");
      k++;
    }
    printf("\n");
    top++;
  }
}
void printTree(int h) {
  int top, bot, offset, d;
  top = 1;
  bot = 7;
  d = 3;
  offset = 0;
  int ct = 0;
  int *arr = (int *)malloc((h + 1) * sizeof(int));
  for (int i = 0; i < h - 1; i++) {
    ct++;
    if (ct == 2) {
      d++;
      ct = 0;
    }
    arr[i] = d;
    offset = offset + d;
  }
  int dt = 4;
  int db = 6;
  int ct2 = 1;
  int ind = 0;
  int ht = h;
  int treeoffset;
  while (h > 0) {
    ct2++;
    h--;
    treeoffset = (bot / 2 - h / 2);
    trapezoid(top, bot, offset);
    offset = offset - arr[ind];

    top = top + dt;
    bot = bot + db;
    if (ct2 == 2) {
      dt += 2;
      db += 2;
      ct2 = 0;
    }
    ind++;
  }
  treeoffset = treeoffset - ht / 2;
  if (ht%2==0) {
      treeoffset++;
  }
  for (int j = 0; j < ht; j++) {
    for (int i = 0; i < treeoffset; i++) {
      printf(" ");
    }
    for (int i = 0; i < ht; i++) {
      printf("|");
    }
    printf("\n");
  }
}

int main(int argc,const char** argv) {
  int height=atoi(argv[1]);
  printTree(height);
  return 0;
}
