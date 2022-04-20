#include<stdio.h>
#include<math.h>
int main(){
    float a,b,c;
    scanf("%f%f%f",&a,&b,&c);
    float x=(-b/(2*a))+sqrt(b*b-4*a*c)/(2*a);
    float y=(-b/(2*a))-sqrt(b*b-4*a*c)/(2*a);
    if ((b*b-4*a*c)<0)
    {
        printf("No roots");
    }
    else if ((b*b-4*a*c)==0){
         printf("One root\n");
         printf("Root: %.2f",-b/(2*a));
    }
    else{
        printf("Two roots\n");
        printf("Root1: %.2f\n",x);
        printf("Root1: %.2f",y);
    }
 return 0;   
}