#include <stdio.h>

int main(){
	int i, j, n;
	scanf("\n%d", &n);
	printf("\nOUTPUT:\n");	
	for(i = 1; i <= n; i++){//In mot hang tam giác
		for(j = 1; j <= i; ++j) //j:1,2,3,...i
			printf("*");		
		printf("\n");//Di chuyen den hang tiep theo
	}
	return 0;
}
