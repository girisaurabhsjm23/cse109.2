#include<stdio.h>
main()
{
	printf("\n char=%cd",sizeof(88));
	printf("\n int=%d",sizeof(int));
	printf("\n float=%f", sizeof(8.55));
	
	double x[]={1,2,3};
	printf("\n array %d",sizeof(x));
}
