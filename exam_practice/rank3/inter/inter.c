/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   inter.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: ncornacc <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/04/21 17:38:11 by ncornacc      #+#    #+#                 */
/*   Updated: 2023/04/21 17:38:12 by ncornacc      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_check(char *string, char character, int length)
{
	int	i = 0;

	while(string[i] && (i < length || length == -1))
	{
		if (string[i++] == character)
			return (1);
	}
	return (0);
}

void	ft_inter(char *string_1, char *string_2)
{
	int	i = 0;

	while(string_1[i])
	{
		if(!ft_check(string_1, string_1[i], i) && ft_check(string_2, string_1[i], -1))
			write(1, &string_1[i], 1);
		i++;
	}
}

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	if (argc != 3)
		ft_putchar('\n');
	else
		ft_inter(argv[1], argv[2]);
	return (0);
}