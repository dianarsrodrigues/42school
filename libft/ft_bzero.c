/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diarodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 11:54:58 by diarodri          #+#    #+#             */
/*   Updated: 2022/11/07 15:54:15 by diarodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

/*void	*ft_memset(void *str, int c, size_t n)
{
	size_t	i;
	char	*ptr;

	ptr = (char *)str;
	i = 0;
	while (i < n)
	{
		ptr[i] = c;
		i++;
	}
	return (str);
}*/

void	ft_bzero(void *str, size_t n)
{
	ft_memset(str, '\0', n);
}

/*int	main(void)
{
	char str[15] = "Diana Rodrigues";

	printf("Before bzero : %s\n", str);
	ft_bzero(str, 6);
	printf("After bzero :%s\n", str);
	return(0);
}*/
