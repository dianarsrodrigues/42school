/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diarodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 10:41:45 by diarodri          #+#    #+#             */
/*   Updated: 2022/11/07 15:55:25 by diarodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*ps1;
	unsigned char	*ps2;
	size_t			i;

	i = 0;
	ps1 = (unsigned char *)s1;
	ps2 = (unsigned char *)s2;
	if (n == 0)
		return (0);
	while ((ps1[i] != '\0' || ps2[i] != '\0') && i < n)
	{
		if (ps1[i] != ps2[i])
		{
			return (ps1[i] - ps2[i]);
		}
		i++;
	}
	return (0);
}
/*int main(void)
{
    char    a[20] = "Dianaee";
    char    b[20] = "Dianarrr";
	int ret = 0;

	char str1[15] = "Dianaee";
   	char str2[15] = "Dianarrr";
	int ret2 = 0;
    
    printf("String1: %s\n", a);
    printf("String2: %s\n", b);
    int diff = ft_strncmp(a,b, ret);
    printf("%d\n", diff);
	
	printf("String1: %s\n", str1);
    printf("String2: %s\n", str2);
    int diff2 = strncmp(str1, str2, ret2);
    printf("%d\n", diff2);
    return (0);  
}*/
