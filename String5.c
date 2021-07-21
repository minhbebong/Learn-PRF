//In hoa ki tu dau
#include<stdio.h>
#include<string.h>
int main(){
	char s[100],i;
	printf("Nhap xau s:");
	scanf("%[^\n]",s);
	// xoa cac dau cach lien nhau
	for(i=0;i<strlen(s);i++){
		if(s[i] == ' '&& s[i+1]== ' ')// xoa s[i]
		{
			strcpy(s+i,s+1+i);
			i--;
		}
	}
	if(s[0]==' ') strcpy(s,s+1);//xoa dau cach thua o dau
	if(s[strlen(s)-1]==' ') s[strlen(s)-1== ' \0'];//xoa dau cach thua o cuoi
	for(i=0;i<strlen(s);i++)
	{
		if(i==0||s[i-1]==' ')
			s[i] = toupper(s[i]);
		else s[i] = tolower(s[i]);
	}
	printf("Xau s:|%s|\n",s);
	
}
