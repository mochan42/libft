//
//  main_memcmp.c
//  Libft
//
//  Created by Monine CHAN on 26/07/2021.
//

#include "libft.h"
#include <stdio.h>

int main()
{
    int ret = 0;
    //If s1 and s2 equal
    ret = ft_memcmp("abc","abc",2);
    printf("ret = %d\n",ret);
    //if first char of s1 is large to s2
    ret = ft_memcmp("bca","abc",2);
    printf("ret = %d\n",ret);
    //if first char of s1 is small to s2
    ret = ft_memcmp("abc","bca",2);
    printf("ret = %d\n",ret);
    return 0;
}
