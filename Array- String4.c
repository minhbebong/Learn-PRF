#include<stdio.h>
#include<string.h>
struct SinhVien
{
	int Maso;
	char Ten[101];
	float toan,van;
};
void NhapTT(struct SinhVien *s){
	printf("Nhap du lieu cho :");
	printf("\nMa so:"); scanf("%d%*c",&s->Maso);
	printf("Ten: "); scanf("%100[^\n]",s->Ten);
	printf("Diem toan: "); scanf("%f",&s->toan);
	printf("Diem van: "); scanf("%f",&s->van);
}
void InTT(struct SinhVien s)
{
	printf("Sinh Vien : %d - %s - %f\n",s.Maso,s.Ten,((s.toan+s.van)/2));
}
main()
{
	struct SinhVien s[100];
	int n,j,i;
	printf("Nhap slsv:");
	scanf("%d",&n);
	for(j = 0; j < n; j++){
		NhapTT(&s[j]);
		InTT(s[j]);
	}
//	for(i=0;i < n; i++){
//		InTT(s[i]);
//	}
	return 0;
}

