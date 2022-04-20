#include<stdio.h>
int main()
{
    int x, y;
    scanf("%d%d",&x,&y);
    if (y%x==0)
    {
        for (int i = 1; i <=20 ; i++)
    {
       if ((i%x==0)&&(y%x==0))
       {
         printf("%d\t",i);
       }
       
      
    }
    }
    else{
        printf("No such integers");
    }
    
    return 0;
}