//#include <stdio.h>
//int main(){
//	int a, b, c, max;
//	printf("Nhap 3 so nguyen la : ");
//	scanf("%d %d %d", &a, &b, &c);
//	if(a>=b) 
//		max = a;
//	else 
//		max = b;
//	if(c>max)
//		max = c;
//    printf("\nMax = %d", max);
//	return 0;
//}

#include<stdio.h>
#include<math.h>
int main(){
	int a, b, c,max;
	printf("Nhap vao ba so nguyen:");
	scanf("%d %d %d",&a,&b,&c);
	max = (a>b)?a:b;//Toantu ?:
	//	if(a<b) max = b;
	//	else max = a;
	
	max = (c>max)?c:max;
//	if(max < c) max=c;
	printf("Max=%d",max);
}	
