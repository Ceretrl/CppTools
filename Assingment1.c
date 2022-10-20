//Armstrong Number
#include <stdio.h>
int main(){
    int num,r,sum=0,temp;
    printf("Enter the number = ");
    scanf("%d",&num);
    temp=num;
    while(num>0){
        r=num%10;
        sum=sum+(r*r*r);
        num=num/10;
    }
    if(temp==sum)
        printf("Armstrong number : %d", temp);
    else
        printf("Not Armstrong number : %d", temp);
    return 0;
}