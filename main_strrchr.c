//
//  main_strrchr.c
//  Libft
//
//  Created by Monine CHAN on 29/07/2021.
//

#include "libft.h"
#include <stdio.h>


int main () {
   const char str[] = "42 Wolfsburg 42 WOB";
   const char ch = '4';
   char *p, *p2;

   p = strrchr(str, ch);
   printf("String starting from last occurrence of %c is: %s\n", ch, p);

   p2 = strrchr(str, 'W');
   printf("String starting from last occurrence of 'W' is: %s\n", p2);

   return 0;
}
