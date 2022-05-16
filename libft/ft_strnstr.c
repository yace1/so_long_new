#include "../so_long.h"

static void	reset(int *i, int *k, long long *res)
{
	*i = *res;
	*k = 0;
	*res = -1;
}

int	ft_strnstr(const char *big, const char *little, int len)
{
	int		i;
	int		k;
	long long	res;

	if (!big && !little)
		return (0);
	i = -1;
	k = 0;
	res = -1;
	if (!*little)
		return (0);
	while (++i < len && big[i])
	{
		if (big[i] == little[k])
		{
			if (res < 0)
				res = i;
			if (k++ == ft_strlen(little) - 1)
				return (res);
		}
		else if (res >= 0)
			reset(&i, &k, &res);
	}
	return (0);
}