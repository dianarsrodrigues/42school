/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conv_ptr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diarodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 22:47:40 by diarodri          #+#    #+#             */
/*   Updated: 2022/11/22 01:48:15 by diarodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_put_ptr(unsigned long n)
{
	if (n >= 16)
	{
		ft_conv_ptr(n / 16);
		ft_conv_ptr(n % 16);
	}
	else
	{
		if (n <= 9)
			ft_putchar(n + '0');
        else
			ft_putchar(n - 10 + 'a');
    }
}

int	ft_conv_ptr(unsigned long n)
{
	int	len;

	len = 0;
	len += write(1, "0x", 2);
	if (n == 0)
		len += write(1, "0", 1);
	else
	{
		ft_put_ptr(n);
		len += ft_len_hex_ptr(n);
	}
	return (len);
}