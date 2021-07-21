#include <stdio.h>
int main() {
   int n,i,j;
   printf("Enter n =");
   scanf("%d",&n);
   printf("Ve tam giac sao deu:\n");
   for(i=1; i<=n; i++){
   	for(j=1;j<=2*n-1;j++)//j:1,2,3,4,..n
   		if(j>=i && j<=2*n-i)
   			printf("*");
   		else printf(" ");
   	printf("\n");
//   for(i = n-1; i >= 0; i--) {
//      for(j = 1; j <= n-i; j++)
//         printf(" "); 
//      for(j = 1; j <= 2*i+1; j++)
//         printf("*");
//      printf("\n");
   }
   return 0;
}
