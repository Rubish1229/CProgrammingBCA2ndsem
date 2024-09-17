//WAp to read two arrays of size  5 and store sum of these arrays into third array.
#include<stdio.h>
int main()
{
	int arr1[5]={1,2,3,4,5};
	int arr2[5]={2,4,6,8,5};
	int sumarr[5],i;
	for(i=0;i<5;i++){
		sumarr[i]=arr1[i]+arr2[i];
		printf("SUM at place-%d is:%d\n",i,sumarr[i]);
	}
	
}
