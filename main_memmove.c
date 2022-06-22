//
//  main_memmove.c
//  Libft
//
//  Created by Monine CHAN on 23/07/2021.
//

#include <unistd.h>
#include <stdio.h>

void print_elements(char *array, int size)
{
  int i;
  printf ("Elements : ");
  for (i = 0; i < size; i++) {
    printf ("%c, ", array[i]);
  }
  printf (" ");
}

void	*ft_memmove(void *dst, const void *src, size_t len);


int main()
{
  char c_array[] = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
	printf("Before memmove()\n");
  print_elements(c_array, sizeof(c_array));
  printf("\nAfter memmove()\n");
  ft_memmove((void *)&c_array[1], (void *)&c_array[3], 3);
  print_elements(c_array, sizeof(c_array));
}
