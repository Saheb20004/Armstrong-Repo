#include<stdio.h>
#include<math.h>
int main(){
    int n,r,c,digit;
    double arm=0;
    printf("Enter a number:");
    scanf("%d",&n);
    printf("Enter number of digit in the given number:");
    scanf("%d",&digit);
    c=n;
    while(n>0){
        r=n%10;
        arm+=pow(r,digit);
        n=n/10;
    }
    if(c==arm){
        printf("Given number is a armstrong number");
    }
    else{
        printf("Given number is not a armstrong number");
    }
    return 0;
}