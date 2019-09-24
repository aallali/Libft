/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aallali <aallali@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/18 21:18:02 by aallali           #+#    #+#             */
/*   Updated: 2018/10/18 21:38:53 by aallali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*rendu;
	size_t	i;

	i = 0;
	if (!(rendu = (char *)malloc(sizeof(char) * ((int)size + 1))))
		return (NULL);
	while (i <= size)
	{
		rendu[i] = 0;
		i++;
	}
	return (rendu);
}
