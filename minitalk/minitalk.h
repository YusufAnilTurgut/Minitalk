/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yturgut <yusufanilturgut22@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 00:20:00 by yturgut           #+#    #+#             */
/*   Updated: 2023/06/21 00:32:20 by yturgut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H

# include <signal.h>
# include "./utils/ft_printf/ft_printf.h"

void	ft_signalhandler(int signal);
int		ft_atoi(const char *str);
int		ft_unicode_check(char *str);

#endif