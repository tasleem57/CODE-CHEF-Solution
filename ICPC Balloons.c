#include <stdio.h>

int main(void) {
  int test_count = 0;
  scanf(" %d", &test_count);
  while (test_count--) {
    int x = 0;
    scanf("%d", &x);
    int max = 0;
    for (int i = 0; i < x; i++) {
      int in = 0;
      scanf("%d", &in);
      if (in >= 1 && in <= 7) {
        max = max < i ? i : max;
      }
    }
    printf("%d\n", max + 1);
  }

  return 0;
}
