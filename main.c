// 백준 11382번 꼬마정민 입력과 계산
#include <stdio.h>

int main(void) {
  long long a, b, c;    // int 보다 큰 숫자를 받을 수 있도록 하자
                        // (longlong 8byte)
  scanf("%lld %lld %lld", &a, &b, &c);
  printf("%lld",a+b+c);
}

