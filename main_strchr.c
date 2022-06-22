//
//  main_strchr.c
//  Libft
//
//  Created by Monine CHAN on 29/07/2021.
//

#include <unistd.h>
#include <stdio.h>

char *ft_strchr(const char *s, int c);

int main()
{
    const char str[] = "42 Wolfsburg";
    const char ch = 'W';
    char *p;
    p = ft_strchr(str, ch);
    printf("String starting from %c is: %s", ch, p);
    return 0;
}
