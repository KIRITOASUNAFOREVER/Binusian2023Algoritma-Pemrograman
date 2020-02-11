#include<stdio.h>

int main()
{
    int input,hasil;
    
    scanf("%d",&input);
    //     100 150 200 250 300 350 400 450 500
    // 100   250  450 700 1000 1350 1750
    //    150   200 5 250 300  350  400
    //        50   50   50  50    50 
    // a = 100 ; b = 150; c = 50
    hasil = 100 + (input-1)*150 +((input-1)*(input-2)*50)/2; //Un = a + ( n - 1 )b + (( n - 1 )( n - 2 ).c)/2
    
    printf("%d",hasil);
   
	return 0;
}

