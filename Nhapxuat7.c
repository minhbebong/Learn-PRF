#include <stdio.h>
#include <math.h>
#include <string.h>
int main(){
	system("cls");
	//INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	int n;
	printf("Enter n = ");
	scanf("%d",&n);
	
	// Fixed Do not edit anything here.
	printf("\nOUTPUT:\n");
	//@STUDENT: WRITE YOUR OUTPUT HERE:
	int sum = 0;
	while(n!=0){
		int a = n % 10;//lay chu so cuoi cung
		
		//xu ly logic
		sum = sum + a;
		
		//cat chu so cuoi cung di
		n = n / 10;
	}
	
	printf("%d",sum);

	return 0;
}
