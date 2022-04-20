#include<stdio.h>
#include<stdlib.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    if(a==5||b==5||(a+b)==5||abs(a-b)==5) //using abs have to import stdlib header file
    {printf("true");}
    return 0;

}