#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<malloc.h> 
typedef  struct list {  
	int data;  
	struct list * next;  //��һ���ڵ��ַ   
}list;  
//��һ������ 
struct list * L=NULL;//ͷ
struct list * head=NULL;//��
struct list * p=NULL;  
//�ڶ�������
struct list * L1=NULL;//ͷ
struct list * head1=NULL;//��
struct list * p1=NULL; 
//��������
struct list * L2=NULL;//ͷ
struct list * q=NULL;
int main(){
	int i=0,length;
	printf("����������ĳ���\n");
	scanf("%d",&length); 
	head=(struct list *)malloc(sizeof(struct  list)); 
	L=head;
	printf("�������������������\n");
	for(i;i<length;i++){
		p = (struct list *)malloc(sizeof(struct  list));
		scanf("%d",&p->data);
		p->next=NULL;
		head->next=p;
		head=p;
	}
	int i1=0,length1;
	printf("����������ĳ���\n");
	scanf("%d",&length1);

	head1=(struct list *)malloc(sizeof(struct  list)); 
	L1=head1;
	printf("�������������������\n");
	for(i1;i1<length1;i1++){
		p1= (struct list *)malloc(sizeof(struct  list));
		scanf("%d",&p1->data);
		p1->next=NULL;
		head1->next=p1;
		head1=p1;
	}
	p=L->next;//�õ���ԭ�ڵ� 
	p1=L1->next;//�õ���ԭ�ڵ�
	L2=(struct list *)malloc(sizeof(struct  list));
	L2=L;//ָ����������ռ� 
	L2->next=NULL;
	q=(struct list *)malloc(sizeof(struct  list));
	//ѭ������Ҫ�� ͷ�巨ԭ�� 
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


/////////////////��С���ж��ڶ���
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
//////////////////////��С���ж���һ��
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
////�����͵ײ���δ洢
////����������0ֵ�Ƚ�����һ����Χ  ���磨f>=-0.000001&&f<=0.000001)
//int main()
//{
//	int n = 9;
//	//000000000000000000000000001001
//	float *pFloat = (float *)&n;
//	printf("n �� ֵ Ϊ ��%d\n", n);
//	printf("*pFloat��ֵΪ��%f\n", *pFloat);
//	//�Ը��������ӽ�ȥ��ӡ
//	//0 00000000 000000000000000001001  ��ָ��λȫΪ0ʱ��ʾ+-0��
//
//	*pFloat = 9.0;
//	//1001.0-> 1.001*2^3
//	//0 10000010 00100000000000000000000 
//	printf("num �� ֵ Ϊ ��%d\n", n); 
//	//1091567616 �����ӽ�ȥ��ȡ����
//	printf("*pFloat��ֵΪ��%f\n", *pFloat);
//	return 0;
//}





//���εײ���δ洢

/*int main()
{
	char a[1000]; int i;
	for (i = 0; i<1000; i++)
	{
		a[i] = -1 - i;
	}
	printf("%d", strlen(a)); return 0;
}*///strlen ����\0 ==0ֹͣ 
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
//i=0ʱ  ��Ϊunsigned ���Ե��޷������ֵ��


//{
//	char a = -1; 
//	signed char b = -1;
//	unsigned char c = -1;
//	printf("a=%d,b=%d,c=%d", a, b, c);
//	return 0;
//}
//ԭ�룺10000000000000000000000000000001
//���룺11111111111111111111111111111110
//���룺11111111111111111111111111111111
//char ȡ��8λ 11111111
//printf  %d �������� ���λ����Ϊ1 ��1   �����������з���Ϊ���� 11111111111111111111111111111111  Դ��Ϊ-1
//a,b=-1  c=255������Χ
//�ܽ� ��%d %u ��ӡchar����
//a. ����������0���ǲ�1ȡ���ڵ�ǰ�������͵����λ��0����1��
//b. ����֮���Ƿ���ԭ�룬ȡ��������ʲô���͵ģ��޷��ţ����������ԭ�롣
//��%u unsinge��ӡʱ ������������ԭ�롣



     