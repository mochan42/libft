//
//  main_atoi.c
//  Libft
//
//  Created by Monine CHAN on 30/07/2021.
//

#include "libft.h"
#include <stdio.h>


int main ()
{
    char str[]="-2142";

    int val = ft_atoi(str);
    printf("%d\n", val);
   return(0);
}

