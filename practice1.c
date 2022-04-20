#include<stdio.h>
int main(){
 int n;
 scanf("%d",&n);
//  n is also inclusive mean it the even number  is between <=n .= it is added as written inclusive
 for (int i = 1; i <=n; i++)
 {
     if(i%2==0)
     {
         printf("%d ",i);
     }
 }
    return 0;
}