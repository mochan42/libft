//
//  main_strlcat.c
//  Libft
//
//  Created by Monine CHAN on 27/07/2021.
//

#include "libft.h"
#include <stdio.h>



int main ()
{
	char first[] = "42_";
	char last[] = "Wolfsburg";
	int r;
	int size = 12;
	char buffer[size];

	strcpy(buffer,first);
	r = ft_strlcat(buffer,last,size);

	puts(buffer);
	printf("Value returned: %d\n",r);
	if( r > size )
		puts("String truncated");
	else
		puts("String was fully copied");

	return(0);
}

