#include <stdio.h>
void Merge(int a[],int lb,int ub,int mid){
    int b[100];
    int i=lb;
    int j=mid+1;
    int k=lb;
    while(i<=mid && j<=ub){
        if(a[i]<=a[j]){
          b[k]=a[i];
          i++;
        }
        else{
            b[k]=a[j];
            j++;
        }
        k++;
    }
    if(i>mid){
        while(j<=ub){
            b[k]=a[j];
            k++;
            j++;
        }
    }
    else{
        while(i<=mid){
            b[k]=a[i];
            i++;
            k++;
        }
    }

    for(k=0;k<=ub-1;k++){
        a[k]=b[k];
    }
}
void MergeSort(int a[], int lb, int ub)
{ 
    if(lb<ub){
        int mid=(lb+ub)/2;
        MergeSort(a,lb,mid);
        MergeSort(a,mid+1,ub);
        Merge(a,lb,ub,mid);
    }
}
int main()
{
    int a[100], size, i;
    printf("Enter the size of the array\n");
    scanf("%d", &size);
    printf("Enter the array\n");
    for (i = 0; i <= size - 1; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("The unsorted array is\n");
    for (i = 0; i <= size - 1; i++)
    {
        printf(" %d ", a[i]);
    }

    MergeSort(a, 0, size);
    printf("The sorted array is\n");
    for (i = 0; i <= size - 1; i++)
    {
        printf(" %d ", a[i]);
    }
}