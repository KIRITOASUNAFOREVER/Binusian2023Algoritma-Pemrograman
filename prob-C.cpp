#include<stdio.h>
int main() {
 
 int input;
 int simbol[105][105],hasil=0; //simbol
 
 scanf("%d", &input);
 	for(int n = 0; n < input; n++) {
     	for(int m = 0; m < input; m++) {
         scanf("%d", &simbol[n][m]); 
    	 }
 	}
    for (int i=0;i< input;i++){
   		for(int j=0;j<input;j++){
         	if (simbol[i][j]==simbol[i+1][j] || simbol[i][j]==simbol[i][j+1]){
         	 	hasil= hasil + 1;
			}
		}
	}
	if (hasil>0) {
		printf("Nay\n");
	}
	else {
		printf("Yay\n");
	}		
	return 0;
}

