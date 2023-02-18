# include <stdio.h>

main()
{
	int i=1;
	int sum=0;
	for(;i<=100;i=i+1)
	{
		sum=sum+i;
		if(i<100)
		{
			printf("%i+",i);
		}
		else
		{
			printf("%i = ",i);
		}
	}
	printf("%i",sum);
}
