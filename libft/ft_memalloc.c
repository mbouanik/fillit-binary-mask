/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouanik <mbouanik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 14:19:43 by mbouanik          #+#    #+#             */
/*   Updated: 2016/11/16 11:50:10 by mbouanik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	char *ptr;

	ptr = NULL;
	ptr = (char *)malloc(sizeof(*ptr) * size);
	if (ptr == NULL)
		return (NULL);
	ft_memset(ptr, 0, size);
	return (ptr);
}
