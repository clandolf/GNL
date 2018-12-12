/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clandolf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 16:49:58 by clandolf          #+#    #+#             */
/*   Updated: 2018/11/09 16:49:59 by clandolf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"



int get_next_line(const int fd, char **line)
{
	char *buffer; 

	read(fd, buffer, BUFF_SIZE)

//gotta know where exactly you are in the file so you can get the next line
//remember to allocate mem for line according to its size
//remember to free mem when no longer needed


}

int		main(int argc, char **argv)
{
	char *line;

	fd = open(argv[1]);
	while (get_next_line(fd, &line) == 1)
	{
		printf("%s\n", line);
		free(line);
	}
	if (get_next_line(fd, &line) == -1)
		printf("gnl returned -1")
	return (0)
}