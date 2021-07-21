#include<stdio.h>
#include<string.h>
main(){
	char s[101],ch;
	printf("Nhap 1 xau:");
	scanf("%100[^\n]%*c",s);
	fflush(stdin);
	printf("Nhap 1 ki tu muon xoa:");
	scanf("%c",&ch);
	printf("s=%s\n",s);
	printf("ch=|%c|\n", ch);
}
