#include <stdio.h>
#include <malloc.h>
int main(){
  int a[5][5] = {{10, 20, 30, 40, 50}, {60,70,80,90,100}};
  printf("%d\n", *(*(a+1)));
  return 0;
}