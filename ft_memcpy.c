/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmalagon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/03 23:37:26 by lmalagon          #+#    #+#             */
/*   Updated: 2018/09/03 23:37:46 by lmalagon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	char	*s;
	char	*x;
	size_t	i;

	s = (char *)dst;
	x = (char *)src;
	i = -1;
	while (++i < n)
		s[i] = x[i];
	return (dst);
}
