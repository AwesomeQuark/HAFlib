/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aflib.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: conoel <conoel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/13 18:03:06 by conoel            #+#    #+#             */
/*   Updated: 2019/02/13 18:13:46 by conoel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AF_LIB_H
# define AF_LIB_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include <limits.h>
# include <sys/types.h>
# include <sys/uio.h>
# include "printf/includes/printf.h"

# define BUFF_SIZE 128
# define ITER_MAX (UINT_MAX)

char				*ft_strjoin(char const *s1, char const *s2);
void				exit_free(char *msg, int format, ...);
void				exit_(char *msg);
char				**ft_strsplit(char const *s, char c);
void				print_char_str(char c, size_t nb);
long long			ft_strtoll(char *ptr, size_t *index, int base);
int					ft_getc(int fd);
char				*get_the_file(int fd);
void				free_tab(char **tab);
int					ft_isalphanum_base(int c, int base, int maj);
void				*ft_bzero(void *s, size_t n);
char				*ft_strdup(const char *s);

void				ft_putchar(char c);
void				ft_putstr(char const *s);
void				ft_putendl(char const *s);
void				ft_putchar_fd(char c, int fd);
void				ft_putstr_fd(char const *s, int fd);
void				ft_putendl_fd(char const *s, int fd);
void				ft_putnbr(int n);
void				ft_putnbr_fd(int n, int fd);

#endif