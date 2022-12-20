/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_ft_strcspn.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diarodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 16:09:31 by diarodri          #+#    #+#             */
/*   Updated: 2022/12/20 16:09:33 by diarodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

/*size_t	ft_strcspn(const char *s, const char *reject)
{
	
}*/

int	main(void)
{
	const char s[] = "ABCDEF4960";
	const char reject[] = "ABC";
	int len = strcspn(s, reject);
	
	printf("%d", len + 1);
	return (0);
}
