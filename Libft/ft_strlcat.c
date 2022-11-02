/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diarodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 12:41:44 by diarodri          #+#    #+#             */
/*   Updated: 2022/07/26 16:22:00 by diarodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <bsd/string.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	x;

	i = 0;
	j = ft_strlen(dest);
	x = ft_strlen(src);
	if (size == 0 || size <= j)
		return (x + size);
	while (src[i] != '\0' && i < (size - j - 1))
	{
		dest[j + i] = src[i];
		i++;
	}
	dest[j + i] = '\0';
	return (j + x);
}
int    main(void)
{
    char    dest[11] = "fffff";
    char    src[10] = "ddddd";
    int	test;
    int	fun;
    
    test = ft_strlcat(dest, src, -1);
    printf("%i \n", test);
    printf("%s \n", dest);
    fun = strlcat(dest, src, -1);
    printf("%i\n", fun);
    printf("%s \n", dest);
    return (0);
}
