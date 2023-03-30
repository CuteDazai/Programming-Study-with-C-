//재귀함수를 연습해보자! 1 부터 n까지 출력하는 함수
#include <stdio.h>

void PrintNum(int num){
  printf("%d ", num);
  if(num%10==0)printf("\n");
  if(num>1) PrintNum(num-1);
}
int main(void) {
  int num;
  printf("From 1 to what number do you want to me to print?: ");
  scanf("%d", &num);
  PrintNum(num);
  return 0;
}