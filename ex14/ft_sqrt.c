/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlossy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/06 16:54:15 by rlossy            #+#    #+#             */
/*   Updated: 2017/11/06 17:25:56 by rlossy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		find_sqrt(int n, int nb)
{
	if (n * n > nb)
		return (0);
	if (n * n == nb)
		return (n);
	else
		return (find_sqrt(n + 1, nb));
}

int		ft_sqrt(int nb)
{
	return (find_sqrt(1, nb));
}
