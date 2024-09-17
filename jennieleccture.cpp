//#include<stdio.h>
//int main(){
////	int a=5,b=10,c;
////	int *p=&a;
////	int *q=&b;
////	c=*p;
//////	
////	printf("a=%d",a);
////		printf("a=%u",&a);
////			printf("a=%d",*p);
////				printf("b=%d",*q);
////					printf("addres b=%x",q);
////						printf("c=%d",c);
////							printf("c=%u",&p);
////		
////	
//
//int a=10;
//int *p=&a;
//int **q=&p;
//int ***r=&q;
//
//printf("a=%d",*(*(*r)));
//
//}






//#include<stdio.h>
//int a=10,b=5,temp;
//void swap(int x,int y);
//int main(){
//	
//	swap(a,b);
////	printf("wap:%d",swap);
//	return 0;
//}
//
//void swap(int x,int y){
//	temp=x;
//	x=y;
//	y=temp;
//	
//	printf("%d \t%d:",x,y);
//	
//	
//}



//
//#include<stdio.h>
//int main(){
//	int a[5]={1,2,3,4,5};
//	int *p=&a[0];
//	int *q=&a[0];
//
//	printf("%d\n",a[0]);
//		printf("%d\n",*p);
//		p=p+2;
//		
//			printf("%d\n",*p);
//			*p=6;
//				printf("%d\n",*p);
//}



//#include<stdio.h>
//int main(){
//	int a[]={3,2,67,0,56};
//	int *p=&a[3];
////	printf("%d %d %d\n",*p++,*p++,*p++);//associtivity right to left.
////	printf("%d\n",*p);
////	printf("%d %d\n",*++p,*++p);
////		printf("%d\n",*p);
////	
////printf("%d %d\n",*--p,*--p);
////printf("%d",*p);
//printf("%d %d\n",*p--,*p--);
//
//}
//












#include<stdio.h>
void isum(int ,int);
void isum(int x, int y)
{
	int sum=x+y;
	printf("The sum id:%d",sum);
}
int main()
{
	isum(1,2);
	isum(1,10);
}












	
	//#include<stdio.h>
	//int main(){
	//	int a[]={10,11,-1,56,67,5,4};
	//	int *p,*q;
	//	p=a;
	//	q=&a[0]+3;
	//	printf("%d %d %d\n",(*p)++,(*p)++,*(++p));//12 ??  myans:-1
	//	printf("%d\n",*p);
	//	printf("%d\n",*p); //13?  myans:56
	//	printf("%d",(*p)++);//13   myans:56
	//	printf("%d\n",(*p)++);//14  myans:67
	//	q--;
	//	printf("%d\n",(*(q+2))--);//67 right
	//	printf("%d\n",*(p+2)-2);//54  myans:5
	//	printf("%d\n",*(p++ -2)-1);//-1  myans:2
	//}










