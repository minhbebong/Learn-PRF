#include<stdio.h>
#include<string.h>
main(){
	char s[30][101];//khai 1 mang , ten la s,co toi da 30 phan tu
	float d[30];
	int i,n;
	printf("Nhap so luong svien : "); scanf ("%d",&n);
	for(i=0; i<n; i++)
	{
		printf("Nhap ten sinh vien thu %d :",i);
		fflush(stdin);
		scanf("%100[^\n]", &s[i]);
		printf("Diem: ");
		scanf("%f", &d[i]);
	}
	printf("Danh sach %d sinh vien da nhap:\n",n);
	for(i=0; i<n; i++)
		printf("%s - %f\n",s[i],d[i]);
}
