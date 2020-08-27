/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bool.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsoulier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/20 09:20:02 by lsoulier          #+#    #+#             */
/*   Updated: 2020/08/20 09:20:04 by lsoulier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_op(char *str)
{
	int len;

	len = 0;
	while (str[len])
		len++;
	if (len > 1)
		return (0);
	else
	{
		return (*str == '+' || *str == '-' || *str == '*'
				|| *str == '/' || *str == '%');
	}
}

int		is_ws(char c)
{
	return (c == ' ' || c == '\n' || c == '\t'
			|| c == '\v' || c == '\f' || c == '\r');
}

int		is_num(char c)
{
	return (c >= '0' && c <= '9');
}
