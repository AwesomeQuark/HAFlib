/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   haflib.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: conoel <conoel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/13 18:03:06 by conoel            #+#    #+#             */
/*   Updated: 2019/04/08 15:02:06 by conoel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HAFLIB_H
# define HAFLIB_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include <sys/types.h>
# include <sys/uio.h>

# include "garbage.h"
# include "ft_printf.h"
# include "quit.h"
# include "ft_is.h"

# define BUFF_SIZE 16
# define ITER_MAX (INT_MAX / BUFF_SIZE)


void				free_tab(char **tab);

char				*ft_strjoin(char const *s1, char const *s2);
char				**ft_strsplit(char *s, char c);
long long			ft_strtoll(char *ptr, size_t *index, int base);
int					ft_getc(int fd);
char				*get_the_file(int fd);

void				print_int_str(int *tab, size_t len);
void				print_char_str(char c, size_t nb);

void				*ft_bzero(void *s, size_t n);
char				*ft_strdup(const char *s);
int					ft_atoi(const char *nptr);
size_t				ft_strlen(const char *s);
int					ft_strcmp(const char *s1, const char *s2);
int					ft_memcmp(const void *s1, const void *s2, size_t n);
void				*ft_memchr(const void *s, int c, size_t n);

#endif
