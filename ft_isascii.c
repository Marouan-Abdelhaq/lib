#include "libft.h"

int	ft_isascii(int as)
{
	if (as >= 0 && as <= 127)
	{
		return	(1);
	}
	return	(0);
}
