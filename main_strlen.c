//
//  main_strlen.c
//  Libft
//
//  Created by Monine CHAN on 24/06/2021.
//

#include <unistd.h>

void    ft_putnbr(int nb);

size_t  ft_strlen(const char *str);

int main(void)
{
    int r;
    char str[] = "42 Wolfsburg";
    
    r = ft_strlen(str);
    ft_putnbr(r);
    return (0);
}
