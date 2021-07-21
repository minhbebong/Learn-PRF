#include<stdio.h>
#include<string.h>
int main(){
	char s[100];
	int i,l;
	printf("Nhap xau s:");
	scanf("%99[^\n]",s);
	l=strlen(s);
	for(i=0; i < l; i++){
		if(islower(s[i]))
			s[i] = toupper(s[i]);
		else
			s[i] = tolower(s[i]);
	}
	printf("Xau sau khi duoc bien doi : %s",s);
}
