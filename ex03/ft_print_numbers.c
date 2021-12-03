#include <unistd.h>

void    ft_print_numbers(void)
{
    char min;
    char max;

    min = '0';
    max = '9';

    while (min <= max)
    {
        write(1, &min, 1);
        min++;
    } 
    write(1, "\n", 1);

}
int main()
{
    ft_print_numbers();
    return 0;    
}