/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diarodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 10:26:23 by diarodri          #+#    #+#             */
/*   Updated: 2022/11/07 16:50:37 by diarodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	ft_isprint(int c)
{
	return (c >= 32 && c < 127);
}

/*int	main (void)
{
	char n = '\n';
	printf("Result when printable character is passed: %d", ft_isprint(n));
}*/
