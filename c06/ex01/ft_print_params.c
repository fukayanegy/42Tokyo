/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etakaham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 10:27:44 by etakaham          #+#    #+#             */
/*   Updated: 2023/02/21 11:16:11 by etakaham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

int	print(char a[]);

int	main(int argc, char *argv[])
{
	int	i;

	i = 1;
	while (i < argc)
	{
		write(1, argv[i], print(argv[i]));
		write(1, "\n", 1);
		i++;
	}
	return (0);
}

int	print(char a[])
{
	int	i;

	i = 0;
	while (a[i] != '\0')
		i++;
	return (i);
}
