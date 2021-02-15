#include <stdio.h>
#include "includes/ft_printf.h"

int main ()
{
    int i = -2147483648;
    int returnvalue1;
    int returnvalue2;
    returnvalue1 = printf("BONJOUR JE TEST VR PRITNF %d",i);
    returnvalue2 = ft_printf("BONJOUR JE TEST MY PRINTF %d",i);
    printf ("\n VR PR %d MY PR %d",returnvalue1,returnvalue2);
}