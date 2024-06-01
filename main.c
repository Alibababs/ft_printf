#include "ft_printf.h"
#include <stdio.h>

int main(void)
{
	printf("[-] %d\n", ft_printf("%u ", "-155451115361"));
	printf("[+] %d\n", printf("%u ", "-155451115361"));
}
