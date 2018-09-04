/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmalagon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/04 00:26:07 by lmalagon          #+#    #+#             */
/*   Updated: 2018/09/04 00:26:12 by lmalagon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*x;
	size_t	i;

	if (s == NULL || start > ft_strlen(s))
		return (NULL);
	x = (char *)malloc((len + 1) * sizeof(char));
	if (x == NULL)
		return (NULL);
	i = -1;
	while (++i < len && s[start + i] != '\0')
		x[i] = s[start + i];
	x[i] = '\0';
	return (x);
}
