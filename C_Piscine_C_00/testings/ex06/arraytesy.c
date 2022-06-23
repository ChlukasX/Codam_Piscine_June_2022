#include <unistd.h>

void    ft_print_comb2(void)
{
    static int right[9][9] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int i;

    i = 0;
    while(i < 99)
    {
        write(1, &i &i, 2);
        i++;
    }
}

/*void make(int right[99])
{
    
    int i;

    i = 0;
    
}*/

int main(void)
{
    ft_print_comb2();
}