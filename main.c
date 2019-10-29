/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytaousi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/29 15:03:31 by ytaousi           #+#    #+#             */
/*   Updated: 2019/10/29 16:13:10 by ytaousi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <fcntl.h>

int		main(void)
{
	int		fd;
	char	*line;

	fd = open("File-Path", O_RDONLY);
	if (fd == -1)
	{
		printf("A Wild Error Appeared");
		return (-1);
	}
	while (get_next_line(fd, &line))
	{
		printf("%s", line);
		free(line);
	}
	free(line);
	close(fd);
	return (0);
}
