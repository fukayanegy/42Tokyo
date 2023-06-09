/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etakaham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 19:51:34 by etakaham          #+#    #+#             */
/*   Updated: 2023/02/26 20:03:14 by etakaham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H

# define FT_BOOLEAN_H
# include<unistd.h>

# define EVEN(nbr) nbr % 2 == 0
# define TRUE 0
# define SUCCESS 0
# define FALSE 1
# define EVEN_MSG "I have an even number of arguments.\n"
# define ODD_MSG "I have an odd number of arguments.\n"

typedef int	t_bool;

void	ft_putstr(char *str);
t_bool	ft_is_even(int nbr);
#endif
