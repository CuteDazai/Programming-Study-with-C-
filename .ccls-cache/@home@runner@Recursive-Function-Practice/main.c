// 백준 25314번 반복문 연습
#include <stdio.h>

int main(void) {
  int byte_num=0;
  scanf("%d", &byte_num);
  for(int i=0; i<byte_num/4; ++i)
    printf("long ");
  printf("int");
}

