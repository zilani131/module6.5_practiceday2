#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    if ((n%3 == 0)&&(n%7==0))
    {
        printf("no");
    }
    else if((n%3 == 0)||(n%7==0))
    {
     printf("yes");
    }
    else{
        printf("no");
    }
    
}