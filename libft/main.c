#include <stdio.h>
#include "libft.h"
#include <ctype.h>

int	main (void)
{
	printf("[ft_isalpha]\n");
	printf("%d\n", ft_isalpha('h'));//FT_ISALPHA
	printf("%d\n", ft_isalpha('*'));//FT_ISALPHA
	printf("\n");
	printf("[isalpha]\n");
	printf("%d\n", isalpha('h'));
	printf("%d\n", isalpha('*'));
    printf("\n");
    
    printf("[ft_isdigit]\n\n");
	printf("\"digit '3'\"\t");	
	(ft_isdigit('3')) ? (printf("is digit\n")) : (printf("is not digit\n"));
	printf("\"not digit 'h'\"\t");	
	(ft_isdigit('h')) ? (printf("is digit\n")) : (printf("is not digit\n"));
	printf("\"not digit 11\"\t");	
	(ft_isdigit(11)) ? (printf("is digit\n")) : (printf("is not digit\n"));
	printf("\"digit 48\"\t");	
	(ft_isdigit(48)) ? (printf("is digit\n")) : (printf("is not digit\n"));

    
    
	return (0);
}