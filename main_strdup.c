////  main_strdup.c//  Libft////  Created by Monine CHAN on 06/08/2021.//#include <unistd.h>#include <stdio.h>#include <stdlib.h>char    *ft_strdup(const char *s1);int     main(){    char s1[] = "42 Wolfsburg";    char *res;        res = ft_strdup(s1);    printf("%s\n", res);    return(0);}