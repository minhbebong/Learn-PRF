#include <stdio.h>
int main(){
	float a,b,c;
	printf("Nhap ba canh : ");
	scanf("%f %f %f",&a,&b,&c);
	if( a<b+c && b<a+c && c<a+b ){
	if((a == b)&& (b == c)) 
		printf("Mot tam giac deu!\n");		
	else if((a*a == b*b + c*c )||( b*b == a*a + c*c )|| (c*c == b*b + a*a ))
		printf("Mot tam giac vuong!\n");		
	else if((a == b )||( a == c )|| (b == c ))
		printf("Mot tam giac can!\n");
    else
	    printf("Mot tam giac Thuong!\n");
	}
	else
		printf("Khong tao thanh tam giac");	
	return 0;		
}


//#include<stdio.h>
//#include<math.h>
//int main(){
//	float a, b, c, dacbiet=0, eps=0.0001;
//	printf("Nhap ba canh tam giac :");
//	scanf("%f %f %f",&a,&b,&c);
//	if(a+b <=c || b+c <= a||c+a <= b)
//		printf("Khong phai ba canh tam giac");
//	else if(a==b && b==c)
//		printf("Tam giac deu");
//	else 
//	{
//		if(a==b || b==c || c==a)
//		{
//			printf("Tam giac can");
//			dacbiet=1;
//		}
//		if(a*a+b*b-c*c< eps ||c*c+b*b-a*a< eps ||a*a+c*c-b*b< eps )
//		{
//			printf("Tam giac vuong");
//			dacbiet=1;
//		}
//		if(dacbiet==0)printf("Tam giac thuong");
//	}
//}
