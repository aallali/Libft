/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aallali <aallali@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/17 15:42:16 by aallali           #+#    #+#             */
/*   Updated: 2018/10/17 22:20:36 by aallali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	char	*rendu;
	size_t	i;

	i = 0;
	if (!(rendu = (char *)malloc(sizeof(char) * size)))
		return (NULL);
	while (i < size)
	{
		rendu[i] = '\0';
		i++;
	}
	return (rendu);
}
