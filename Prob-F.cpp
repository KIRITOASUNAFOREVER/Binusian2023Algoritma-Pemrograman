#include <stdio.h>
#include <math.h>
int main(){
	int n;
	scanf("%d",&n);
	getchar();
	for(int i = 0;i<n;i++){
		char arr[40];
		scanf("%s",arr);
		getchar();
		int x = 0;
		while(arr[x]!='\0')
		{
		    x++;
        }
        printf("%d",x);
		int switchs = 0;
		int nol = 0;
		long long int total = 0;
		for(int j = x;j>=0;j--){
			if(arr[j] == ')'){
				switchs = 1;
			}
			if(arr[j] == '('){
				switchs = 0;
			}
			if(arr[j] == '0'){
				nol += 1;
			}
			if(arr[j] == '1' && switchs == 0){
				total += (long long int) pow(2,nol);
				nol += 1;
			}
			if(arr[j] == '1' && switchs == 1){
				total -= (long long int) pow(2,nol);
				nol += 1;
			}
		}
		printf("Case #%d: %lld\n",i+1,total);
	}
	return 0;
}
