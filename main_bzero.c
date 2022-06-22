//
//  main_bzero.c
//  Libft
//
//  Created by Monine CHAN on 13/07/2021.
//

#include <unistd.h>
#include <stdio.h>
#include <string.h>

void    ft_bzero(void *s, size_t n);

int     main(void)
{
    char arr[10];
    size_t loop;
    
    printf("Array elements are (before bzero): \n");
    for(loop=0; loop < sizeof(arr); loop++)
        printf("%d", arr[loop]);
    printf("\n");
    
    bzero(arr, 5);
    
    printf("Array elements are (after bzero): \n");
    for(loop=0; loop < sizeof(arr); loop++)
        printf("%d", arr[loop]);
    printf("\n");
    
    return 0;
}
