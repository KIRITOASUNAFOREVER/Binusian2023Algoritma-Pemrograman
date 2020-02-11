#include <stdio.h>

int main() {
 
 int tcase = 0;
 long int num = 0, memo = 0, temp = 0, numTemp = 0;
 int arr[11] = {0};
 
 scanf("%d", &tcase);
 for(int i = 1; i <= tcase; i++) {
  scanf("%ld", &num);
  
  if(num < memo) {
//   printf("Jalan\nNum:%d\nMemo:%d\n", num, memo);
   for(int j = 0; j < 11; j++) {
    arr[j] = 0;
   }
   temp = 1;
  } else {
   temp = memo + 1;
  }
  
  for(int j = temp; j <= num; j++) {
   if(j < 10) {
    arr[j]++;
   } else {
    numTemp = j;
    while(numTemp != 0) {
     arr[numTemp % 10]++;
     numTemp /= 10;
    }
   }
  }
  
  printf("Case #%d:", i);
  for(int j = 0; j < 10; j++) {
   printf(" %d", arr[j]);
  }
  printf("\n");
  memo = num;
  
 }

 return 0;
}
