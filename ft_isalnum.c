#include "libft.h"
int	ft_isalnum(char an)
{
	if ((an > 'A' && an < 'Z') || (an > 'a' && an < 'z') || (an > '0' && an < '9'))
	{
		return	(1);
	}
	return	(0);
}
