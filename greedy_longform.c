/**************************************************************************************
* greedy.c
*
* Computer Science 50
* Jenny Bradley (Jennynot) jennynot@gmail.com
*
* User prescribes change owed, program calculates the fewest coins required to 
* supply the change
*
* Allowable Change:
* quarter = 25 cents
* dimes = 10 cents
* nickles = 5 cents
* cents = 1 cents
*
* <Checked program with check50 2014.fall.pset1.greedy greedy.c>
*
**************************************************************************************/

#include <stdio.h>
#include <cs50.h>

int main(void)

{

// Step 1: Let user define the required value for change owed

    float owed;

    printf("\n");
    printf("How much change is owed?\n");
    printf("Please ensure the value is above 0 and in the form 0.00\n");
    printf("\n");
    printf("$: ");
    owed = GetFloat();

// End the program if no change is required

    if(owed==0.00)
    {
    printf("It appears you entered a value of $%0.2f, thus no change is required!\n", owed);
    printf("\n");
    return 0;
    }
    else
    {
    }
    
// Test the given value is a positive decimal  
    
    int SC1 = 1;
     
    do
    {
        int inttest = owed;
        float decimaltest = owed - inttest;
        
        if(decimaltest==0)
            {
                SC1 = 1;
                
                printf("Please ensure the value is in the form 0.00 and/or not negative:\n");
                printf("\n");
                printf("$: ");
                owed = GetFloat();
            }
        else
            {
                SC1 = 0;
                printf("\n"); 
            }
    }
    while (SC1 == 1); 
    
    printf("Thankyou, the total change owed is confirmed as $%0.2f.\n", owed);
    printf("\n");
    
// Step 2: determine the minimum change required

    int numq = 0; // number of quarters
    int numd = 0; // number of dimes
    int numn = 0; // number of nickles
    int numc = 0; // number of cents 
    float owedsimp = owed*100; // conversion to cents to simplify calculations
    float numq_remaining = 0;
    float numd_remaining = 0;
    float numn_remaining = 0;
        
// if/when the current total of owed change is over 25 cents (ie one quarter)
    
    if (owedsimp>=25)   
    {
        numq = owedsimp/25;
        numq_remaining = owedsimp - (25*numq);
    }
    else if (owedsimp >0 && owedsimp<25)
    {
        numq_remaining = owedsimp;
    }
    else
    {
        numq = 0;
    }  
    
// if/when the current total of the remaining/owed change is over 10 cents (ie one dime)
    
    if (numq_remaining>=10)   
    {
        numd = numq_remaining/10;
        numd_remaining = numq_remaining - (10*numd);
    }
    else if (numq_remaining>0 && numq_remaining<10)
    {
        numd_remaining = owedsimp;     
    }
    else
    {
        numd = 0;
    }
        
// if/when the current total of the remaining/owed change is over 5 cents (ie one nickle)
    
    if (numd_remaining>=5 && numd_remaining<10)   
    {
        numn = numd_remaining/5;
        numn_remaining = numd_remaining - (5*numn);
    }
    else if (numd_remaining>0 && numd_remaining<5)
    {       
        numn_remaining = numd_remaining;
    }
    else
    {
        numn = 0;
    }
   
// if/when the current total of remaining/owed change is less than 5 cents (ie one nickle)
    
    if (numn_remaining>0 && numn_remaining<5)   
    {
        numc = numn_remaining/1;
    }
    else if (numn_remaining==0)
    {
        numc = 0;
    }
    
// determine numbers of quarters, dimes, nickles and cents

    int totalq = 0;
    int totald = 0;
    int totaln = 0;
    int totalc = 0;

    if(numq>0)
    {
        totalq = numq;
    }
    else
    {   
        totalq = 0;
    }
    
    if(numd>0)
    {
        totald = numd;
    }
    else
    {   
        totald = 0;
    }
    
    if(numn>0)
    {
        totaln = numn;
    }
    else
    {   
        totaln = 0;
    }
    
    if(numc>0)
    {
        totalc = numc;
    }
    else
    {   
        totalc = 0;
    }    
    
    int totalcoins = totalq + totald + totaln + totalc;

// Step 3: display the results to the user

    printf("The smallest number of coins you need is thus %i coins, which consist of:\n", totalcoins);
    
    if(totalq>1)
    {
        printf("%i quarters\n", totalq);
    }
    else if(totalq==1)
    {
        printf("%i quarter\n", totalq);    
    }
    else
    {
    }
    
    if(totald>1)
    {
        printf("%i dimes\n", totald);
    }
    else if(totald==1)
    {
        printf("%i dime\n", totald);    
    }
    else
    {
    }
    
    if(totaln>1)
    {
        printf("%i nickles\n", totaln);
    }
    else if(totaln==1)
    {
        printf("%i nickle\n", totaln);    
    }
    else
    {
    }
        
    if(totalc>1)
    {
        printf("%i cents\n", totalc);
    }
    else if(totalc==1)
    {
        printf("%i cent\n", totalc);    
    }
    else
    {
    }
    printf("\n");   
}        
