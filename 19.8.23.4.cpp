#include<stdio.h>
main()
{
	int a=125;
	int b=12345;
	long ax=123456789;
	short s=4043;
	float x=2.13459;
	double dx=1.1415927;
	char c='W';
	unsigned long ux = 2541567890;
	
	printf("a+c= %d\n" , a+c);
	printf("x+c= %f\n" , x+c);
	printf("dx+x= %f\n" , dx+x);
	printf("a+x= %f\n" , a+x);
	printf("a+c= %d%c\n" , a+c);
	printf("s+b= %d\n" , s+b);
	printf("ax+b= %ld\n" , ax+b);
	printf("s+c= %hd\n" , s+c);
	printf("ax+c= %ld\n" , ax+c);
	printf("ax+ux= %lu\n" , ax+ux);
	
}
		  
		  
	
		  
		  
		  
		  
		  
		  
		  

