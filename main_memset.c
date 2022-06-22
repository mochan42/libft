//
//  main_memset.c
//  Libft
//
//  Created by Monine CHAN on 26/06/2021.
//

#include <stdio.h>
#include <string.h>

void    *ft_memset(void *s, int c, size_t n);

int     main(void)
{
    int LEN = 10;
    char arr[LEN];
    int loop;
	
    printf("Array elements are (before Memset): \n");
    for(loop=0; loop<LEN; loop++)
        printf("%d", arr[loop]);
    printf("\n");
    
    ft_memset(arr, -1, 3);
    ft_memset(arr+3, -2, 3);
    ft_memset(arr+6, -3, 3);
    printf("Array elements are (after Memset): \n");
    for(loop=0; loop<LEN; loop++)
        printf("%d", arr[loop]);
    printf("\n");
    
    return 0;
}
