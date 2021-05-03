/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faherrau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 20:36:40 by faherrau          #+#    #+#             */
/*   Updated: 2021/05/03 18:29:00 by faherrau         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "assembly.h"	

int	main(void)
{
	ssize_t ret;
	ret = 0;
	dprintf(1, "\033[3;34m\nStarting : ASM Tester \n\n");

	dprintf(1, "\033[3;33m\n-------------------------------\n\033[3;36m\n\tTest-block #1 : strlen function test with <Je suis une truite>\n\n");
	dprintf(1, "my_strlen : %zu.\n", ft_strlen("Je suis une truite"));
	dprintf(1, "re_strlen : %lu.\n", strlen("Je suis une truite"));
	dprintf(1, "\nstrlen test with empty string.\n\n");
	dprintf(1, "my_strlen : %zu.\n", ft_strlen(""));
	dprintf(1, "re_strlen : %lu.\n", strlen(""));

	dprintf(1, "\033[3;33m\n-------------------------------\n\033[3;32m\n\tTest-block #2 : Write function test\n\n");
	dprintf(1 ,"my_write : ");
	ret = ft_write(1, "Je suis une truite", 19);
	dprintf(1, ".(%li)\nre_write : ", ret);
	ret = write(1,  "Je suis une truite", 19);
	dprintf(1, ".(%li)\n", ret);
	dprintf(1, "\n\twrite with non-valid file descriptor :\n\n");
	dprintf(1 ,"my_write : ");
	ret = ft_write(3, "Je suis une truite", 7);
	dprintf(1, ".(%li) ret errno = %d.\nre_write : ", ret, errno);
	ret = write(3,  "Je suis une truite", 7);
	dprintf(1, ".(%li) ret errno = %d.\n", ret, errno);

	dprintf(1, "\033[3;33m\n-------------------------------\n\033[3;34m\n\tTest-block #3 : Read function\n\n");
	int fd;
	char lol[21];
	fd = open("info.txt", O_RDONLY);
	dprintf(1 ,"my_read : ");
	ret = ft_read(fd, lol, 21);
	dprintf(1, "'%s'. nb caracter lu %lu.\nre_read : ", lol, ret);
	close(fd);
	fd = open("info.txt", O_RDONLY);
	ret = read(fd,  lol, 21);
	dprintf(1, "'%s'. nb caracter lu %lu.\n", lol, ret);
	close(fd);
	dprintf(1, "\n\ttest with non-valid file descriptor\n\n");
	fd = open("", O_RDONLY);
	dprintf(1 ,"my_read : ");
	ret = ft_read(fd, lol, 21);
	dprintf(1, "'%s'. nb caracter lu %lu. errno = %d\nre_read : ", lol, ret, errno);
	close(fd);
	fd = open("", O_RDONLY);
	ret = read(fd,  lol, 1);
	dprintf(1, "'%s'. nb caracter lu %lu. errno = %d\n", lol, ret, errno);
	close(fd);

	dprintf(1, "\033[3;33m\n-------------------------------\n\033[3;35m\n\tTest-block #4 : strcmp function | Equal strings\n\n");

	const char	*s1;
	const char	*s2;
	s1 = "Je suis une truite";
	s2 = "Je suis une truite";
	dprintf(1 ,"my_strcmp : ");
	ret = ft_strcmp(s1, s2);
	dprintf(1, ".(%li)\nre_strcmp : ", ret);
	ret = strcmp(s1, s2);

	dprintf(1, ".(%li)\n\n\tstrcmp : unequal strings\n\n", ret);
	s1 = "0";
	s2 = "";
	dprintf(1 ,"my_strcmp : ");
	ret = ft_strcmp(s1, s2);
	dprintf(1, ".(%li)\nre_strcmp : ", ret);
	ret = strcmp(s1, s2);
	dprintf(1, ".(%li)\n", ret);

	dprintf(1, "\033[3;33m\n-------------------------------\n\033[3;36m\n\tTest-block #5 : strcpy\n\n");

	char *dest;
	char *dest2;
	char *src;
	dprintf(1, "\n\t\t----------test #1----------\n");
	src = "Je suis une monstro-truite";
	dest = malloc(sizeof(char) * (strlen(src) + 1));
	dest2 = malloc(sizeof(char) * (strlen(src) + 1));
	dprintf(1 ,"my_strcpy : ");
	dest = ft_strcpy(dest, src);
	dprintf(1, "'%s'.\nre_strcpy : ", dest);
	dest2 = strcpy(dest2, src);
	dprintf(1, "'%s'.\n", dest2);
	free(dest);
	free(dest2);
	dprintf(1, "\n\t\t----------test #2----------\n");
	src = "I'm a murloc... RwlRwlRwlRwl !!";
	dest = malloc(sizeof(char) * (strlen(src) + 1));
	dest2 = malloc(sizeof(char) * (strlen(src) + 1));
	dprintf(1 ,"my_strcpy : ");
	dest = ft_strcpy(dest, src);
	dprintf(1, "'%s'.\nre_strcpy : ", dest);
	dest2 = strcpy(dest2, src);
	dprintf(1, "'%s'.\n", dest2);
	free(dest);
	free(dest2);

	dprintf(1, "\033[3;33m\n-------------------------------\n\033[3;05m\n\tTest-block #6 : strdup\n\n");
	const char	*src_d;
	char		*dest_d;
	char		*dest_d2;
	dprintf(1, "\n\t\t----------test #1----------\n");
	src_d = "Je suis une truite de l'espace geant miniature";
	dest_d = NULL;
	dprintf(1 ,"my_strdup : ");
	dest_d = ft_strdup(src_d);
	dprintf(1, "'%s'.\nre_strdup : ", dest_d);
	dest_d2 = strdup(src_d);
	dprintf(1, "'%s'.\n", dest_d2);
	free(dest_d);
	free(dest_d2);
	dprintf(1, "\n\t\t----------test #2----------\n");
	src_d = "Je suis une truite toute pitite mignonne";
	dest_d = NULL;
	dprintf(1 ,"my_strdup : ");
	dest_d = ft_strdup(src_d);
	dprintf(1, "'%s'.\nre_strdup : ", dest_d);
	dest_d2 = strdup(src_d);
	dprintf(1, "'%s'.\n", dest_d2);
	free(dest_d);
	free(dest_d2);

	return (0);
}
