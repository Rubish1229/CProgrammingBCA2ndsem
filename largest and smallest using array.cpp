#include<stdio.h>
int main()
{
	int num[5]={3,63,4,8,31};
	int i,j,largest=num[0],smallest=num[0];
//	smallest=largest=num[0];
	for(i=0;i<5;i++)
	{
		if(num[i]>largest)
		{
			largest=num[i];
		}
		if(num[j]<smallest)
		{
			smallest=num[i];
		}
}
printf("The largest number is:%d",largest);
printf("\n");
printf("The smallest number is:%d",smallest);

return 0;
}
