/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsoulier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/10 15:58:51 by lsoulier          #+#    #+#             */
/*   Updated: 2020/08/10 17:54:27 by lsoulier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int i;
	int square;

	i = 1;
	square = 1;
	while (i < nb && square < nb && i <= 46340)
	{
		square = i * i;
		if (square != nb)
			i++;
	}
	return (square == nb ? i : 0);
}
