#include<stdio.h>
int main(){
    int num,count=0,mult=1,result=0;
    printf("Enter a number\n");
    scanf("%d",&num);
    int newNum=num;
    while(num>0){
        num=num/10;
        count++;
    }
    num=newNum;
    printf("Number of digit is %d \n",count);

    int newCount=count;
    while(num>0){
        int rem=num%10;
        while(count!=0){
             mult=mult*rem;
            count--;
        }
        result=result+mult;
        num=num/10;
        count=newCount;
        mult=1;
    }
    printf("%d\n",result);
    if(result==newNum){
        printf("%d is a Armstrong number\n",newNum);
    }
    else{
        printf("%d is not a Armstrong number",newNum);
    }
}