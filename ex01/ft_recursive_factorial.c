/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bakodi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 09:44:50 by bakodi            #+#    #+#             */
/*   Updated: 2020/07/16 17:12:18 by bakodi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int ft_recursive_factorial(int nb)
{
	if( nb == 0)
		return(1);
	else if ( nb < 0 || nb > 8 )
		return(0);
	else 
	{
		c = c *nb;
		ft_recursive_factorial(nb - 1 );
	}
	return (c);
	
		
}
	
