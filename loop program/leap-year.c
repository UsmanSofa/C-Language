#include<stdio.h>
int main(){
    int start_year,end_year;
    printf("Enter a Start Year: ");
    scanf("%d",&start_year);
    printf("Enter a End Year: ");
    scanf("%d",&end_year);
    printf("Your Start Year: %d",start_year);
    printf("Your End Year: %d",end_year);
    while (start_year < end_year)
    {
        if (start_year % 4 ==0)
        {
            printf("Leap year: %d\n",start_year);
        }
        start_year++;
    }
    
    return 0;
}