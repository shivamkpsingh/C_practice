// #include<stdio.h>
// int main(){
//     int num,counter,factorial=1;
//     printf("Enter the number to calculate the factorial\n");
//     scanf("%d",&num);
//     if(num==0){
//         printf("The factorial of the number is %d ",factorial);
//     }
//     else{
//         for(counter=num;counter>=1;counter--){
//             factorial=factorial*counter;
//         }
//          printf("The factorial of the number is %d ",factorial);
//     }
   
// }


#include<stdio.h>
int main(){
    int N=10,k,inpVal;
    printf("Enter the input value\n");
    scanf("%d",&inpVal);
    if(inpVal==0 || inpVal>5){
        printf("INVALID INPUT\n");
        printf("NUMBER OF CANDIES LEFT %d\n",N);
    }
    else{
        printf("NUMBER OF CANDIES SOLD %d\n",inpVal);
         printf("NUMBER OF CANDIES LEFT %d\n",N-inpVal);
    }
}