#include <stdio.h>
#include <string.h>
//Neu xau s ma toan dau cach hoac rong -> ko valid-> return
//nguoc lai-> is valid-> return true:1
int isValid(char *s)
{
	int i;
	if(strlen(s)==0) return 0;
	for(i =0; i< strlen(s);i++)
		if( s[i] != ' ') return 1;
	return 0;
}
//void cut(char s[100],char ho[100],char ten[100])
void cut(char *s,char *ho,char *ten){
	int index;
	//neu xau toan dau cach , hoac rong-> ho="",ten="",ketthuc
	if(!isValid(s)){
		strcpy(ho, "");
		strcpy(ten, "");
		return;
	}
	//tim index
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
main()
{
	char s[100] = "Nguyen Thanh Tung", ho[100],ten[100];
	cut (s,ho,ten);
	printf("Ten :|%s|\n",ten);
	printf("Ho :|%s|\n",ho);
}
