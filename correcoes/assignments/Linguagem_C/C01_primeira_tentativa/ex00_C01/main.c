/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbreit-d <pbreit-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 01:27:28 by pbreit-d          #+#    #+#             */
/*   Updated: 2021/04/16 05:34:43 by pbreit-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void ft_ft (int *nbr);
int main (void)
{
	int *nbr;
	int x;
	nbr = &x;
	
	ft_ft(nbr);
	
	printf("O valor eh: %d\n", x);
	
	return(0);
}