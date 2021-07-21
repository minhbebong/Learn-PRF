#include <stdio.h>

int main(){
	int kw, S;
	printf("Nhap so kw dien: ");
	scanf("%d",&kw);
	if (kw <= 100 )
		S = 2000 * kw;
	else if(kw <= 200)// 100 < kw <= 200
		S = 200000 +(kw-100)*2500;
	else   	
	    S = 450000 +(kw-200)*3000;
	printf("Tong gia tien la : %d", S);
	return 0;
}
	
