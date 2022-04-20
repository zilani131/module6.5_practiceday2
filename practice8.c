#include<stdio.h>
int main(){
    char lt;
    scanf("%c",&lt);
    if (lt=='a'||lt=='e'||lt=='i'||lt=='u'||lt=='o')
    {
        printf("%c is vowel",lt);
    }
    else{ printf("%c is consonant",lt);}
       
    return 0;
    
}