/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: conoel <conoel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 11:53:38 by conoel            #+#    #+#             */
/*   Updated: 2019/02/14 15:23:08 by conoel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		*new_line(int size, char *s)
{
	char	*ret;

	if (!(ret = malloc(sizeof(char) * (size + 1))))
		return (NULL);
	ret[size] = '\0';
	ret = ft_memcpy(ret, &(s[-size]), size);
	return (ret);
}

static int		fill_tab(char *s, char **ret, char c)
{
	int		i;
	int		j;
	int		size;

	i = 0;
	j = 0;
	size = 0;
	while (s[i] != c)
	{
		if (s[i] == c)
		{
			if (!(ret[j] = new_line(size, &(s[i]))))
				return (0);
			j++;
			size = -1;
		}
		i++;
		size++;
	}
	ret[j] = NULL;
	return (1);
}

static int		get_nb_word(char *s, char c)
{
	int		nb_word;
	int		i;
	
	i = 0;
	nb_word = 0;
	while (s[i])
	{
		if (s[i] == c)
			nb_word++;
		i++;
	}
	return (nb_word);
}

char			**ft_strsplit(char *s, char c)
{
	char	**ret;
	int		nb_word;

	nb_word = get_nb_word(s, c);
	if (!(ret = malloc(sizeof(char *) * (nb_word + 1))))
		return (NULL);
	if (!(fill_tab(s, ret, c)))
		return (NULL);
	return (ret);
}
