/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: ncornacc <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/04/21 18:01:42 by ncornacc      #+#    #+#                 */
/*   Updated: 2023/04/21 18:01:43 by ncornacc      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */
#include "get_next_line.h"
#include <stdio.h>
#include <fcntl.h>

int main()
{
    int     test;
    char    *line = 0x1;
    test = open("text.txt", O_RDONLY);
    while (line)
    {
        line = get_next_line(test);
        if (line)
            printf("%s", line);
        free(line);
    }
return (0);
}
