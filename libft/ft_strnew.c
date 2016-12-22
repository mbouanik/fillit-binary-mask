/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouanik <mbouanik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 15:33:45 by mbouanik          #+#    #+#             */
/*   Updated: 2016/11/17 18:03:34 by mbouanik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char *str;

	str = NULL;
	str = (char *)malloc(sizeof(char) * size + 1);
	if (str != NULL)
		ft_memset(str, '\0', size + 1);
	return (str);
}
