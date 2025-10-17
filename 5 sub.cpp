#include<stdio.h>
int main(){
    int math,phy,chem,bee,cs;

    printf("Enter the marks of :");
    printf("\nmath-");
    scanf("%d",&math);
    printf("\nphy-");
    scanf("%d",&phy);
    printf("\nchem-");
    scanf("%d",&chem);
    printf("\nbee-");
    scanf("%d",&bee);
    printf("\ncs-");
    scanf("%d",&cs);

    int total = math+phy+chem+bee+cs;
    printf("Sum of the five subject marks = %d",total);

    float average = (math+phy+chem+bee+cs)/5;
    printf("\nAverage of the five subject marks = %.1f",average);

}
