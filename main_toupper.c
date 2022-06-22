//
//  main_toupper.c
//  Libft
//
//  Created by Monine CHAN on 02/08/2021.
//

#include <stdio.h>

int ft_toupper(int c);

int main()
{
    char c;
 
    c = 'a';
    printf("%c in uppercase is represented as  %c",
           c, ft_toupper(c));
    return(0);
}
