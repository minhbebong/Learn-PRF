//#include <stdio.h>
//#include <math.h>
//int main(){
//	float a,b,c, delta, x1, x2, x;
//	printf("Nhap ba so thuc :");
//	scanf("%f%f%f",&a , &b , &c);
//	if( a == 0 ){//PT bac 1
//	if( b == 0 && c != 0)
//	   	printf("Phuong trinh vo nghiem");
//	else if(b == 0 && c == 0)
//	   	printf("Phuong trinh vo so nghiem");
//	else 
//	   	x = -c / b;
//	   	printf("Nghiem phuong trinh =%0.2f",x);
//	}
//	else { //PT bac 2
//		delta = b * b - a * c * 4;
//	if(delta < 0){
//		printf("Phuong trinh vo nghiem");
//	}
//	else if(delta == 0){
//		x1 = -b/(2*a);
//		printf("PT co nghiem kep x = %0.2f",x1);
//	}
//	else{
//		x1 = (-(b) + sqrt(delta))/(2*a);
//		x2 = (-(b) - sqrt(delta))/(2*a);
//		printf("Nghiem PT la:\nx1 = %0.2f\n \nx2 = %0.2f", x1, x2);
//	}
//}
//	return 0;
//}

#include<stdio.h>
#include<math.h>
main(){
	float a, b, c,delta,x1,x2;
	printf("Nhap 3 tham so:");
	scanf("%f %f %f", &a,&b,&c);
	if(a==0){
		printf("Khong phai pt bac 2");
		return 0;//ket thuc luon
	}
	delta = b*b-4*a*c;
	if(delta < 0)
		printf("Pt vo nghiem");
	else if(delta==0)
		printf("Pt co 1 nghiem kep : %f",-b/(2*a));
	else
	{
		x1=(-b + sqrt(delta))/(2*a);
		x2=(-b - sqrt(delta))/(2*a);
		printf("Pt co 2 nghiem %f %f",x1,x2);
	}
}
