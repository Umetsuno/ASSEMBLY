/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faherrau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 20:36:40 by faherrau          #+#    #+#             */
/*   Updated: 2021/04/29 21:03:08 by faherrau         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>

size_t	ft_strlen(char *str);		

int	main(void)
{
	ssize_t ret;
	ret = 0;
	dprintf(1, "\033[3;34m\nHello welcom to my \n\n");

	dprintf(1, "\033[3;33m\n-------------------------------\n\033[3;36m\nstrlen avec 'coucou'.\n\n");
	dprintf(1, "my_strlen : %zu.\n", ft_strlen("coucou"));
	dprintf(1, "re_strlen : %lu.\n", strlen("coucou"));
	dprintf(1, "\nstrlen avec chaine vide.\n\n");
	dprintf(1, "my_strlen : %zu.\n", ft_strlen(""));
	dprintf(1, "re_strlen : %lu.\n", strlen(""));

	// dprintf(1, "\033[3;33m\n-------------------------------\n\033[3;32m\nwrite avec un text.\n\n");
	// dprintf(1 ,"my_write : ");
	// ret = ft_write(1, "Bonjour", 7);
	// dprintf(1, ".(%li)\nre_write : ", ret);
	// ret = write(1,  "Bonjour", 7);
	// dprintf(1, ".(%li)\n", ret);
	// dprintf(1, "\nwrite avec fd non valide.\n\n");
	// dprintf(1 ,"my_write : ");
	// ret = ft_write(3, "Bonjour", 7);
	// dprintf(1, ".(%li) ret errno = %d.\nre_write : ", ret, errno);
	// ret = write(3,  "Bonjour", 7);
	// dprintf(1, ".(%li) ret errno = %d.\n", ret, errno);

	// dprintf(1, "\033[3;33m\n-------------------------------\n\033[3;34m\nread valide.\n\n");
	// int fd;
	// char lol[21];
	// fd = open("info.txt", O_RDONLY);
	// dprintf(1 ,"my_read : ");
	// ret = ft_read(fd, lol, 21);
	// dprintf(1, "'%s'. nb caracter lu %lu.\nre_read : ", lol, ret);
	// close(fd);
	// fd = open("info.txt", O_RDONLY);
	// ret = read(fd,  lol, 21);
	// dprintf(1, "'%s'. nb caracter lu %lu.\n", lol, ret);
	// close(fd);
	// dprintf(1, "\nread avec un fd non valide.\n\n");
	// fd = open("", O_RDONLY);
	// dprintf(1 ,"my_read : ");
	// ret = ft_read(fd, lol, 21);
	// dprintf(1, "'%s'. nb caracter lu %lu. errno = %d\nre_read : ", lol, ret, errno);
	// close(fd);
	// fd = open("", O_RDONLY);
	// ret = read(fd,  lol, 1);
	// dprintf(1, "'%s'. nb caracter lu %lu. errno = %d\n", lol, ret, errno);
	// close(fd);

	// dprintf(1, "\033[3;33m\n-------------------------------\n\033[3;35m\nft_strcmp avec chaine egal :\n\n");

	// const char	*s1;
	// const char	*s2;
	// s1 = "coucou";
	// s2 = "coucou";
	// dprintf(1 ,"my_strcmp : ");
	// ret = ft_strcmp(s1, s2);
	// dprintf(1, ".(%li)\nre_strcmp : ", ret);
	// ret = strcmp(s1, s2);

	// dprintf(1, ".(%li)\n\nstrcmp avec chaine pas egal :\n\n", ret);
	// s1 = "0";
	// s2 = "";
	// dprintf(1 ,"my_strcmp : ");
	// ret = ft_strcmp(s1, s2);
	// dprintf(1, ".(%li)\nre_strcmp : ", ret);
	// ret = strcmp(s1, s2);
	// dprintf(1, ".(%li)\n", ret);

	// dprintf(1, "\033[3;33m\n-------------------------------\n\033[3;36m\n");

	// char *dest;
	// char *dest2;
	// char *src;
	// src = "Hello World";
	// dest = malloc(sizeof(char) * (strlen(src) + 1));
	// dest2 = malloc(sizeof(char) * (strlen(src) + 1));
	// dprintf(1 ,"my_strcpy : ");
	// dest = ft_strcpy(dest, src);
	// dprintf(1, "'%s'.\nre_strcpy : ", dest);
	// dest2 = strcpy(dest2, src);
	// dprintf(1, "'%s'.\n", dest2);
	// free(dest);
	// free(dest2);

	// dprintf(1, "\033[3;33m\n-------------------------------\n\033[3;05m\nstrdup\n\n");
	// const char	*src_d;
	// char		*dest_d;
	// char		*dest_d2;
	// src_d = "Hello World";
	// dest_d = NULL;
	// dprintf(1 ,"my_strdup : ");
	// dest_d = ft_strdup(src_d);
	// dprintf(1, "'%s'.\nre_strdup : ", dest_d);
	// dest_d2 = strdup(src_d);
	// dprintf(1, "'%s'.\n", dest_d2);
	// free(dest_d);
	// free(dest_d2);

	return (0);
}
