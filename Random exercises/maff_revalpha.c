#include <unistd.h>
#include <ctype.h>

void    ft_maff_revalpha(char c)
{   
    int count;            
    
    while(c >= 'a')    
    {        
        if(count % 2 == 0)
        {   
           c = toupper(c);  
           write(1, &c, 1); 
           c = tolower(c);                                 
       } 
       else{            
           write(1, &c, 1);
       }       
       c--; 
       count++;                
    }
}

int main()
{
    ft_maff_revalpha('z');
    return 0;
}