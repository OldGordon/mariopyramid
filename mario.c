/**
*   
*    Comment Template
*   
*    by GrinuX ( Toni Juliá Muntaner )
*  
*    CS50 2012
*
*    Palma de Mallorca Spain
*
*/

#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // variables used in the program 
    int height;
    int aux1, aux2 ;
    
    // a do/while for the user input case user type wrong starts over
    do
    {
        printf("Enter the height of Mario's Pyramid, please: ");
        height = GetInt(); 
    }
    while ((height < 0) || (height > 23));
    
    // this 2 vars are initialized due the pattern of the pyramid
    aux1 = 2;
    aux2 = height - 2;
    
    //this for loop goes all over the height of the pyramid                  
    for(int i = 1; i < height + 1; i++) 
    {
        
        //in this loop we print all spaces needed decreasing its number each iteration
        for (int spaces = -1; spaces < (height - aux1); spaces++)
        {
            printf(" ");
        }
        
        //this var helps to decrease each time the number of spaces
        aux1 = aux1 + 1;
        
        
        //here we print the hashes increasing its number each iteration
        for (int hashes = 0; hashes < (height - aux2); hashes++)
        {
            printf("#");
        } 
        
        //this var is updated out of the loop and helps to print hashes
        aux2 = aux2 - 1;
        
        //new line every level of characters    
        printf("\n");     
        
    }
    return 0 ;   
}

