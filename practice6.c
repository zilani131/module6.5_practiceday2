#include<stdio.h>
int main(){
    int c;
    scanf("%d",&c);
    if (c<0)
    {
       printf("Freezing Weather");
    }
    else if (0<=c&&c<10){
         printf("Very cold Weather");
    }
    
    else if (10<=c&&c<20){
         printf("Cold Weather");
    }
    
    else if (20<=c&&c<30){
         printf("Normal in temperature");
    }
    
    else if (30<=c&&c<40){
         printf("Hot");
    }
    
    else {
         printf("Very HOt ");
    }
    return 0;
}