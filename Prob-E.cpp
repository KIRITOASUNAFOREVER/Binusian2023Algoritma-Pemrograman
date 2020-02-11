#include <stdio.h>

int main() {
	
	int tcase = 0;
	int num = 0, temp = 0;
	int arr[1001] = {0};
	
	scanf("%d", &tcase);
	for(int i = 1; i <= tcase; i++) {
		scanf("%d", &num);
		
		for(int j = 2; j <= num; j++) {
			temp = j;
//			printf("Temp: %d\n", temp);
			for(int k = 2; k <= j; k++) {
//				printf("Temp2: %d\n", temp);
				if(temp % k == 0) {
//					printf("Jalan: %d %d\n", temp, k);
					temp /= k;
					arr[k]++;
					k = 1;
				}
			}
		}
		
		printf("Case #%d:\n", i);
		for(int j = 2; j < 1001; j++) {
			if(arr[j] != 0) {    
				printf("%d %d\n", j, arr[j]);
				arr[j] = 0;
			}
		}
	}

	return 0;
}

