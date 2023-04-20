#include <stdio.h>

int main(int argc, char **argv) {
  int test_count;
  scanf(" %d", &test_count);

  while (test_count--) {
    int n, k, v;
    scanf("%d %d %d", &n, &k, &v);
    int x = 0;
    for (int i = 0; i < n; i++) {
      int input;
      scanf("%d", &input);
      x += input;
    };
    double xx = x;
    int seek = 1;
    do {
      xx = x;
      xx += (seek * k);
      xx /= (k + n);
      seek++;
    } while (xx < (double)v);

    if (xx == v) {
      printf("%d\n", seek - 1);
    } else {
      printf("-1\n");
    }
  }

  return 0;
}
