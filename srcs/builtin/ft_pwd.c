/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pwd.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gphilipp <gphilipp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 12:14:24 by gkgpteam          #+#    #+#             */
/*   Updated: 2022/02/22 17:34:02 by gphilipp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"
#include <unistd.h>
#include <stdlib.h>
#include <limits.h>

char	*ft_getcwd(void)
{
	char		cwd[PATH_MAX];

	if (getcwd(cwd, PATH_MAX) != NULL)
		return (ft_strdup(cwd));
	return (NULL);
}

int	ft_pwd(void)
{
	char		*pwd;

	pwd = ft_getcwd();
	if (pwd == NULL)
		return (1);
	ft_putstr(pwd);
	ft_putstr("\n");
	free(pwd);
	return (0);
}
