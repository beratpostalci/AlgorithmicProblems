#include <stdio.h>
#include <math.h>

void coinChange(int S, int *num) {
	
	int d[5] = {50,20,10,5,1};
	
	
	for(int i = 0; i < 5; i++) {
		
		num[i] = floor(S / d[i]);
		S = S % d[i];
		
	}
	
}

int main() {
	
	int S;
	int num[5];
	int d[5] = {50,20,10,5,1};
	
	printf("Enter cents to be splitted: ");
	scanf("%d",&S);
	
	coinChange(S, num);
	
	
	printf("For %d cents, least number of coins:\n", S);
	
	for(int i = 0; i < 5; i++) {
		
		if(num[i] != 0) {
			
			if(d[i] == S) {
				printf("%d*%d\n", num[i], d[i]);
			} else {
				printf("%d*%d + ", num[i], d[i]);
			}
		}
		
	}
	
	
	
	return 0;
}
