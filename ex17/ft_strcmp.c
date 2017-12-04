/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlossy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 09:05:15 by rlossy            #+#    #+#             */
/*   Updated: 2017/11/07 13:26:00 by rlossy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	res;

	res = 0;
	i = 0;
	while ((s1[i] || s2[i]) && res == 0)
	{
		if (s1[i] != s2[i])
		{
			res = (s1[i] - s2[i]);
		}
		i++;
	}
	return (res);
}