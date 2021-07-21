#include<stdio.h>
#include<math.h>
#include<conio.h>
int main(){
	int a,b,save;
	printf("Nhap a:");
	scanf("%d",&a);
	save = a;
	b=0;
	while(1)
	{
		if(a==0) break;
		b=b*10+a%10;
		a=a/10;
	}
	if( b=save)
		printf("\nLa so doi xung");
	else
		printf("\nKhong la so doi xung");
	return 0;	
}

