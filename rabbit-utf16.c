#include <stdint.h>
#include <stdio.h>

int
main()
{
	uint16_t bom, c[2];

	bom = 0xFEFF;
	fwrite(&bom, sizeof(bom), 1, stdout);

	c[0] = 0xD83D;
	c[1] = 0xDC07;

	fwrite(c, sizeof(c), 1, stdout);

	printf("\n\n");

	char *mem;
	mem = (char *)c;

	printf("Byte 1: 0x%02hhX\n", mem[0]);
	printf("Byte 2: 0x%02hhX\n", mem[1]);
	printf("Byte 3: 0x%02hhX\n", mem[2]);
	printf("Byte 4: 0x%02hhX\n", mem[3]);

	return (0);
}
