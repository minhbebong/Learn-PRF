#include<stdio.h>
#include<string.h>
void chen(char s1[100]){
    int vitri;
    char s[100]="",s2[100]="";
    printf("Nhap chuoi can chen: ");
    scanf("%99[^\n]",s2);
    printf("Nhap vi tri can chen: ");
    scanf("%d",&vitri);
    strcpy(s,s1+vitri-1);
    strcpy(s1+vitri-1,s2);
    strcat(s1,s);
    printf("Xau moi : %s",s1);
}
int main(){
    char s1[]="Nguyen Minh";
    chen(s1);
    return 0;
}
