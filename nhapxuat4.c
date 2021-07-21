#include <stdio.h>

int main(){
	//khai bao du lieu
	int r,h;
    float  Cv, S, V, PI=3.14159;
    //cac buoc xu li
    printf("Nhap ban kinh, chieu cao hinh tron la : ");
    scanf("%d  %d", &r,  &h);
    S = PI * r * r;
    Cv = (r * 2)* PI;
    V = h * PI * r * r;
    printf("\n Dien tich hinh tron la : %f", S);
    printf("\n Chu vi hinh tron la : %f ", Cv);
    printf("\n The tich hinh tron la : %f ", V);
    return 0;
    }
