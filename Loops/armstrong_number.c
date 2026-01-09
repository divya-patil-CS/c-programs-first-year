#include<stdio.h>
#include<math.h>
int main(){
    int num,original,remainder,digits=0;
    int result=0;

    printf("Enter a number:");
    scanf("%d",&num);

    original=num;

    while(original!=0){
        original/=10;
        digits++;
    }
    original = num;
    while (original!=0) {
        remainder=original%10;
        result+=pow(remainder,digits);
        original/=10;
    }
    if(result==num)
        printf("Armstrong number");
    else
        printf("Not an Armstrong number");
    return 0;
}