//dem tu trong chuoi
#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
	char s[100];
	int l,i,count=0;
	printf("Nhap xau s:");
	scanf("%[^\n]",s);
	printf("Xau vua nhap la : %s",s);	
	l=strlen(s);// do dai string
	for(i=0; i < l-1; i++)
	{
		if(s[i]==' '&& s[i+1]!=' ')
		count++;
	}
	printf("%d",s[1]);
	if(s[0]!='\0'&& isspace(s[0])) count++;// Cong so tu dau tien khi co them dau cach
	printf("\nSo tu trong xau la : %d",count);
}
