/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diarodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 13:46:13 by diarodri          #+#    #+#             */
/*   Updated: 2022/11/07 16:52:13 by diarodri         ###   ########.fr       */
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
}

void	*ft_memcpy(void *dest, const void *str, size_t n)
{
	char	*cstr;
	char	*cdest;
	int		i;

	i = 0;
	cstr = (char *)str;
	cdest = (char *)dest;
	while (i < n)
	{
		cdest[i] = cstr[i];
		i++;
	}
}*/

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t i;

	if (!dst && !src)
		return (0);
	i = 0;
	if ((size_t)dst - (size_t)src < len)
	{
		i = len - 1;
		while (i >= 0 && i < len)
		{
			((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
			i--;
		}
	}
	else
	{
		while (i < len)
		{
			((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
			i++;
		}
	}
	return (dst);
}

/*int	main(void)
{
	char str[20] = "Diana Rodrigues";

	printf("Before memmove : %s\n", str);
	ft_memmove(str+5, str, ft_strlen(str)+1);
	printf("After memmove : %s\n", str);
	return(0);
}*/
