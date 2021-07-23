
// 0,1,1,2,3,5,8,13,............
// a=0,b=1,c=a+b,a=b,b=c



#include<stdio.h>
int main(){
    int a=0,b=1,c,size,i;
    printf("Enter the size of the series\n");
    scanf("%d",&size);
    printf("%d %d",a,b);
    for(i=2;i<=size-1;i++){
        c=a+b;
        printf(" %d",c);
        a=b;
        b=c;
    }
}