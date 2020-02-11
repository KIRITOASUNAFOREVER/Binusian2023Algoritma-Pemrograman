#include<stdio.h>

int main()
{
    int X,Y,HasilKali = 0;
    
    for(int i=0;i<4;i++)
    {
        scanf("%d %d",&X,&Y);
        
        HasilKali = X*Y;
        
        printf("%d\n",HasilKali);
    }
	return 0;
}

