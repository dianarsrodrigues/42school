/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diarodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 10:13:36 by diarodri          #+#    #+#             */
/*   Updated: 2022/11/03 10:13:37 by diarodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isascii(int c)
{
	if (c <= 0 && c >= 127)
		return (1);
	return (0);
}

/*int	main (void)
{
	char n = 'A';
	printf("Result when ascii value is passed: %d", ft_isascii(n));
}*/
