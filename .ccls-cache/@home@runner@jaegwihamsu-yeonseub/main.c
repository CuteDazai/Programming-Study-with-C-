#include <stdio.h>

void PrintNum(int num){
  printf("%d ", num);
  if(num>1) PrintNum(num-1);
}
int main(void) {
  int num;
  printf("1부터 몇까지 출력할까요?: \n");
  scanf("%d", &num);
  PrintNum(10);
  return 0;
}