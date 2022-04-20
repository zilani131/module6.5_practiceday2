#include<stdio.h>
int main(){
    int n,k;
    printf("enter n: ");
    scanf("%d",&n);
    int sum=0;
    printf("Input %d integers : ",n);
    for (int i = 0; i <n; i++)
    {
        scanf("%d",&k); //if we give an space after %d then entering input we have to input more than one input we provide to input
       if (k%2==0)
       {
           sum+=k;
       }
       
    }
    printf("sum of even integerr = %d",sum);
    return 0;
}