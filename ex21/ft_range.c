/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlossy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 11:08:10 by rlossy            #+#    #+#             */
/*   Updated: 2017/11/07 13:22:28 by rlossy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int	*range;
	int i;

	i = 0;
	if (min >= max)
	{
		return (NULL);
	}
	range = (int*)malloc((sizeof(int)) * (max - min));
	while (min < max)
	{
		range[i] = min;
		min++;
		i++;
	}
	return (range);
}
