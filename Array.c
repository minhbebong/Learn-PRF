#include<stdio.h>
#include<conio.h>
void inmang(int a[],int n)
{	//In mang
	int i;
	//printf("Mang vua nhap la \n");
	for(i=0;i<n;i++)
		printf("%d  ",a[i]);
}		
void xoa(int a[],int n,int k)
{
	int i;
	if((k<0)||(k>n-1))
	{
		printf("Vi tri xoa khong hop le \n");
		getch();
		return;
	}	
	for(i=k;i<n;i++)
		a[i]=a[i+1];
	n=n-1;
}
void chen(int a[], int n,int k,int x)
{
	int i;
	//day cac phan tu lui sau 1 o
	for(i=n-1;i>=k;i--)
	{
		a[i+1]=a[i];
	}
	//chen x vao vi tri k
	a[k]=x;
	n=n+1;
}
void sapxep(int a[],int n,int flag)
{//flag=-1 sap xep day theo thu tu giam, neu flag =1 thi sap tang
	int i,j,temp;
	for(i=0;i<n-1;i++)
		for(j=i+1;j<n;j++)	
		{
			if((a[i]-a[j])*flag>0)
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
}
main()
{
	int a[100],n,i,s,k;
	//Nhap mang
	printf("Nhap so phan tu cua mang ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("a[%d] = ",i);
		scanf("%d",&a[i]);
	}
	printf("\n Mang vua nhap la \n");
	inmang(a,n);
//Sap xep mang theo thu tu giam dan
	sapxep(a,n,-1);
	printf("\n mang sap giam dan la \n");
	inmang(a,n);
//Sap xep mang theo thu tu tang dan
	sapxep(a,n,1);
	printf("\n mang sap tang dan la \n");
	inmang(a,n);	
//chen so x vao vi tri k
int x;
	printf("\n Nhap so muon chen vao mang \n");
	scanf("%d",&x);
//	printf("Nhap vi tri muon chen vao mang \n");
//	scanf("%d",&k);
//Tim vi tri k can chen de day van tang
	for(k=0;k<n;k++)
		if(a[k]>=x)
			break;
	chen(a,n,k,x);
	printf("\n Mang sau khi them %d la \n",x);		
	inmang(a,n);
}
