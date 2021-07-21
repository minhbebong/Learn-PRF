#include<stdio.h>
#include<string.h>
struct SinhVien
{
	int Maso;
	char Ten[101];
	float DTB;
};
void NhapTT(struct SinhVien *s){
	printf("Nhap du lieu cho :");
	printf("Ma so:"); scanf("%d%*c",&s->Maso);
	printf("Ten: "); scanf("%100[^\n]",s->Ten);
	printf("Diem TB: "); scanf("%f",&s->DTB);
}
void InTT(struct SinhVien s)
{
	printf("Sinh Vien : %d - %s - %f\n",s.Maso,s.Ten,s.DTB);
}
main()
{
	struct SinhVien s1,s2;
	struct SinhVien s[30];
	NhapTT(&s1);
	NhapTT(&s2);
	InTT(s1);
	InTT(s2);
}

