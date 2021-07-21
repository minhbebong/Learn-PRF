//#include<stdio.h>
//#include<string.h>
//#include<math.h>
//main(){
//	char a[100];
//	int n,vt;
//	printf("Nhap chuoi ki tu:");
//	scanf("%99[^\n]",a);
//	printf("Nhap vi tri muon xoa:");
//	scanf("%d",&vt);
//	printf("Nhap ki tu muon them:");
//	scanf("%d",&n);
//	strcpy(a+vt,a+vt+n);
//	printf("Xau sau khi xoa %d ki tu la: %s\n",n,a);	
//}

#include<stdio.h>
#include<string.h>
main(){
	char s[101]="01234567";
	int n=2,vt=3, end;
	if( vt > strlen(s)|| vt < 0||n<0)
	{
		printf("Yeu cau xoa khong phu hop");
		return 0;
	}
	if(vt+n <= strlen(s)) end = vt + n;
	else end = strlen(s);
	strcpy(s+vt,s+end);
	printf("%s",s);
}
