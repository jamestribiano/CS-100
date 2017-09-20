/*profit.c
Author: name
This program will calculate and display the amount of profit
after a user enters the revenue.
The profit is estimated at 23% of revenue
*/
#include<stdio.h>
int main()
{
    /*begin*/
    /*decalartion*/
    float projected_sales;
    float profit;
    float profit_rate = 0.23;
    
    /*assignment*/
    printf("Enter the project amount of sales: $");
    scanf("%f", &projected_sales);
    
    /*Processing*/
    profit = projected_sales * profit_rate;
    
    /*ouput*/
    printf("The profit for this amount is $%.2f\n", profit);
    
    /*end*/
    system("PAUSE");
    return 0;
}
