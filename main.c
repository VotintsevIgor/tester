#include "ft_printf.h"

int	main(void)
{
	ft_printf("my char: 			%c, %c\n", 'A', 'b');
		printf("char: 				%c, %c\n\n", 'A', 'b');

	ft_printf("my number: 			%d, %d\n", 12345, -2147483648);
		printf("number:				%d, %ld\n\n", 12345, -2147483648);


	ft_printf("my string: 			%s\n", "Igor wants a cake");
		printf("string: 			%s\n\n", "Igor wants a cake");


	ft_printf("my %%				%%\n");
		printf("%%				%%\n\n");


	int a = 42;
	ft_printf("my pointer: 			%p\n", &a);
		printf("pointer: 			%p\n\n", &a);


	unsigned int b = -34324913;
	ft_printf("my unsigned:			%u\n", b);
		printf("unsigned: 			%u\n\n", b);


	int c = -3249;
	ft_printf("my hex: 			%X\n", c);
	printf("hex: 				%X\n\n", c);

	ft_printf("my hex: 			%x\n", c);
	printf("hex: 				%x\n\n", c);

	ft_printf("%d\n", ft_printf("My number of printed chars:	"));
		printf("%d\n", 	printf("PF number of printed chars:	"));
}
