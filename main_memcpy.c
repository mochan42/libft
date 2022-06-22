//
//  main_memcpy.c
//  Libft
//
//  Created by Monine CHAN on 13/07/2021.
//

#include <unistd.h>
#include <stdio.h>
#include <string.h>

void    *ft_memcpy(void *restrict dest, const void *restrict src, size_t n);

int     main(void)
{
    char src[] = "42Wolfsburg";
    char dest[420];
    ft_memcpy(dest, src, strlen(src)+1);
    printf("The copied string is %s\n", dest);
    int arr[] = {0, 1, 2, 3, 4, 0, 1, 2, 3, 4, 0, 1, 2, 3, 4};
    int n = sizeof(arr)/sizeof(arr[0]);
    int dest_arr[n], i;
    ft_memcpy(dest_arr, arr, sizeof(arr));
    printf("The copied array is ");
    for (i=0; i<n; i++)
        printf("%d", dest_arr[i]);
}
