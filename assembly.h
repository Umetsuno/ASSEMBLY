/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   assembly.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faherrau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 17:51:36 by faherrau          #+#    #+#             */
/*   Updated: 2021/05/03 18:06:49 by faherrau         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASSEMBLY_H
# define ASSEMBLY_H

/*
**		LIBRARIES
*/

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <errno.h>
#include <fcntl.h>

/*
**		FUNCTIONS
*/

int		main(void);
int		ft_strcmp(char const *str1, char const *str2);
char	*ft_strcpy(char *dest, char *src);
char	*ft_strdup(const char *str);
size_t	ft_strlen(char *str);
ssize_t	ft_write(int fd, void const *buffer, size_t n_bytes);
ssize_t	ft_read(int fd, void *buffer, size_t n_bytes);

#endif
