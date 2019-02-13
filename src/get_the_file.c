/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_the_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: conoel <conoel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/13 09:42:25 by conoel            #+#    #+#             */
/*   Updated: 2019/02/13 14:35:50 by conoel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <limits.h>

char	*get_the_file(int fd)
{
	char		*ret;
	char		*tmp;
	char		buffer[BUFF_SIZE];
	size_t		iter_max;

	iter_max = 0;
	if (!(ret = malloc(sizeof(char) * 1)))
		exit_(NULL);
	ft_bzero(buffer, BUFF_SIZE);
	while (read(fd, buffer, BUFF_SIZE) != 0)
	{
		tmp = ret;
		ret = ft_strjoin(ret, buffer);
		if (tmp != NULL)
			free(tmp);
		if (iter_max++ > ITER_MAX)
			return (NULL);
	}
	return (ret);
}