#include <stdio.h>

int main(void)
{
	int i = 0xcffffff3;
        printf("%d\n",i);
	printf("%x\n", 0xcffffff3>>2);
        printf("%d\n",i);
	printf("%x\n", i>>2);
        printf("%d\n",i);
	return 0;
}
