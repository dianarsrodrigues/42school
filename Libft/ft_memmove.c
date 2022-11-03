/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diarodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 13:46:13 by diarodri          #+#    #+#             */
/*   Updated: 2022/11/03 13:46:14 by diarodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

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

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*csrc;
	char	*cdest;
	int		i;

	csrc = (char *)src;
	cdest = (char *)dest;
	i = 0;
	if (csrc > cdest)
	{
		while (i < n)
		{
			cdest[i] = csrc[i];
			i++;
		}
	}
	else
	{
		while (i != n)
		{
			cdest[n - i - 1] = csrc[n - i - 1];
			i++;
		}
	}
	return (cdest);
}

/*int	main(void)
{
	char str[20] = "Diana Rodrigues";

	printf("Before memmove : %s\n", str);
	ft_memmove(str+5, str, ft_strlen(str)+1);
	printf("After memmove : %s\n", str);
	return(0);
}*/
