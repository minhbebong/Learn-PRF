#include <stdio.h>
int main(){
	int x,y,i,S=1;
	printf("Enter x = ");
	scanf("%d",&x);
	printf("Enter y = ");
	scanf("%d",&y);
	for(i = 1; i <= y; i++)
		S = S*x;	
		printf("Gia tri x^y la %d",S);
		return 0;
	}
