// 백준 25304번 반복문 연습
#include <stdio.h>

int main(void) {
  int total, type, price, num, sum=0;
  scanf("%d %d", &total, &type);
  for(int i=0; i<type; ++i)
    {
      scanf("%d %d", &price, &num);
      sum += price*num;
    }
  if(total==sum) printf("Yes");
  else printf("No");
}

