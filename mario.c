#include <stdio.h>
#include <ctype.h>


void construct_pyramid(int height);

int main(void)
{
    int height_of_pyramid;

    do
    {
        // Prompt user for heigt of the pyramid

        printf("What's the height of the pyramid?: ");

        // get the user's input and append it to the height variable as a integer

        scanf("%d", &height_of_pyramid);
    } 
    while (height_of_pyramid <= 0 );

    construct_pyramid(height_of_pyramid);
}

void construct_pyramid(int height)
{
    // A loop to handle rows of the pyramid
    for (int i = 0; i <= height; i++)
    {
        // inner loop to handle spaces between each row of the pyramid
        for (int j = 0; j <= height - i; j++)
        {
            printf(" ");
        }

        // a loop to handle the printing of the hashtags for each row
        for (int k = 0; k <= i; k++)
        {
            printf("#");
        }

        printf("\n");
    }
}
