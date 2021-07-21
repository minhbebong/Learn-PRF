#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
	char st[100];
	printf("Nhap chuoi:");
	gets(st);
	int ng = 0, pa = 0;
	int i;
	char ch;
	for(i = 0; i<strlen(st);i++)
	{
		ch = tolower(st[i]);
		if(isalpha(ch)){
			if(ch =='a'||ch =='u'||ch =='e'||ch =='i'||ch =='o'){
				ng++;
			}
			else{
				pa++;
			}
		}	
	}
	printf("Tong so nguyen am %d,phu am: %d\n",ng,pa);
	printf("\nNhap chuoi vua nhap:%s",st);
	return 0;
}
