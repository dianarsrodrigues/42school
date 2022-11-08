/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diarodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 23:37:23 by diarodri          #+#    #+#             */
/*   Updated: 2022/11/08 20:54:41 by diarodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	s;
	int	res;

	i = 0;
	s = 1;
	res = 0;
	while (str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r'))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			s = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = (res * 10) + (str[i] - '0');
		i++;
	}
	return (res * s);
}

/*int		main(void)
{
	char a[] = "-1231as23";
	char b[] = "-+1231as23";
	char c[] = "+a231as23";
	char d[] = " 21+1231as23";
	char e[] = " aasdwae";

	printf("\n%d \n", atoi(a));
	printf("%d \n", ft_atoi(a));

	printf("\n%d \n", atoi(b));
	printf("%d \n", ft_atoi(b));

	printf("\n%d\n", atoi(c));
	printf("%d \n", ft_atoi(c));

	printf("\n%d \n", atoi(d));
	printf("%d \n", ft_atoi(d));

	printf("\n%d \n", atoi(e));
	printf("%d \n", ft_atoi(e));

	return(0);
}*/