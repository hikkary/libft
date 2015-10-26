#include "libft.h"
// a faire verifier
int ft_cnumber(int n)
{
	int count;
	
	count = 0;
	if(n < 0)
		count ++;	
	if(n == 0)
		return(count + 1);
	while(n)
	{
		n = n / 10;
		count++;
	}
	return(count);
}

char *ft_itoa(int n)
{
	char *str;
	int i;

	i = ft_cnumber(n);
	str = malloc(sizeof(char) * (ft_cnumber(n) + 1));
	if(!str)
		return(NULL);
	if(n < 0)
	{
		str[0] = '-';
		n = n * (-1);
	}
	str[i + 1] = '\0';
	while(n)
	{
		i--;
		str[i] = (n % 10) + 48;
		n = n / 10;
	}
	return(str);
}