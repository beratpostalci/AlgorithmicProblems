#include <stdio.h>

int findFake(int x[], int size){
	
	int middle = size/2;
	int i;
	for(i = 0; i < size; i++){
		
		if (x[i - (middle--)] == x[i - (middle++])){
			
			printf("%d) Not fake\n", i);
		}
		else
		{
			printf("%d) Fake!\n", i);
			return i;
		}
		
	}
	
	return i;
}

int main(){
	
	int x[12] = {1,1,1,1,0,1,1,1,1,1,1,1};
	
	
	printf("The fake one is %d\n", findFake(x, 12));
	
	
	return 0;
}

