#include<stdio.h>
int main(){
    int n,i;
    int arr[100];

    printf("Enter number of elements:");
    scanf("%d",&n);

    printf("Enter elements:\n");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);

    int largest=arr[0];
    int smallest=arr[0];

    for(i=1;i<n;i++){
        if(arr[i]>largest)
            largest=arr[i];
        if(arr[i]<smallest)
            smallest=arr[i];
    }

    printf("Largest=%d\n",largest);
    printf("Smallest=%d",smallest);
    return 0;
}