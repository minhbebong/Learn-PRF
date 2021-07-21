#include <stdio.h>
#include <math.h>
int main(){
	// Nhap du lieu
	int n;
	printf("Enter n =");
	scanf("%d",&n);
	//Cac buoc thuc hien
	if(n > 0) {
		int i, j;
		for(i = 1; i <= n; i++) {
			for(j = 1; j <= i; j++) {
				printf("*");
			}
			printf("\n");
		}
	} else {
		printf("Nhap vao so duong n!");
	}
	return 0;
	}
