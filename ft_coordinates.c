/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_coordinates.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouanik <mbouanik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/15 22:15:31 by mbouanik          #+#    #+#             */
/*   Updated: 2016/12/15 22:21:46 by mbouanik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int				*ft_coord_abs(int *tab)
{
	int i;

	i = 2;
	while (i < 8)
	{
		tab[i] -= tab[0];
		tab[i + 1] -= tab[1];
		i += 2;
	}
	return (tab);
}

int				*ft_coord(char **piece, int i, int j, int hash)
{
	int			k;
	int			*tab;

	k = 0;
	tab = (int *)malloc(sizeof(int) * 8);
	while (piece[i])
	{
		while (piece[i][j])
		{
			if (piece[i][j] == '#')
			{
				tab[k] = j;
				tab[k + 1] = i;
				k += 2;
				hash++;
			}
			j++;
		}
		if (hash == 4)
			break ;
		i++;
		j = 0;
	}
	return (ft_coord_abs(tab));
}
