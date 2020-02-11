#include<stdio.h>

int main()
{
    int counter,angka;
    
    scanf("%d",&counter);
    
    for(int i=0;i<counter;i++)
    {
        scanf("%d",&angka);
        printf("Case #%d:\n",i+1);
        for(int j=1;j<=angka;j++)
        {
            if(j%15==0)
            {
                printf("%d %s\n",j,"Lili");
            }
            else if(j%3==0 || j%5==0)
            {
                printf("%d %s\n",j,"Jojo");
            }
            else
            {
                printf("%d %s\n",j,"Lili");
            }
        }
    }
    
	return 0;
}

