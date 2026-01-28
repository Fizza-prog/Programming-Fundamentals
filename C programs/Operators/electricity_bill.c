#include<stdio.h>
int main()
{
    int id;
    int units;
    float bill, sAmount, totalBill;
    
    printf("Enter your ID: ");
    scanf("%d",&id);
    printf("Enter your units consumed: ");
    scanf("%d",&units);
    
    if(units<=199)
    {
        bill = 1.2 * units;
        printf("Amount charges @1.20 per unit: %.2f\n",bill);
    }
    else if(units>=200 && units<=400)
    {
        bill = 1.5 * units;
        printf("Amount charges @1.5 per units: %.2f\n",bill);
    }
    else if(units>400 && units<=600)
    {
         bill = 1.8 * units;
        printf("Amount charges @1.8 per unit: %.2f\n",bill);
    }
    else if (units>600)
    {
         bill = 2.0 * units;
        printf("Amount charges @2 per unit: %.2f\n",bill);
    }
    
    if(bill > 400)
    {
        sAmount = bill * 0.15f;
        printf("Surcharge amount: %.2f\n",sAmount);
        totalBill = bill + sAmount;
        printf("Total bill: %.2f\n",totalBill);
    }
    else
    {
        printf("No surcharge applied.\n");
        printf("Total bill: %.2f\n",bill);
    }
    return 0;
}