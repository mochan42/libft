//
//  main_ft_strtrim.c
//  Libft
//
//  Created by Monine CHAN on 02/08/2021.
//

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

char	*ft_strtrim(char const *s1, char const *set);

int main(void)
{
	char	*s1 = "\t\t\t42 \t \nWob\t\t";
	char	*ret = ft_strtrim(s1, "\t");
	printf("s1 : %s\n", s1);
	printf("ret : %s\n", ret);
	return (0);
}
