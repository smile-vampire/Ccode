#include<stdio.h>
//��ά����
int main()
{
	char a[3][4] = { 0 };//&a[0]����������ַ
	printf("%d\n", sizeof(a));//sizeof�������������������С
	printf("%d\n", sizeof(a[0][0]));//�����һ��Ԫ��ֵ
	printf("%d\n", sizeof(a[0]));//�����һ�������������ݣ�
	printf("%d\n", sizeof(a[0] + 1));//�����һ�еڶ���Ԫ�ص�ַ
	printf("%d\n", sizeof(*(a[0] + 1)));//�����һ�еڶ���Ԫ������
	printf("%d\n", sizeof(a + 1));//����ڶ��е�ַ������ָ�룩
	printf("%d\n", sizeof(*(a + 1)));//�ڶ��е�����
	printf("%d\n", sizeof(&a[0] + 1));//�ڶ��е�ַ
	printf("%d\n", sizeof(*(&a[0] + 1)));//�ڶ�������
	printf("%d\n", sizeof(*a));//�����һ�������������ݣ�
	printf("%d\n", sizeof(a[3]));//�����ڼ�ȷ���ˣ������������
	return 0;
	// 48 4 16 4 4 4 16 4 16 16 16
}
1
2
3
4
5
6
7
8
9
10
11
12
13
14
15
16
17
18
int main()
{
	int a[5] = { 1, 2, 3, 4, 5 };
	int *ptr = (int *)(&a + 1);//&a+1�ӵ��������
	printf("%d,%d", *(a + 1), *(ptr - 1));
	return 0;
	//2  5
}
1
2
3
4
5
6
7
8
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
1
2
3
4
5
6
7
8
9
10
11
12
13
14
15
16
17
18
int main()
{
	int a[4] = { 1, 2, 3, 4 };
	int *ptr1 = (int *)(&a + 1);
	int *ptr2 = (int *)((int)a + 1);
	printf("%x,%x", ptr1[-1], *ptr2);//ptr[-1]=*(ptr-1)
	return 0;
	//4  2000000
}
1
2
3
4
5
6
7
8
9
int main(int argc, char * argv[])
{
	int a[3][2] = { (0, 1), (2, 3), (4, 5) };//���ű��ʽ�൱��={1,3,5,0,0,0}
	int *p;
	p = a[0];
	printf("%d", p[0]);
	//1
}
1
2
3
4
5
6
7
8
int main()
{
	int a[5][5];
	int(*p)[4] = (int(*)[4])a;
	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);//pָ��a  &p[4][2]=*(*(p+4)+2);
	return 0;
	// FFFFFFC  -4
}
1
2
3
4
5
6
7
8
int main()
{
	int aa[2][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int *ptr1 = (int *)(&aa + 1);
	int *ptr2 = (int *)(*(aa + 1));
	printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));//aa+1����ڶ��е�ַ * ����6�ĵ�ַ  *(ptr2 - 1)  5
	return 0;
	//10 5
}
1
2
3
4
5
6
7
8
9
int main()
{
	char *a[] = { "work", "at", "alibaba" };
	char**pa = a;
	pa++;
	printf("%s\n", *pa);
	return 0;
	// at
}
1
2
3
4
5
6
7
8
9
int main()
{
	char *c[] = { "ENTER", "NEW", "POINT", "FIRST" };
	char**cp[] = { c + 3, c + 2, c + 1, c };
	char***cpp = cp;
	printf("%s\n", **++cpp);//"POINT
	printf("%s\n", *--*++cpp + 3);//ER  ��Ϊ��������cppָ��ı�
	printf("%s\n", *cpp[-2] + 3);//*((*(CPP-2))+3     ST
	printf("%s\n", cpp[-1][-1] + 1);//*(*(CPP-1)-1)+1   EW  ��Ϊ[]������û�иı�cppָ��
	return 0;
}
��������������������������������
��Ȩ����������ΪCSDN������smilevampire����ԭ�����£���ѭ CC 4.0 BY - SA ��ȨЭ�飬ת���븽��ԭ�ĳ������Ӽ���������
ԭ�����ӣ�https ://blog.csdn.net/smilevampire/article/details/102534323