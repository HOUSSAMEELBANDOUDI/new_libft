#include "libft.h"

void	ft_free_str_arr(char ***arr)
{
	int	j;

	j = 0;
	while (*arr && (*arr)[j])
	{
		if ((*arr)[j])
		{
			free((*arr)[j]);
			(*arr)[j] = NULL;
		}
		j++;
	}
	if (*arr)
	{
		free(*arr);
		*arr = NULL;
	}
}