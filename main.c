# include "stdio.h"
int main(){
    int num,temp,sum=0,rem ;
    printf("enter a number");
    scanf("%d",&num);
    temp = num;
    while (num!=0)
    {
        rem = num%10;
        sum = sum+(rem*rem*rem);
        num = num/10;
    }
    if(temp == sum)
        printf("\n%d is ArmstrongNumber",temp);
    else
        printf("\n %d is not ArmstrongNumber",temp);
    
    return 0;
}
