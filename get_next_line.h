/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clandolf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 18:12:30 by clandolf          #+#    #+#             */
/*   Updated: 2018/11/09 18:12:31 by clandolf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

#define BUFF_SIZE 32

struct 	s_struct {
	int fd;
	char **tab;
	int line;
}			t_struct;

int get_next_line(const int fd, char **line);
