/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmalagon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/03 23:49:15 by lmalagon          #+#    #+#             */
/*   Updated: 2018/09/03 23:49:26 by lmalagon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *s1, const char *s2)
{
	char *s1iter;

	s1iter = s1;
	while (*s1iter != '\0')
		s1iter++;
	while (*s2 != '\0')
		*s1iter++ = *s2++;
	*s1iter = '\0';
	return (s1);
}
