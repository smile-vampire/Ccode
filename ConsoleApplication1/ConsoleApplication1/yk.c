#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<malloc.h> 
typedef  struct list {  
	int data;  
	struct list * next;  //下一个节点地址   
}list;  
//第一条链表 
struct list * L=NULL;//头
struct list * head=NULL;//首
struct list * p=NULL;  
//第二条链表
struct list * L1=NULL;//头
struct list * head1=NULL;//首
struct list * p1=NULL; 
//代理链表
struct list * L2=NULL;//头
struct list * q=NULL;
int main(){
	int i=0,length;
	printf("请输入链表的长度\n");
	scanf("%d",&length); 
	head=(struct list *)malloc(sizeof(struct  list)); 
	L=head;
	printf("请依次输入链表的内容\n");
	for(i;i<length;i++){
		p = (struct list *)malloc(sizeof(struct  list));
		scanf("%d",&p->data);
		p->next=NULL;
		head->next=p;
		head=p;
	}
	int i1=0,length1;
	printf("请输入链表的长度\n");
	scanf("%d",&length1);

	head1=(struct list *)malloc(sizeof(struct  list)); 
	L1=head1;
	printf("请依次输入链表的内容\n");
	for(i1;i1<length1;i1++){
		p1= (struct list *)malloc(sizeof(struct  list));
		scanf("%d",&p1->data);
		p1->next=NULL;
		head1->next=p1;
		head1=p1;
	}
	p=L->next;//得到首原节点 
	p1=L1->next;//得到首原节点
	L2=(struct list *)malloc(sizeof(struct  list));
	L2=L;//指向已有链表空间 
	L2->next=NULL;
	q=(struct list *)malloc(sizeof(struct  list));
	//循环里主要是 头插法原理 
	while(p||p1){
		if(!p){
			q=p1;
			p1 = p1->next;
		}
		else if (!p1){
			q = p;
			p = p->next;
		}
		else if (p->data <= p1->data){
			q = p;
			p = p->next;
		}
		else{
			q = p1;
			p1 = p1->next;
		}
		q->next = L2->next;
		L2->next = q;
	}
	free(L1);
	p = L2->next;
	while (p){
		printf("%d ", p->data);
		p = p->next;
	}
}


/////////////////大小端判定第二种
#if 0
union Un
{
	int a ;
	char ch;
};
int Little()
{
	union Un uu;
	uu.a = 0x11223344;
	uu.ch;
	if (uu.ch == 0x44)
	{
		return 0;
	}
	return 1;
}
int main()
{
	int ret = 0;
	if (ret == 0)
	{
		printf("is little\n");
	}
	else
	{
		printf("is big\n");
	}
	return 0;
}
//////////////////////大小端判定第一种
int Little()
{
	int n = 0x11223344;
	char *p =(char*) &n;
	if (*p = 0x44)
	{
		return 0;
	}
	return 1;
}
int main()
{
	int ret = 0;
	if (ret == 0)
	{
		printf("is little\n");
	}
	else
	{
		printf("is big\n");
	}
	return 0;
}
#endif
////浮点型底层如何存储
////浮点类型与0值比较是是一个范围  例如（f>=-0.000001&&f<=0.000001)
//int main()
//{
//	int n = 9;
//	//000000000000000000000000001001
//	float *pFloat = (float *)&n;
//	printf("n 的 值 为 ：%d\n", n);
//	printf("*pFloat的值为：%f\n", *pFloat);
//	//以浮点类型视角去打印
//	//0 00000000 000000000000000001001  当指数位全为0时表示+-0；
//
//	*pFloat = 9.0;
//	//1001.0-> 1.001*2^3
//	//0 10000010 00100000000000000000000 
//	printf("num 的 值 为 ：%d\n", n); 
//	//1091567616 整形视角去读取数据
//	printf("*pFloat的值为：%f\n", *pFloat);
//	return 0;
//}





//整形底层如何存储

/*int main()
{
	char a[1000]; int i;
	for (i = 0; i<1000; i++)
	{
		a[i] = -1 - i;
	}
	printf("%d", strlen(a)); return 0;
}*///strlen 遇到\0 ==0停止 
//-1 -2 .....-128 127 126....1 0

//int main()
//{
//	unsigned int i;
//	for (i = 9; i >= 0; i--)
//	{
//		printf("%u\n", i);
//	}
//	return 0;
//}


//#include <stdio.h>
//
//unsigned char i = 0; int main()
//{
//	for (i = 0; i <= 255; i++)
//	{
//		printf("hello world\n");
//	}
//	return 0;
//}


//{
//	unsigned int i;
//	for (i = 9; i >= 0; i--)
//	{
//		printf("%u\n", i);
//	}
//	return 0;
//}
//i=0时  因为unsigned 所以到无符号最大值。


//{
//	char a = -1; 
//	signed char b = -1;
//	unsigned char c = -1;
//	printf("a=%d,b=%d,c=%d", a, b, c);
//	return 0;
//}
//原码：10000000000000000000000000000001
//反码：11111111111111111111111111111110
//补码：11111111111111111111111111111111
//char 取后8位 11111111
//printf  %d 整型提升 最高位符号为1 补1   整型提升后有符号为补码 11111111111111111111111111111111  源码为-1
//a,b=-1  c=255超出范围
//总结 ：%d %u 打印char数据
//a. 整形提升后补0还是补1取决于当前变量类型的最高位是0还是1；
//b. 提升之后是否求原码，取决于它是什么类型的，无符号，提升后就是原码。
//当%u unsinge打印时 整型提升就是原码。



     