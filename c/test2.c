#include <stdio.h>
int main(void)
{
  int i,j;
  int a[10][10];
  for(i=1;i<=10;i++){
    for(j=1;j<=10;j++){
      a[i][j] = 0;
    }
  }
  for(i=1;i<=10;i++){
    for(j=1;j<=10;j++){
      a[i][j] += i*j;
    printf("i=%d, a=%d\n", i,a[i][j]);
    }
  }
  return 0;
}
