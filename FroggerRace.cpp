#include<stdio.h>

int main()
{
    int counter,finish,count = 0;
    scanf("%d",&counter);
    
    for(int i=0;i<counter;i++)
    {
        scanf("%d",&finish);
        
        for(int j=0;j<finish;j++)
        {
            finish = finish - j;
            count = count+1;
        }
        printf("Case#%d: %d\n",i+1,count);
        count = 0;
    }
	return 0;
}
