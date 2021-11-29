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
<<<<<<< HEAD
} 
=======
}
>>>>>>> 8e1809a6eff76e66d2674759b8c74e37b6f5ed76

int main()
{
    ft_maff_revalpha();
    return 0;
}
