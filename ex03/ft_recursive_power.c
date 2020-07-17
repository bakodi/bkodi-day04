/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bakodi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 10:21:06 by bakodi            #+#    #+#             */
/*   Updated: 2020/07/16 17:13:48 by bakodi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int		ft_recursive_power ( int nb , int power);
{
	int numb;

	numb = 1;
	if ( power < 0 )
	{
		return(0);
	}
	if ( power > 1)
	{
		while (power != 0)
		{
			numb *=nb;
			--power;
		}
		return(numb);
	}
	else
	{
		return(1);
	}


