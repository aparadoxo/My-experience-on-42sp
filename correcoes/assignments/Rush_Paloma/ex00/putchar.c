/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putchar.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbreit-d <pbreit-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 21:43:17 by pbreit-d          #+#    #+#             */
/*   Updated: 2021/04/05 00:11:39 by pbreit-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	largura(int x, char esq, char meio, char dir)
{
	if (x-- >= 1)
	{
		ft_putchar(esq);
		while (x-- >= 2)
			ft_putchar(meio);
		if (x == 0)
			ft_putchar(dir);
		ft_putchar('\n');
	}
}

void	altura(int x, int y, char pipe)
{
	int i;

	while (y-- > 2)
	{
		ft_putchar(pipe);
		i = 2;
		while (x > i++)
			ft_putchar(' ');
		ft_putchar(pipe);
		ft_putchar('\n');
	}
}

void	rush(int x, int y)
{
	if (y >= 1)
		largura(x, 'o', '-', 'o');
	altura(x, y, '|');
	if (y >= 2)
		largura(x, 'o', '-', 'o');
}
void	rush(int x, int y);

int main (void)
{
	rush(1, 5);
	return (0);
}
