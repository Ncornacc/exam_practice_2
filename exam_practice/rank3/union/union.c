/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   union.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: ncornacc <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/04/21 18:22:54 by ncornacc      #+#    #+#                 */
/*   Updated: 2023/04/21 18:22:55 by ncornacc      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_check(char *string, char character, int length)
{
	int i = 0;

	while (i < length)
	{
		if (string[i] == character)
				return (0);
		i++;
	}
	return (1);
}

void	ft_union(char *string_1, char *string_2)
{
	int i = 0;
	int	k = 0;
	int j = 0;

	while (string_1[i])
		i++;
	while (string_2[j])
	{
		string_1[i] = string_2[j];
		i++;
		j++;
	}
	i--;
	while (k <= i)
	{
		if(ft_check(string_1, string_1[k], k))
			write(1, &string_1[k], 1);
		k++;
	}
}

int	main(int argc, char **argv)
{
	if (argc != 3)
		write(1, "\n", 1);
	else
		ft_union(argv[1], argv[2]);
	return (0);
}