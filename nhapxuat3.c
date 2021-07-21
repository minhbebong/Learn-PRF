#include <stdio.h>

int main() {
	//khai bao du bien
	int R,h;
	float SDAY, SXQ, V, PI = 3.14159;
	//cac buoc xu li
	printf("Nhap ban kinh R: ");
	scanf("%d", &R);
	printf("Nhap chieu cao h: ");
	scanf("%d", &h);
	SDAY = PI * R * R;
    SXQ = 2* PI * R * h;
    V = SDAY * h;
    printf("Dien tich day la : %f \n", SDAY);
    printf("Dien tich xung quanh la : %f \n", SXQ);
    printf("The tich la : %f", V);
    return 0;
    }
    

