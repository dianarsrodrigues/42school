/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diarodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 11:54:58 by diarodri          #+#    #+#             */
/*   Updated: 2022/11/08 22:55:33 by diarodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
