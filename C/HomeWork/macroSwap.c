#include<stdio.h>

#define swap(t, x, y) t temp = x; x = y; y = temp; 

int main(){
  int x=2,y=3;
  swap(int,x,y);
  printf("%d %d",x,y);
  return 0;
}
