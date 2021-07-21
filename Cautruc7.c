#include <stdio.h>
#include <math.h>
int main(){
	int a,b,c;
	for(a = 1;a < 20; a++){
		for(b = 1;b < 33; b++){
			c= 100-a-b;
			if(5*a+3*b+c*1/3==100 && c%3==0){
				printf("Trau dung:%d,Trau nam:%d,Trau gia:%d\n",a,b,c);			
            }
		}
	}
}

#include <stdio.h>
#include <math.h>
int main(){
	int n, d, g;
	for(d=0;d<=20;d++)
		for(n=0;n<=33;n++)
			g=100-d-n;
				if( d*5+n*3+g/3 == 100)
					printf("dung,nam,gia= %d %d %d\n",d,n,g);
}	
