/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdebard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/03 00:51:34 by hdebard           #+#    #+#             */
/*   Updated: 2016/02/03 22:19:18 by hdebard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include "libft.h"
# define BUFF_SIZE 65

typedef struct	s_gnl
{
	char			*buff;
	int				fd;
	struct s_gnl	*next;
}				t_gnl;

int				get_next_line(int fd, char **line);
t_gnl			*new_list(int fd);
int				get_line(t_gnl *list, char *buff, char **line);
int				save_buff(t_gnl *list, char *buff, int ret);
int				new_line(t_gnl *list, char **line, char *buff);
#endif
