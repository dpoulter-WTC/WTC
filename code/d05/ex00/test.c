/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpoulter <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/19 09:03:05 by dpoulter          #+#    #+#             */
/*   Updated: 2018/02/19 15:20:10 by dpoulter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Example using strcpy by TechOnTheNet.com */

#include <stdio.h>
#include <string.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while(str[i] != '\0')
		ft_putchar(str[i++]);
}

int main(int argc, const char * argv[])
{
    /* Create an example variable capable of holding 50 characters */
    char example[5];

    /* Copy the string "TechOnTheNet.com knows strcpy!" into the example variable */
    strcpy (example, "TechOnTheNet.com knows strcpy!");

    /* Display the contents of the example variable to the screen */
    ft_putstr( example);

    return 0;
}
