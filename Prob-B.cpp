#include<stdio.h>

int main()
{
    char nama[105],NIM[10];
    int umur;
    
    scanf("%[^\n]",&nama);
    getchar();
    scanf("%s %d",&NIM,&umur);
    getchar();
    
    printf("Name: %s\n",nama);    
    printf("NIS: %s\n",NIM);    
    printf("Age: %d\n",umur);    
    
	return 0;
}

