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
// Test the given value is a positive 

    float owed;

    do
    {
        printf("How much change is owed?\n");
        owed = GetFloat();
    }
    while (owed<0);
    
// Step 2: determine the minimum change required

    int numq = 0; // number of quarters
    int numd = 0; // number of dimes
    int numn = 0; // number of nickles
    int numc = 0; // number of cents 
    float num_remaining = owed*100; // conversion to cents to simplify calculations
    float numq_remaining = num_remaining;
    float numd_remaining = 0;
    float numn_remaining = 0;
    float numc_remaining = 0;      
// if/when the current total of owed change is over 25 cents (ie one quarter)

do
{    
if (num_remaining>=25)   
    {
        numq = num_remaining/25;
        numq_remaining = num_remaining - (25*numq);
    }
    else if (num_remaining >0 && num_remaining<25)
    {
        numq_remaining = num_remaining;
    }
    else
    {
        numq = 0;
    }  
}
while (numq_remaining>=25);

printf("numq = %i", numq);
printf("numqremaining = %f", _remaining);

// if/when the current total of the remaining/owed change is over 10 cents (ie one dime)
    do
{    
    if (numq_remaining>=10)   
    {
        numd = numq_remaining/10;
        numd_remaining = numq_remaining - (10*numd);
    }
    else if (numq_remaining>0 && numq_remaining<10)
    {
        numd_remaining = num_remaining;     
    }
    else
    {
        numd = 0;
    }
   }
while (numd_remaining>=10);
     
// if/when the current total of the remaining/owed change is over 5 cents (ie one nickle)

        do
{   
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
      }
while (numn_remaining>=5 && numn_remaining<10);

// if/when the current total of remaining/owed change is less than 5 cents (ie one nickle)
  
          do
{     
    if (numn_remaining>0 && numn_remaining<5)   
    {
        numc = numn_remaining/1;
    }
    else if (numn_remaining==0)
    {
        numc = 0;
    }
           }
while (numc_remaining>0 && numc_remaining<5);

}
