//재귀함수를 연습해보자! 백준 2747번 피보나치 수
#include <stdio.h>

int Fibo(int num)
{
  else if (num==3) return 2;
  else if (num==2) return 1;
  else return Fibo(num-1)+Fibo(num-2);
}
int main(void) {
  int num;
  scanf("%d", &num);
  printf("%d",Fibo(num));
  return 0;
}

//시간초과가 뜬다...