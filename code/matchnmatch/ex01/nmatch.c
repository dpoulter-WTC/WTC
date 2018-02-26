/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nmatch.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpoulter <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/24 12:50:44 by dpoulter          #+#    #+#             */
/*   Updated: 2018/02/24 16:20:45 by dpoulter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		nmatch(char *s1, char *s2)
{
	if (!*s1 && !*s2)
		return (1);
	else if (*s1 == *s2 && *s1 != '*')
		return (nmatch(s1 + 1, s2 + 1));
	else if (*s2 == '*' && !*s1)
		return (nmatch(s1, s2 + 1));
	else if (*s2 == '*' && *s1)
		return (nmatch(s1, s2 + 1) + nmatch(s1 + 1, s2));
	else
		return (0);
}