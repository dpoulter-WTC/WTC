/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpoulter <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/15 13:09:05 by dpoulter          #+#    #+#             */
/*   Updated: 2018/02/16 09:14:12 by dpoulter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_putstr.c"

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

int        main()
{
	char *a = "test";
	ft_putstr(a);
	return(0);
}
		