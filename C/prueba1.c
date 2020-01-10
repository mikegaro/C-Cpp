#include<stdio.h>
#include<stdlib.h>

static int cinco = 5;

int main(void){

  for (int i = 0; i < 100; i++){
    printf("%d",cinco);
    cinco++;
  }

  printf("\n\n%d",cinco);
  return 0;
}
