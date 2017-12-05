/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_itoa.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: liadelai <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/01 16:34:04 by liadelai     #+#   ##    ##    #+#       */
/*   Updated: 2017/12/01 16:34:50 by liadelai    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

static void		ft_itoa_process(int n, char *str)
{
	if (n < 0)
	{
		str[ft_strlen(str)] = '-';
		if (n == -2147483648)
		{
			str[ft_strlen(str)] = '2';
			n = -147483648;
		}
		n = -n;
	}
	if (n >= 10)
	{
		ft_itoa_process(n / 10, str);
		ft_itoa_process(n % 10, str);
	}
	else
		str[ft_strlen(str)] = '0' + n;
}

char			*ft_itoa(int n)
{
	int		i;
	char	*output;
	int		nb_digits;

	i = n;
	nb_digits = 0;
	if (i < 0)
	{
		nb_digits++;
		if (i == -2147483648)
			i = -i - 1;
	}
	if (i == 0)
		nb_digits++;
	else
		while (i != 0)
		{
			i /= 10;
			nb_digits++;
		}
	if (!(output = ft_memalloc(nb_digits + 1)))
		return (NULL);
	ft_itoa_process(n, output);
	return (output);
}
