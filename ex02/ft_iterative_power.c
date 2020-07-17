/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bakodi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 09:58:35 by bakodi            #+#    #+#             */
/*   Updated: 2020/07/16 13:57:09 by bakodi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int		ft_iterative_power(int nb , int power)
{
   int		numb;
   
   numb = 1;
   if (power < 0 )
   {
	   return(0);
   }
   if (power > 1)
   {
	while (power != 0 )
	{
		 numb *= nb;
		 ++power;
	}
	return numb;
   }
else
{
	return(0);
}



