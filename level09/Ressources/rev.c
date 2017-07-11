/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fperruch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/28 14:48:24 by fperruch          #+#    #+#             */
/*   Updated: 2017/04/28 15:06:44 by fperruch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <strings.h>

int main(int ac, char **av)
{
	if (ac == 2)
	{
		char rev[100];

		bzero(rev, 100);
		if (av[1])
		{
			int i = -1;

			while (av[1][++i])
				rev[i] = av[1][i] - i;
			printf("token is : %s\n", rev);
		}
	}
	return (0);
}
