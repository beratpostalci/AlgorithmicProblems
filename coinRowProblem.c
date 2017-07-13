#include <stdio.h>

int max(int n1, int n2) {
	
	if(n1 > n2) return n1;
	else return n2;
	
}

int coinRow(int list[], int n) {
	
	int amount[n];
	
	amount[0] = 0;
	amount[1] = list[1];
	printf("F(0) = %d\n", amount[0]);
	printf("F(1) = %d\n", amount[1]);
	for(int i = 2; i < n; i++) {
		amount[i] = max(list[i] + amount[i - 2], amount[i - 1]);
		printf("F(%d) = %d\n",i, amount[i] );
	}
	
	return amount[n-1];
}

int main() {
	
	int n = 8;
	int list[8] = { 0,7,9,11,4,3,5,8 };
	
	printf("Best = %d\n", coinRow(list, n));
	
	return 0;
	
}
