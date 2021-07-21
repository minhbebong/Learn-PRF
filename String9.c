#include<stdio.h>
#include<string.h>
int isValid(char *s)
{
	int i;
	if(strlen(s)==0) return 1;
	for(i = 0; i < strlen(s);i++)
		if( s[i] != ' ') return 1;
	return 0;
}
void cut(char *s,char *ho,char *ten){
	int index;
	if(!isValid(s)){
		strcpy(ho, "");
		strcpy(ten, "");
		return;
	}
	index = strlen(s)-1;
	while(index >= 0 && s[index] !=' ') index--;
	//index hoac = -1, hoac = vi tri dau space cuoicung trong xau
	strcpy(ten,s+index+1);
	if(index != -1)
	{
		strcpy(ho,s);
		ho[index] = '\0';
	}
	else strcpy(ho,"");
}
main(){
	char s[100] = "", ho[100],ten[100],reverse[100]="";
	while(1){
		if(!isValid(s)) break;
		cut(s, ho , ten);
		if(strlen(reverse)!= 0)
		strcat(reverse, " ");
		strcat(reverse,ten);
		strcpy(s,ho);
	}
	printf("Xau dao nguoc:%s",reverse);
}// bi loiii

