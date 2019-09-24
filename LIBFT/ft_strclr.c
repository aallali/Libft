/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aallali <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/18 21:58:53 by aallali           #+#    #+#             */
/*   Updated: 2018/10/18 22:01:59 by aallali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strclr(char *s)
{
	int i;

	i = 0;
	if (&s[i] != NULL)
	{
		while (s[i])
		{
			s[i] = '\0';
			i++;
		}
		s[i] = '\0';
	}
}