#include<stdio.h>

void print(int num, char arr[][105]) { // karena mau langsung di print di input jadi pakai void
 
 for(int i = num - 1; i >= 0; i--) {
  for(int j = num - 1; j >= 0; j--) {
   printf("%c", arr[i][j]); //untuk arraynya
  }
  printf("\n");
 }
 
}

int main() {
 
 int input;
 char simbol[105][105]; //simbol
 
 scanf("%d", &input);
 getchar();
 
 for(int i = 0; i < input; i++) {
     for(int j = 0; j < input; j++) {
         scanf("%[^\n]", &simbol[i][j]);
     }
     getchar();
 }
    print(input, simbol);
    
return 0;
}
