#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main()
{
	char *c[] = {"ENTER","NEW","POINT","FIRST"};
	char**cp[] = {c+3,c+2,c+1,c};
	char***cpp = cp;
	printf("%s\n", **++cpp);//"POINT
	printf("%s\n", *--*++cpp+3);//ER  ��Ϊ��������cppָ��ı�
	printf("%s\n", *cpp[-2]+3);//*((*(CPP-2))+3     ST
	printf("%s\n", cpp[-1][-1]+1);//*(*(CPP-1)-1)+1   EW  ��Ϊ[]������û�иı�cppָ��
	return 0; 
}
#if 0
int main()
{
	char *a[] = {"work","at","alibaba"};
	char**pa = a;
	pa++;
	printf("%s\n", *pa);
	return 0;
	// at
}
int main()
{
	int aa[2][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int *ptr1 = (int *)(&aa + 1);
	int *ptr2 = (int *)(*(aa + 1));
	printf( "%d,%d", *(ptr1 - 1), *(ptr2 - 1));//aa+1����ڶ��е�ַ * ����6�ĵ�ַ  *(ptr2 - 1)  5
	return 0;
	//10 5
}
int main()
{
	int a[5][5];
	int(*p)[4]=(int (*)[4])a;
	printf( "%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);//pָ��a  &p[4][2]=*(*(p+4)+2);
	return 0;
	// FFFFFFC  -4
}
int main(int argc, char * argv[])
{
	int a[3][2] = { (0, 1), (2, 3), (4, 5) };//={1,3,5,0,0,0}
	int *p;
	p = a[0];
	printf( "%d", p[0]);
	//1
}
int main()
{
	int a[4] = { 1, 2, 3, 4 };
	int *ptr1 = (int *)(&a + 1);
	int *ptr2 = (int *)((int)a + 1);
	printf( "%x,%x", ptr1[-1], *ptr2);//ptr[-1]=*(ptr-1)
	return 0;
}
//�ṹ���С20�ֽ�
struct Test
{
	int Num;
	char *pcName;
	short sDate;
	char cha[2];
	short sBa[4];
}*p;
//����p ��ֵΪ0x100000�� ���±���ʽ��ֵ�ֱ�Ϊ���٣�
int main()
{
	p = (struct Test*) 0x100000;
	printf("%p\n", p + 0x1); //p�ǽṹ��ָ��+1����ڼ�20���ֽ�  תΪ16����14  0x001000014 
	printf("%p\n", (unsigned long)p + 0x1);//��Ϊlong������0x001000001 
	printf("%p\n", (unsigned int*)p + 0x1);//0x001000004��Ϊ  int*����
	return 0; 
}

int main()
{
	int a[5] = { 1, 2, 3, 4, 5 };
	int *ptr = (int *)(&a + 1);//&a+1�ӵ��������
	printf( "%d,%d", *(a + 1), *(ptr - 1));
	return 0; 
	//2  5
}
int main()
{
	char a[3][4] = { 0 };//&a[0]����������ַ
	printf("%d\n", sizeof(a));//sizeof�������������������С
	printf("%d\n", sizeof(a[0][0]));//�����һ��Ԫ��ֵ
	printf("%d\n",sizeof(a[0]));//�����һ�������������ݣ�
	printf("%d\n",sizeof(a[0]+1));//�����һ�еڶ���Ԫ�ص�ַ
	printf("%d\n",sizeof(*(a[0]+1)));//�����һ�еڶ���Ԫ������
	printf("%d\n",sizeof(a+1));//����ڶ��е�ַ������ָ�룩
	printf("%d\n",sizeof(*(a+1)));//�ڶ��е�����
	printf("%d\n",sizeof(&a[0]+1));//�ڶ��е�ַ
	printf("%d\n",sizeof(*(&a[0]+1)));//�ڶ�������
	printf("%d\n",sizeof(*a));//�����һ�������������ݣ�
	printf("%d\n",sizeof(a[3]));//�����ڼ�ȷ���ˣ������������15221193647
	return 0;
	// 48 4 16 4 4 4 16 4 16 16 16
}
int main()
{
	char *p = "abcdef";
	printf("%d\n", strlen(p));
	printf("%d\n", strlen(p + 1));
	/*printf("%d\n", strlen(*p));
	printf("%d\n", strlen(p[0]));
	printf("%d\n", strlen(&p));
	printf("%d\n", strlen(&p+1));*/
	printf("%d\n", strlen(&p[0]+1));
	return 0;
	//6 5 ��� ��� 5
}

int main()
{
	char *p = "abcdef";
	printf("%d\n", sizeof(p));
	printf("%d\n", sizeof(p + 1));
	printf("%d\n", sizeof(*p));
	printf("%d\n", sizeof(p[0]));
	printf("%d\n", sizeof(&p));
	printf("%d\n", sizeof(&p+1));
	printf("%d\n", sizeof(&p[0]+1));
	return 0;
	//4 4 1 1 4 4 4
}

int main()
{
	char arr[] = "abcdef";
	printf("%d\n", strlen(arr));
	printf("%d\n", strlen(arr + 0));
//	printf("%d\n", strlen(*arr));
//	printf("%d\n", strlen(arr[1]));
//  printf("%d\n", strlen(&arr));
//	printf("%d\n", strlen(&arr+1));
	printf("%d\n", strlen(&arr[0]+1));
	return 0;
	//    6    6    5
}

int main()
{
	char arr[] = "abcdef";
	printf("%d\n", sizeof(arr));
	printf("%d\n", sizeof(arr + 0));
	printf("%d\n", sizeof(*arr));
	printf("%d\n", sizeof(arr[1]));
	printf("%d\n", sizeof(&arr));
	printf("%d\n", sizeof(&arr+1));
	printf("%d\n", sizeof(&arr[0]+1));
	return 0;
	//7 4 1 1 4 4 4
}

int main()
{
	char arr[] = { 'a', 'b', 'c', 'd', 'e', 'f' };
	printf("%d\n", strlen(arr));   //����/0ֹͣ  ���ֵ   x
	printf("%d\n", strlen(arr + 0)); //x
	//printf("%d\n", strlen(*arr));    strlen ����Ϊָ��  a[0��С]
	//printf("%d\n", strlen(arr[1]));   a[1]��С                              �⼸��Ϊ�﷨����
	//printf("%d\n", strlen(&arr));     ���������ַ Ӧ������ָ�����
	//printf("%d\n", strlen(&arr+1));     ���������ַ Ӧ������ָ�����
	printf("%d\n", strlen(&arr[0]+1));//x-1
	return 0;
}

int main()
{
	//�ַ�����
	char arr[] = { 'a', 'b', 'c', 'd', 'e', 'f' };
	printf("%d\n", sizeof(arr));//���������С
	printf("%d\n", sizeof(arr+0));//a[0]��ַ
	printf("%d\n", sizeof(*arr));//a[0]��С
	printf("%d\n", sizeof(arr[1]));//a[1]��С
	printf("%d\n", sizeof(&arr));//a��ַ
	printf("%d\n", sizeof(&arr+1));//��һ�������ַ
	printf("%d\n", sizeof(&arr[0]+1));//a[1]��ַ
	return 0;
	//6 4  1 1 4 4 4
}
int main()
{
	//һά����
	int a[] = { 1, 2, 3, 4 };
	printf("%d\n", sizeof(a)); //���������С
	printf("%d\n", sizeof(a + 0));//����a[0]��ַ
	printf("%d\n", sizeof(*a));//����a[0]��С
	printf("%d\n", sizeof(a + 1)); //a[1]��ַ
	printf("%d\n", sizeof(a[1]));//a[1]��С
	printf("%d\n", sizeof(&a));//a[0]��С &a��һ��ָ��
	printf("%d\n", sizeof(*&a));//����Ԫ�ش�С
	printf("%d\n", sizeof(&a + 1));//��һ�������ַ
	printf("%d\n", sizeof(&a[0]));//a[0]��ַ
	printf("%d\n", sizeof(&a[0] + 1));//a[1]��ַ
	return 0;
	//16 4 4 4 4 4 16 4 4 4
}
#endif
