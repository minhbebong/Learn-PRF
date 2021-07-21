#include<stdio.h>
#include<string.h>
int main(){
	char s[100], n=0, i;
	printf("Nhap xau s:");
	scanf("%99[^\n]",s);
	for(i=0 ; i < strlen(s); i++)
		if(s[i] != s[strlen(s)-1-i])
		{
			printf("Khong doi xung");
			return 1;
		}
	printf("Doi xung");
}

