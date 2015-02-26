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

    int height;
    
// ensure the number falls within numerical requirements

    do
    {
        printf("Height:");
        height = GetInt();
    }
    while (height<0 || height>23);

// display the pyramid

    int x;
    int i;
    int j;
    int k = (height-1);
         
for (i=0; i<height; i++)
	{
	
// print spaces

		for (j=(k); j>i; j--)
			{
				printf(" ");
			}
			
// print hashes

		printf("#");
			        
		for (x=0; x<=(height-(height-i)); x++)
			{
				printf("#");
			}
		printf("\n");
	}
		
}
