/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aallali <aallali@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/21 14:54:39 by aallali           #+#    #+#             */
/*   Updated: 2018/10/21 14:54:41 by aallali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int n)
{
	unsigned int nw;

	if (n < 0)
	{
		ft_putchar('-');
		nw = n * -1;
	}
	else
		nw = n;
	if (nw > 9)
		ft_putnbr(nw / 10);
	ft_putchar(nw % 10 + 48);
}
