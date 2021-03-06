/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmalagon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/03 23:26:50 by lmalagon          #+#    #+#             */
/*   Updated: 2018/09/03 23:26:54 by lmalagon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char	*s;
	int		i;
	int		len;
	int		sign;

	sign = (n < 0) ? -1 : 1;
	i = n;
	len = 0;
	while (i && ++len)
		i = i / 10;
	i = (n > 0) ? (len + 1) : (len + 2);
	if (!(s = (char *)malloc(i * sizeof(char))))
		return (NULL);
	s[--i] = '\0';
	while (--i)
	{
		s[i] = '0' + sign * (n % 10);
		n /= 10;
	}
	s[0] = (sign < 0) ? '-' : '0' + n;
	return (s);
}
