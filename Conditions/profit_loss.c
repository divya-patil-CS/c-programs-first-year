#include<stdio.h>
int main() {
    float costPrice,sellingPrice;
    printf("Enter cost price:");
    scanf("%f",&costPrice);
    printf("Enter selling price:");
    scanf("%f",&sellingPrice);

    if (sellingPrice>costPrice)
        printf("Profit=%.2f",        sellingPrice-costPrice);

    else if(costPrice>sellingPrice)
        printf("Loss =%.2f",costPrice- sellingPrice);
    else
        printf("No profit no loss");
    return 0;
}