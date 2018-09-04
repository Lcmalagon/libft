/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmalagon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/03 23:46:24 by lmalagon          #+#    #+#             */
/*   Updated: 2018/09/03 23:46:39 by lmalagon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int n)
{
	char		num[20];
	int			i;
	int			sign;

	if (n == 0)
		write(1, "0", 1);
	else if (n < 0)
		write(1, "-", 1);
	sign = (n > 0) ? 1 : -1;
	i = 0;
	while (n)
	{
		num[i++] = '0' + (n % 10) * sign;
		n /= 10;
	}
	while (--i >= 0)
		write(1, &(num[i]), 1);
}