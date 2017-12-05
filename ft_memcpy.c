/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memcpy.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: liadelai <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/02 14:02:25 by liadelai     #+#   ##    ##    #+#       */
/*   Updated: 2017/12/02 14:02:27 by liadelai    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	void	*output;

	output = dst;
	while (n--)
	{
		*(unsigned char *)dst = *(unsigned char *)src;
		dst += sizeof(unsigned char);
		src++;
	}
	return (output);
}
