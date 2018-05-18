#include <stdint.h>
#include <stdio.h>

int
main()
{
	char c[4];

	c[0] = 0xF0;
	c[1] = 0x9F;
	c[2] = 0x90;
	c[3] = 0x87;

	printf("%.*s", (int)sizeof(c), c);

	printf("\n\n");

	char *mem;
	mem = (char *)c;

	printf("Byte 1: 0x%02hhX\n", mem[0]);
	printf("Byte 2: 0x%02hhX\n", mem[1]);
	printf("Byte 3: 0x%02hhX\n", mem[2]);
	printf("Byte 4: 0x%02hhX\n", mem[3]);

	return (0);
}
