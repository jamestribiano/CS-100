/*
Programer: James Tribiano
Date: 10/1/16
This program will calcualte the amount of ingredients
you will need for the amount of cookies you want to bake.
*/

#include<stdio.h>
int main()
{
    /*begin*/
    /*decalartion*/
    float recipe = 48;
    float cookies_made;
    float cupsofsugarneeded;
    float cupsofbutterneeded;
    float cupsofflourneeded;
    
    /*assignment*/
    printf("Enter the amount of cookies you have would like to bake: ");
    scanf("%f", &cookies_made);
    
    /*Processing*/
    cupsofsugarneeded = (cookies_made / recipe) * 1.5;
    cupsofbutterneeded = (cookies_made / recipe) * 1;
	cupsofflourneeded = (cookies_made / recipe) * 2.75;
    
    /*ouput*/
    printf("The cups of sugar you need: %.2f\n", cupsofsugarneeded);
    printf("The cups of butter you need: %.2f\n", cupsofbutterneeded);
    printf("The cups of flour you need: %.2f\n", cupsofflourneeded );
    
    /*end*/
    system("PAUSE");
    return 0;
}
