/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_len_hex_ptr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diarodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 23:41:31 by diarodri          #+#    #+#             */
/*   Updated: 2022/11/21 23:42:08 by diarodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_len_hex_ptr(unsigned long n)
{
	int	len;

	len = 0;
	while (n != 0)
	{
		len++;
		n /= 16;
	}
	return (len);
}