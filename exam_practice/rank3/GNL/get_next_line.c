/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   get_next_line.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: ncornacc <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/04/21 18:00:53 by ncornacc      #+#    #+#                 */
/*   Updated: 2023/04/21 18:00:54 by ncornacc      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	if (BUFFER_SIZE <= 0)
		return (0);
	int		rd;
	int		i = 0;
	char 	character;
	char	*buffer = malloc(100000);

	while ((rd = read(fd, &character, BUFFER_SIZE - BUFFER_SIZE + 1)) > 0)
	{
		buffer[i++] = character;
		if (character == '\n')
			break;
	}
	if (rd == -1 || i == 0 || (!buffer[i - 1] && !rd))
		return(free(buffer), 0);
	return (buffer);

}