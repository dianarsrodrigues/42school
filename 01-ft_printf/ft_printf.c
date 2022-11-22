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

static int	ft_check_format(va_list *args, char c)
{
	int	len;

	len = 0;
	if (c == 'c')
		len += ft_conv_char(va_arg(*args, int));
	else if (c == 's')
		len += ft_conv_str(va_arg(*args, char *));
	else if (c == 'p')
		len += ft_conv_ptr(va_arg(*args, unsigned long ));
	else if (c == 'd' || c == 'i')
		len += ft_conv_nbr(va_arg(*args, int));
	else if (c == 'u')
		len += ft_conv_nbr(va_arg(*args, unsigned int));
	else if (c == 'x' || c == 'X')
		len += ft_conv_hex(va_arg(*args, unsigned int), c);
	else if (c == '%')
    {
		len++;
        write(1,"%",1);
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
	
	ft_printf("%c", '0');
	printf("\n");
	ft_printf(" %c ", '0');
	printf("\n");
	ft_printf(" %c", '0' - 256);
	printf("\n");
	ft_printf("%c ", '0' + 256);
	printf("\n");
	ft_printf(" %c %c %c ", '0', 0, '1');
	printf("\n");
	ft_printf(" %c %c %c ", ' ', ' ', ' ');
	printf("\n");
	ft_printf(" %c %c %c ", '1', '2', '3');
	printf("\n");
	ft_printf(" %c %c %c ", '2', '1', 0);
	printf("\n");
	ft_printf(" %c %c %c ", 0, '1', '2');
	return (0);
}*/
