#include <stdio.h>
#include <string.h>
int main(){
	int n;
	scanf("%d",&n);
	for(int i = 0;i<n;i++){
		int arr2[26] = {0};
		char arr[200000];
		getchar();
		scanf("%[^\n]",arr);
		int total = 0;
		for(int j = 0;j<strlen(arr);j++){
			if(arr2[arr[j]-'a'] == 0){
				total += 1;
				arr2[arr[j]-'a'] = 1;
			}
		}
		if(total % 2 == 0){
			printf("Case #%d: Yay\n",i+1);
		}
		else{
			printf("Case #%d: Ewwww\n",i+1);
		}
	}
	return 0;
}
