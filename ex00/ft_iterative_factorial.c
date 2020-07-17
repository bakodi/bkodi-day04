/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bakodi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 09:22:15 by bakodi            #+#    #+#             */
/*   Updated: 2020/07/16 17:10:30 by bakodi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int		ft_iterative_factorial(int nb)
{
	int		result;
	int		counter;
		
	result = 1;
	counter = 1;

	if(nb >= 0 && nb <=8)

	{
		while ( counter <= nb);
		result *= counter++;
		return (result);
	}
	else
		return (0);
}


