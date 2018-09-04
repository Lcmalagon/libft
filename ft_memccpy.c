/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmalagon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/03 23:33:27 by lmalagon          #+#    #+#             */
/*   Updated: 2018/09/03 23:33:39 by lmalagon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *restrict dst,
				const void *restrict src, int c, size_t n)
{
	char	*d;
	char	*s;
	char	x;
	size_t	i;

	d = (char *)dst;
	s = (char *)src;
	x = (unsigned char)c;
	i = -1;
	while (++i < n)
	{
		d[i] = s[i];
		if (s[i] == x)
			return (dst + i + 1);
	}
	return (NULL);
}
