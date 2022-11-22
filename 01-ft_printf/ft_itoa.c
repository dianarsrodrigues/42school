/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diarodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 15:44:57 by diarodri          #+#    #+#             */
/*   Updated: 2022/11/21 23:56:31 by diarodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_get_size(long n)
{
	int	i;
	int	negative;

	i = 0;
	negative = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		negative = 1;
		n = -n;
	}
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	if (negative)
		return (i + 1);
	return (i);
}

char	*ft_itoa(int n)
{
	char	*result;
	int		size;
	long	nl;

	nl = n;
	size = ft_get_size(nl);
	result = (char *)malloc(sizeof(char) * (size + 1));
	if (result == NULL)
		return (NULL);
	if (nl == 0)
		result[0] = '0';
	if (nl < 0)
	{
		result[0] = '-';
		nl = nl * -1;
	}
	result[size--] = '\0';
	while (nl > 0)
	{
		result[size--] = (nl % 10) + '0';
		nl = nl / 10;
	}
	return (result);
}

/*int	main(void)
{
	int number1 = 123456789;
	int number2 = 1;
	int number3 = 0;
	int number4 = 0001342;
	int number5 = 42;
	int number6 = 422;
	int number7 = -123456789;
	int number8 = -1;
	int number9 = -0;
	int number10 = -00101;
	int number11 = -42;
	int number12 = -422;

	printf("%s\n",ft_itoa(number1));
	printf("%s\n",ft_itoa(number2));
	printf("%s\n",ft_itoa(number3));
	printf("%s\n",ft_itoa(number4));
	printf("%s\n",ft_itoa(number5));
	printf("%s\n",ft_itoa(number6));
	printf("%s\n",ft_itoa(number7));
	printf("%s\n",ft_itoa(number8));
	printf("%s\n",ft_itoa(number9));
	printf("%s\n",ft_itoa(number10));
	printf("%s\n",ft_itoa(number11));
	printf("%s\n",ft_itoa(number12));
	return (0);
}*/
