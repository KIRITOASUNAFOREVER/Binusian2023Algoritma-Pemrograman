#include<stdio.h>
#include<math.h>
//problem C
int main()
{
	float euler = 2.7182;//8182845904523536;
	float input2,input3,input1,coba;
	int tescase;
	float hasil;
	scanf("%d",&tescase);
	
	for (int i=0;i<tescase;i++){
		scanf("%f %f %f",&input1,&input2,&input3);
		coba = input2/input3;
		hasil = pow(input1,coba);
	
	if (hasil > euler){
		printf("Case #%d: >\n",i+1);	
	}
	else {
		printf("Case #%d: <\n",i+1);
	}
}
	return 0;
}

