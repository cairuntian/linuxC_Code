#include <stdio.h>

#define len 8

int main(void)
{
	int j,i,key;
	int a[len]={8,9,7,4,12,6,345,2,};
	for(j=1;j<len;j++)
	{
		printf("%d,%d,%d,%d,%d,%d,%d,%d\n",a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7]);
		key = a[j];
		i=j-1;
		while (i >= 0 && a[i] > key) {
			a[i+1] = a[i];
			i--;
		}
		a[i+1] = key;
	}
        printf("%d,%d,%d,%d,%d,%d,%d,%d\n",a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7]);
	return 0;
}
