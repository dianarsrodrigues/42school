/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diarodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 21:32:50 by diarodri          #+#    #+#             */
/*   Updated: 2022/11/22 00:21:12 by diarodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

int ft_printf(const char *s, ...);

int ft_conv_char(char c);
int	ft_conv_str(char *str);
int	ft_conv_ptr(unsigned long n);
int	ft_conv_nbr(int n);
int	ft_conv_hex(unsigned long n, const char c);

void	ft_putchar(char c);
size_t	ft_strlen(const char *str);
int	ft_len_hex_ptr(unsigned long n);
char	*ft_itoa(int n);


# endif