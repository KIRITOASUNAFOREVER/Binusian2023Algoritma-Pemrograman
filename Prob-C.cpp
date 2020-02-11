#include <stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int total = 0;
	for(int a = 0;a<n;a++){
		int arr[9][9];
		for(int i = 0;i<9;i++){
			for(int j = 0;j<9;j++){
				scanf("%d",&arr[i][j]);
			}
		}
		int betul = 1;
		int jumlah[10] = {0};
		int tempy=0,tempx=0;
		while(tempy != 3){
			for(int i = 0;i<10;i++){
				jumlah[i] = 0;
			}
			if(tempx == 3){
				tempx = 0;
				tempy += 1;
			}
			if(tempy == 3){
				break;
			}
			for(int i = tempy*3;i<(tempy*3)+3;i++){
				for(int j = tempx*3;j<(tempx*3)+3;j++){
					if(jumlah[arr[i][j]] == 0){
						jumlah[arr[i][j]] += 1;
					}
					else{
						betul = 0;
						break;
					}
				}
				if(betul == 0) break;
			}
			if(betul == 0) break;
			tempx += 1;
		}
		for(int i = 0;i<9;i++){
			for(int j = 0;j<9;j++){
				int k = j-1;
				while(k != -1){
					if(arr[i][j] == arr[i][k]){
						betul = 0;
						break;
					}
					k -= 1;
				}
				if(betul == 0){
					break;
				}
				k = j+1;
				while(k != 9){
					if(arr[i][j] == arr[i][k]){
						betul = 0;
						break;
					}
					k += 1;
				}
				if(betul == 0){
					break;
				}
				k = i+1;
				while(k != 9){
					if(arr[i][j] == arr[k][j]){
						betul = 0;
						break;
					}
					k += 1;
				}
				if(betul == 0){
					break;
				}
				k = i-1;
				while(k != -1){
					if(arr[i][j] == arr[k][j]){
						betul = 0;
						break;
					}
					k -= 1;
				}
				if(betul == 0){
					break;
				}
			}
			if(betul == 0){
				break;
			}
		}
		if(betul == 0){
			printf("Case #%d: FALSE\n",a+1);
		}
		else{
			printf("Case #%d: TRUE\n",a+1);
			total += 1;
		}
	}
	double x = (double)total;
	n = (double) n;
	x /= n;
	printf("%.2lf%%\n",x*100.0);
}
