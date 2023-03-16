/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cristian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 18:50:21 by cristian          #+#    #+#             */
/*   Updated: 2023/02/16 17:30:15 by cristian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_atoi(char *str)
{
	int	n;
	int	neg;
	int	i;

	n = 0;
	neg = 0;
	i = 0;
	while ((str[i] < 48 || str[i] > 57) && str[i] != '\0')
	{
		if (str[i] == '-')
			neg++;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57 && str[i] != '\a')
	{	
		n = n * 10 + (str[i] - '0');
		i++;
	}
	if (neg % 2 == 1 && neg > 0)
		n *= -1;
	return (n);
}

/*int	main(int argc, char **argv)
{
	char	*str;
	int		i;
	if (argc == 2)
	{
		str = argv[1];
		printf("Argumento pasado: %s\n", str);
	}
	else
		str = "---++-+12234JF3";	
	i = ft_atoi("prueba");
	printf("%i", i);
	return (0);
}*/
