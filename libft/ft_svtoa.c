
#include <stdio.h>
#include "libft.h"

static int		ft_estim(long n)
{
	size_t	estim;
	int		isneg;

	estim = 0;
	isneg = 0;
	if (n == -2147483648)
	{
	
	}
	if (n < 0)
	{
		estim++;
		isneg++;
		if (n == -2147483648)
		{
			return(11);
		}
		n = -n;
	}
	while (n >= 1)
	{
		estim++;
		n /= 10;
	}
	return (estim);
}
char	*please(char	*rtn,long nbr,int len)
{
	char *str;
	if (nbr != 0)
		str= malloc(sizeof(char) * (len + 1));
	else
		return (str = ft_strdup("0"));
	str = rtn;
	str[len] = '\0';
	while (--len)
	{
		printf("str[len] %c len %d \n",str[len],len);
		str[len] = (nbr % 10) + '0';
		nbr /= 10;
	}
		str[0] = '-';
		return(str);
}
static char		*ft_gen(char *rtn, long nbr, int len, int isneg)
{
	if (nbr != 0)
		rtn = malloc(sizeof(char) * (len + 1));
	else
		return (rtn = ft_strdup("0"));
	if (!rtn)
		return (0);
	else 	if (nbr == -2147483648)
		
		{
			printf("AAAAAAASQDSDDZS");
			return (rtn = 	please(rtn,nbr,len));
		}
		
	isneg = 0;
	printf("nbr gen %ld",nbr);
	if (nbr < 0)
	{
		isneg++;
		nbr = -nbr;
	}
	printf("nbr gen %ld",nbr);
	rtn[len] = '\0';
	while (--len)
	{
		rtn[len] = (nbr % 10) + '0';
		nbr /= 10;
	}
	if (isneg == 1)
		rtn[0] = '-';
	else
	{
		rtn[0] = (nbr % 10) + '0';
	}
	return (rtn);
}

char			*ft_itoa(int n)
{
	unsigned int		len;
	char	*rtn;
	long	nbr;
	int		isneg;
	nbr = n;
	printf(" VALEUR RECUE ITOA N %d",n);
	len = ft_estim(nbr);
	printf("\n VALEUR DE LEN %d",len);
	rtn = 0;
	isneg = 0;
	if (!(rtn = ft_gen(rtn, nbr, len, isneg)))
		return (0);
	return (rtn);
}
