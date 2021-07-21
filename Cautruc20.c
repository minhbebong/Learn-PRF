#include <stdio.h>
int main(){
	int n, i, sum = 0,k;
	printf("Nhap k :");
	scanf("%d",&k);
	for(i = 1; i < k; i++){
		n = 1;
		while(n <= (i/2)){
			if(i % n == 0)
				sum += n;
			n++;
		}
		if(sum == i)
			printf("%d ",i);
		sum = 0;
	}
	return 0;
}
