/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aallali <aallali@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/20 15:21:26 by aallali           #+#    #+#             */
/*   Updated: 2018/10/21 00:52:16 by aallali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int		ft_count_words(const char *str, char c)
{
	int	word;
	int	i;

	i = 0;
	word = 0;
	if (!str)
		return (0);
	while (str[i])
	{
		if (str[i] == c && str[i + 1] != c)
			word++;
		i++;
	}
	if (str[0] != '\0')
		word++;
	return (word);
}

static	char	*ft_word(const char *str, char c, int *i)
{
	char	*s;
	int		k;

	if (!(s = (char *)malloc(sizeof(s) * (ft_strlen(str)))))
		return (NULL);
	k = 0;
	while (str[*i] != c && str[*i])
	{
		s[k] = str[*i];
		k++;
		*i += 1;
	}
	s[k] = '\0';
	while (str[*i] == c && str[*i])
		*i += 1;
	return (s);
}

char			**ft_strsplit(const char *str, char c)
{
	int		i;
	int		j;
	int		wrd;
	char	**s;

	i = 0;
	j = 0;
	wrd = ft_count_words(str, c);
	if (!str)
		return (NULL);
	if (!(s = (char **)malloc(sizeof(s) * (ft_count_words(str, c) + 2))))
		return (NULL);
	while (str[i] == c && str[i])
		i++;
	while (j < wrd && str[i])
	{
		s[j] = ft_word(str, c, &i);
		j++;
	}
	s[j] = NULL;
	return (s);
}
