/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpoulter <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/14 20:43:06 by dpoulter          #+#    #+#             */
/*   Updated: 2018/02/15 16:44:00 by dpoulter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_comb2(void)
{
	int i;
	int j;

	i = -1;
	while (i < 99)
	{
		j = ++i + 1;
		while (j < 100)
		{
			ft_putchar(i / 10 + '0');
			ft_putchar(i % 10 + '0');
			ft_putchar(32);
			ft_putchar(j / 10 + '0');
			ft_putchar(j++ % 10 + '0');
			if (i != 98)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
		}
	}
	ft_putchar('\n');
}
