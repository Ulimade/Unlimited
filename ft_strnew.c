/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strnew.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: liadelai <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/02 16:23:01 by liadelai     #+#   ##    ##    #+#       */
/*   Updated: 2017/12/02 16:23:03 by liadelai    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*output;

	if (!(output = (char *)malloc(sizeof(char) * size + 1)))
		return (NULL);
	output = ft_memset(output, 0, size + 1);
	return (output);
}
