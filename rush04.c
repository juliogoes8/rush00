/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lufelipe <lufelipe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 00:30:46 by lufelipe          #+#    #+#             */
/*   Updated: 2021/04/03 13:33:59 by lufelipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_check_position(int i, int j, int x, int y)
{
	if ((i == 0 && j == 0) || (i == y - 1 && j == x - 1))
	{
		ft_putchar('A');
	}
	else if ((i == 0 && j == x - 1) || (i == y - 1 && j == 0))
	{
		ft_putchar('C');
	}
	else if (i == 0 || i == y - 1 || j == 0 || j == x - 1)
	{
		ft_putchar('B');
	}
	else
	{
		ft_putchar(' ');
	}
}

void	rush(int x, int y)
{
	int i;
	int j;

	i = 0;
	while (i < y)
	{
		j = 0;
		while (j < x)
		{
			ft_check_position(i, j, x, y);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
