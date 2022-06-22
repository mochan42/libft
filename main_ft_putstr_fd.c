//
//  main_ft_putstr_fd.c
//  Libft
//
//  Created by Monine CHAN on 06/08/2021.
//

#include "libft.h"
#include <stdio.h>

void    ft_putstr_fd(char *s, int fd);

int     main()
{
    char s[]="42 Wolfsburg";
    int fd = 1;
    
    ft_putstr_fd(s, fd);
    return(0);
}
