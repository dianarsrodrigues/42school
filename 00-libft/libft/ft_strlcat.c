/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diarodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 15:33:22 by diarodri          #+#    #+#             */
/*   Updated: 2022/11/07 15:54:15 by diarodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	char	*csrc;

	csrc = (char *)src;
	i = 0;
	while (i < size && *dst)
	{
		dst++;
		i++;
	}
	if (i == size)
		return (i + ft_strlen(src));
	j = 0;
	while (csrc[j])
	{
		if (j < size - i - 1)
			*dst++ = csrc[j];
		j++;
	}
	*dst = '\0';
	return (j + i);
}

/*int	main(void)
{
	char    dest[11] = "fffff";
	char    src[10] = "ddddd";
	int	test;
	int	fun;
	
	test = ft_strlcat(dest, src, 10);
	printf("%i \n", test);
	printf("%s \n", dest);
	return (0);
}*/
