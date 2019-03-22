#include <stdio.h>
#include <stdlib.h>

int main()
{
	int hr1=0,min1=0,sec1=0,hr2=0,min2=0,sec2=0,sec3=0,sec4=0;
	printf("Please enter first time(hh.mm.ss)");
	scanf("%d.%d.%d",&hr1,&min1,&sec1);
	printf("Please enter second time(hh.mm.ss)");
	scanf("%d.%d.%d",&hr2,&min2,&sec2);
	sec3 = ((hr1*3600+min1*60+sec1)-(hr2*3600+min2*60+sec2));
	sec4 = -sec3;
	if (sec3 < 0)
	printf("The difference between the two times is %d second(s)\n",sec4);
	else
	printf("The difference between the two times is %d second(s)\n",sec3);
	
	
system("pause");
return 0;
}
