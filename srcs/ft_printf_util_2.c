/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_util_2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoolpra <spoolpra@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 00:38:00 by spoolpra          #+#    #+#             */
/*   Updated: 2022/03/02 23:30:07 by spoolpra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	*get_ud(va_list *arg, size_t *var_size)
{
	char			*str;
	void			*var;
	unsigned int	u;

	u = va_arg(*arg, unsigned int);
	str = ft_itoa(u);
	if (!str)
		return (NULL);
	*var_size = ft_strlen(str);
	var = malloc(*var_size);
	if (var)
		var = ft_memcpy(var, str, *var_size);
	free(str);
	return (var);
}

void	*get_percent(size_t *var_size)
{
	void	*var;

	*var_size = 1;
	var = malloc(*var_size);
	if (var)
		((unsigned char *)var)[0] = (unsigned char) '%';
	return (var);
}
