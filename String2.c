#include<stdio.h>
#include<string.h>
int main(){
	int i,dem=0,temp=0,count=0;
	char s[100];
	printf("Nhap xau s:");
	scanf("%99[^\n]",s);
	for(i=0 ; i < strlen(s); i++){
		if(s[i] >='A'&&s[i] <='Z') dem++;
		else if(s[i] >='a'&&s[i] <='z') temp++;
		else if(s[i] >='0'&&s[i] <='9') count++;
	}
	printf("\n So chu hoa trong xau: %d",dem);
	printf("\n So chu thuong trong xau: %d",temp);
	printf("\n So chu so trong xau: %d",count);
	return 0;
}
