#include <stdio.h>
int main(){
	int a;
	scanf("%d",&a);
	for(int i = 0;i<a;i++){
		int n = 0;
		int total = 0;
		int arr[4]={0};
		scanf("%d",&n);
		for(int j = 0;j<4;j++){
			scanf("%d",&arr[j]);
		}
		for(int k = 1;k<=n;k++){
			for(int j = 0;j<4;j++){
				if(k % arr[j] == 0){
					total += 1;
					break;
				}
			}
		}
		printf("Case #%d: %d\n",i+1,total);
	}
	return 0;
}
