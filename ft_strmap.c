/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strmap.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: liadelai <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/02 15:57:41 by liadelai     #+#   ##    ##    #+#       */
/*   Updated: 2017/12/02 15:57:43 by liadelai    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*output;
	size_t	i;

	if (!s)
		return (NULL);
	if (!(output = ft_strdup(s)))
		return (NULL);
	i = 0;
	while (i < ft_strlen(s))
	{
		output[i] = f(output[i]);
		i++;
	}
	return (output);
}
