#include <stdio.h>

main()

{
    int unit;
    float RS, total_amt, sur_charge;

    
    printf("Enter total units consumed: ");
    scanf("%d", &unit);


    if(unit <= 50)
    {
        RS = unit * 0.50;
    }
    else if(unit <= 150)
    {
       RS = unit * 0.75;
    }
    else if(unit <= 250)
    {
        RS = unit * 1.20;
    }
    else
    {
        RS =  1.50 * unit;
    }

    sur_charge = RS * 0.20;
    total_amt  = RS + sur_charge;

    printf("Electricity Bill = Rs. %.2f", total_amt);

  
}
