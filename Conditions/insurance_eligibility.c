#include<stdio.h>
int main() {
    int age;
    char health,location;
    printf("Enter age:");
    scanf("%d",&age);
  printf("Health(e=excellent,p=poor):");
    scanf("%c",&health);
    printf("Location (c=city,v=village): ");
    scanf("%c",&location);
    if (age>=25 &&age<=35 &&health== 'e' && location == 'c')
        printf("Premium=Rs.4000");
    else
        printf("Not eligible for insurance");
    return 0;
}