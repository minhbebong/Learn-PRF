#include<stdio.h>
void insert(int a[],int *n,int k,int x)
{
	int i;
	for(i = *n+1; i>k; i--)
	{
		a[i]=a[i-1];
	}
	a[k]=x;
	*n+=1;
}
int main()
{
	int n,a[100],i;
	printf("Nhap n = ");
	scanf("%d",&n);
	for(i=0; i<n; i++)
	{
		printf("a[%d] = ",i);
		scanf("%d", &a[i]);
	}
	for(i=0 ; i<n; i++)
	{
		if(a[i]%2 !=0)
		{
			insert(a, &n, i+1, 0);
		}
	}
	printf("Ket qua la:");
	for(i=0; i<n; i++)
	{
		printf(" %d ",a[i]);
	}
}
