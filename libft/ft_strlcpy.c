/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diarodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 14:26:09 by diarodri          #+#    #+#             */
/*   Updated: 2022/11/07 15:54:15 by diarodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

/*size_t	ft_strlen(const char *str)
{
	size_t	a;

	a = 0;
	while (str[a] != '\0')
	{
		a++;
	}
	return (a);
}*/

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	char	*csrc;

	csrc = (char *)src;
	i = 0;
	if (size > 0)
	{
		while (csrc[i] && i < size - 1)
		{
			dst[i] = csrc[i];
			i++;
		}
		dst[i] = '\0';
	}
	while (src[i])
		i++;
	return (i);
}

/*int	main(void)
{
	char src[] = "teste";
	int size = 5;
	char dest[] = "ole";
	
	int sizes = ft_strlcpy (dest, src, size);
	printf("%d\n", sizes);
	printf("%s", dest);
}*/
