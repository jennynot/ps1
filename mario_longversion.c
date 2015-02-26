/**************************************************************************************
* mario.c
*
* Computer Science 50
* Jenny Bradley (Jennynot) jennynot@gmail.com
*
* A program that creates a half block pyramid of user-define size
*
* <Checked program with check50 2014.fall.pset1.mario mario.c
*
**************************************************************************************/

#include <stdio.h>
#include <cs50.h>

int main(void)
{

// define the height of the pyramid using user input

    printf("How high do you want your pyramid to be?\n");
    printf("\n");
    int height;
    
// ensure the number falls within numerical requirements

    do
    {
        printf("Please select an integer between 1 and 23:\n");
        height = GetInt();
/       printf("\n");
    }
    while (height<1 || height>23);
    
// keep the user informed

    printf("Thankyou, your pyramid will be %i blocks high!\n", height);
    printf("\n");
    printf("--->\n");
    printf("\n");

// display the pyramid

    int x;
    int i;
    int j;
         
for (i=0; i<height; i++)
	{
		for (j=(height-1); j>=i; j--)
			{
				printf(" ");
			}
			
		printf("#");
			        
		for (x=0; x<=(height-(height-i)); x++)
			{
				printf("#");
			}
		printf("\n");
	}

 printf("\n");	
}

