#include<stdio.h> 
#include<math.h>   
int main() {  
    int n, i,x;
	int a, S = 0,temp;
	printf("Nhap x:\n");  
    scanf("%d", &x);   
    printf("Nhap n:\n");  
    scanf("%d", &n);    
    printf("Nhap %d so trong day\n", n);    
	for(i = 0; i <= n ; i++){
		scanf("%d",&a); 
		temp =a*pow(x,i);
		S += temp;
  	}
    printf("Sum : %d\n", S);   
    return 0;  
} 
