/*** EXAMPLE ***
r     <- 1
a     <- 3
b     <- 12

r is not modified because b is even
a = a * a    <- 3 * 3     <- 9
b = b / 2    <- 12 / 2    <- 6

r is not modified because b is still even
a = a * a    <- 9 * 9    <- 81
b = b / 2    <- 6 / 2    <- 3

r = r * a    <- 1 * 81     <- 81 (in this case b is odd)
a = a * a    <- 81 * 81    <- 6,561
b = b / 2    <- 3 / 2      <- 1

r = r * a    <- 81 * 6,561       <- 531,441 (in this case b is odd)
a = a * a    <- 6,561 * 6,561    <- 43,046,721
b = b / 2    <- 1 / 2            <- 0
***/

#include<stdio.h>
int main(){
  int r, a, b;
  
  printf("Input base and exponent separate by a comma: ");
  scanf("%d,%d", &a, &b);
  
  r = 1;
  while(b != 0) {
    if (b%2 == 0){
      a *= a;
      b /= 2;
    } else {
      r *= a;
      a *= a;
      b /= 2;
    }
  };
  printf("Result: %d\n", r);
  return 0;
}
