#include <unistd.h>
#include <ctype.h>
#include <stdio.h>

void    ft_maff_revalpha()
{   
    int count;      
    char z;
    z = 'z';
       
    while(z >= 'a')    
    {        
        if(count % 2 == 0)
        {   
            putchar(toupper(z));            
            write(1, &z, 1);                     
        } 
        else{            
            write(1, &z, 1);
        }
        z--; 
        count++;                
    }
}
 
/* // counter for the loop
    int i = 0;

    // word to convert to uppercase
    char word[] = "edUcaTivE\n"; 
    char chr; 

    // Loop
    while (word[i]) { 
        chr = word[i]; 
        printf("%c", toupper(chr)); 
        i++; 
    } 
  
    return 0; 
}  */

int main()
{
    ft_maff_revalpha();
    return 0;
}