#include <stdio.h>

int problem6(){
  int sumOfSq = 0;
  int sqOfSum = 0;

  int i = 1;
  for (i; i <= 100; i++){
    sumOfSq += i * i;
    sqOfSum += i;
  }

  sqOfSum = sqOfSum * sqOfSum;
  return sqOfSum - sumOfSq;
}

int main(){
  printf("%d\n", problem6());
}