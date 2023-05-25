/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   is_anagram.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ncornacc <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/04/22 12:45:12 by ncornacc      #+#    #+#                 */
/*   Updated: 2023/04/22 12:45:13 by ncornacc      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */
int	is_anagram(char *string_1, char *string_2)
{
	int	i = 0;
	int second[42] = {0};
	int	first[42] = {0};

	while (string_1[i])
	{
		first[string_1[i] - 'a']++;
		i++;
	}
	i = 0;
	while (string_2[i])
	{
		second[string_2[i] - 'a']++;
		i++;
	}
	i = 0;
	while (i < 42)
	{
		if (first[i] != second[i])
			return 0;
		i++;
	}
	return 1;

}

#include <unistd.h>
#include <stdio.h>

int	main(int argc, char **argv)
{
	char	c = '\n';

	if (argc != 3)
		write(1, &c, 1);
	else
	{
		if(ft_is_anagram(argv[1], argv[2]))
			printf("Anagram");
		else
			printf("Not an Anargam");
	}
	return 0;
		
}
