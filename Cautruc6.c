#include<stdio.h>    
int main() {  
    int n, i;
	float a, max = 0;    
    printf("Nhap n:\n");  
    scanf("%d", &n);    
    printf("Nhap %d so trong day\n", n);    
	for(i = 1; i <= n ; i++){//day 5,4,3,7,2
		scanf("%f",&a); 
		if(a > max || i == 1)
			max = a ;
  	}
    printf("Gia tri lon nhat la %.2f\n", max);   
    return 0;  
} 


//#include<stdio.h>    
//int main()  
//{  
//    float n, num, max = 0;   
//    printf("Enter n: \n");  
//    scanf("%f", &n);    
//    printf("Enter %d numbers\n", n);    
//    scanf("%f", &num);  
//    max = num;  
//    n = n - 1;    
//    while(n > 0)  
//    {  
//        scanf("%d", &num);  
//        if(num > max)  
//        {  
//            max = num;  
//        }  
//        n--;  
//    }    
//    printf("Biggest number is %.1f\n", max);    
//    return 0;  
//} 
