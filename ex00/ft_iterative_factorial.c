/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboumell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 13:09:00 by fboumell          #+#    #+#             */
/*   Updated: 2021/02/23 14:35:49 by fboumell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int i;
	int res;

	i = 1;
	res = 1;
	if (nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	while (i <= nb)
	{
		res = i * res;
		i++;
	}
	return (res);
}

#include <stdio.h>

int main()
{
	printf("%d\n", ft_iterative_factorial(7));
	return 0;
}
