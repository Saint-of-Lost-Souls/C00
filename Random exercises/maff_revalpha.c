#include <unistd.h>
#include <ctype.h>

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

int main()
{
    ft_maff_revalpha();
    return 0;
}
