#include<stdio.h>
#include<string.h>
struct SinhVien
{
	int Maso;
	char Ten[101];
	float DTB;
}
main(){
	struct SinhVien s1,s2;
	printf("Nhap du lieu cho s1:");
	printf("Ma so:"); scanf("%d%*c",&s1.MaSo);
	printf("Ten: "); scanf("%100[^\n]",s1.Ten);
	printf("Diem TB: "); scanf("%f",&s1.DTB);
	
	printf("Nhap du lieu cho s2:");
	printf("Ma so:"); scanf("%d%*c",&s2.MaSo);
	printf("Ten: "); scanf("%100[^\n]",s2.Ten);
	printf("Diem TB: "); scanf("%f",&s2.DTB);
	
	printf("s1: %d - %s - %f\n",s1.MaSo,s1.Ten,s1.DTB);
	printf("s2: %d - %s - %f\n",s2.MaSo,s2.Ten,s2.DTB);
}
