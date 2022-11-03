/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diarodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 13:24:50 by diarodri          #+#    #+#             */
/*   Updated: 2022/11/03 13:24:51 by diarodri         ###   ########.fr       */
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
}*/

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
}

/*int	main(void)
{
	const char str[] = "Diana Rodrigues";
	char dest[] = "42 Porto";

	printf("Before memcpy : %s\n", dest);
	ft_memcpy(dest, str, ft_strlen(str)+1);
	printf("After memcpy : %s\n", dest);
	return(0);
}*/
