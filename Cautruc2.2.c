#include <stdio.h>
int main(){
	int i ,n,sum=0;
	printf("Enter n =");
	scanf("%d",&n);
	for(i = 0; i < n; i++ ){
		if(i % 2 != 0){
			// tong khi so le
			sum += i;
			}
		}
		printf("Sum = %d",sum);
	}
		//tong khi so chan
		if(i % 2 == 0){
			
			sum += i;
			}
		}
		printf("Sum = %d",sum);
		}
