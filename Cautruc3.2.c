#include <stdio.h>
#include <math.h>
int main(){
	int n, i, dem ;
	printf("Enter n = ");
	scanf("%d", &n);
	for(i = 1; i < n; i++){
		if(i % 3 == 1 && i != 1){
			printf("%d ", i);
		}
		dem ++;
	}
	printf("So luong :%d ",dem++);
}
