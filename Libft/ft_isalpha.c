/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diarodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 16:09:35 by diarodri          #+#    #+#             */
/*   Updated: 2022/11/02 16:09:40 by diarodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>


int	ft_isalpha(int c)
{
	if (c <= 65 && c >= 90 || c <= 97 && c >= 122)
	{
		write(1, &c, 1);
	}
	return (0);
}

int	main (void)
{
	int var = 'd';
	int var1 = '2';
	
	ft_isalpha(var);
	ft_isalpha(var1);
}
