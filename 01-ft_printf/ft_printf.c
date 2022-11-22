/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diarodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 21:31:50 by diarodri          #+#    #+#             */
/*   Updated: 2022/11/22 01:25:28 by diarodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
#include <limits.h>

static int	ft_check_format(va_list *args, char c)
{
	int	len;

	len = 0;
	if (c == 'c')
		len += ft_conv_char(va_arg(*args, int));
	else if (c == 's')
		len += ft_conv_str(va_arg(*args, char *));
	else if (c == 'p')
		len += ft_conv_ptr(va_arg(*args, unsigned long long));
	else if (c == 'd' || c == 'i')
		len += ft_conv_nbr(va_arg(*args, int));
	if (c == 'u')
		len += ft_conv_unsigned(va_arg(*args, unsigned int));
	else if (c == 'x' || c == 'X')
		len += ft_conv_hex(va_arg(*args, unsigned int), c);
	else if (c == '%')
	{
		len++;
		write (1, "%", 1);
	}
	return (len);
}

int	ft_printf(const char *s, ...)
{
	int		i;
	int		len;
	va_list	args;

	i = 0;
	len = 0;
	if (!s)
		return (0);
	va_start(args, s);
	while (s[i] != '\0')
	{
		if (s[i] == '%')
		{
			len += ft_check_format(&args, s[i + 1]);
			i++;
		}
		else
			len += ft_conv_char(s[i]);
		i++;
	}
	va_end(args);
	return (len);
}

/*int main(int ac, char ** av)
{
	
	ft_printf(" %p ", -1);
	printf("\n");
	ft_printf(" %p ", 1);
	printf("\n");
	ft_printf(" %p ", 15);
	printf("\n");
	ft_printf(" %p ", 16);
	printf("\n");
	ft_printf(" %p ", 17);
	printf("\n");
	ft_printf(" %p %p ", LONG_MIN, LONG_MAX);
	printf(" %p %p ", LONG_MIN, LONG_MAX);
	printf("\n");
	ft_printf(" %p %p ", INT_MIN, INT_MAX);
	printf("\n");
	ft_printf(" %p %p ", ULONG_MAX, -ULONG_MAX);
	printf(" %p %p ", ULONG_MAX, -ULONG_MAX);
	printf("\n");
	ft_printf(" %p %p ", 0, 0);
	printf(" %p %p ", 0, 0);
	return (0);
}

int main(int ac, char ** av)
{
        ft_printf(" %u ", 0);
        printf("\n");
        ft_printf(" %u ", -1);
        printf(" %u ", -1);
        printf("\n");
        ft_printf(" %u ", 1);
        printf("\n");
        ft_printf(" %u ", 9);
        printf("\n");
        ft_printf(" %u ", 10);
        printf("\n");
        ft_printf(" %u ", 11);
        printf("\n");
        ft_printf(" %u ", 15);
        printf("\n");
        ft_printf(" %u ", 16);
        printf("\n");
        ft_printf(" %u ", 17);
        printf("\n");
        ft_printf(" %u ", 99);
        printf("\n");
        ft_printf(" %u ", 100);
        printf("\n");
        ft_printf(" %u ", 101);
        printf("\n");
        ft_printf(" %u ", -9);
        printf("\n");
        ft_printf(" %u ", -10);
        printf("\n");
        ft_printf(" %u ", -11);
        printf("\n");
        ft_printf(" %u ", -14);
        printf("\n");
        ft_printf(" %u ", -15);
        printf("\n");
        ft_printf(" %u ", -16);
        printf("\n");
        ft_printf(" %u ", -99);
        printf("\n");
        ft_printf(" %u ", -100);
        printf("\n");
        ft_printf(" %u ", -101);
        printf("\n");
        ft_printf(" %u ", INT_MAX);
        printf("\n");
        ft_printf(" %u ", INT_MIN);
        printf("\n");
        ft_printf(" %u ", LONG_MAX);
        printf("\n");
        ft_printf(" %u ", LONG_MIN);
        printf("\n");
        ft_printf(" %u ", UINT_MAX);
        printf("\n");
        ft_printf(" %u ", ULONG_MAX);
        printf("\n");
        ft_printf(" %u ", 9223372036854775807LL);
        printf("\n");
        ft_printf(" %u %u %u %u %u %u %u", INT_MAX, INT_MIN, LONG_MAX, 
        LONG_MIN, ULONG_MAX, 0, -42);
        return (0);
}*/
