#include<stdio.h>
//һά����
int main()
{
	int a[] = { 1, 2, 3, 4 };
	printf("%d\n", sizeof(a)); //sizeof�������������С
	printf("%d\n", sizeof(a + 0));//����a[0]��ַ
	printf("%d\n", sizeof(*a));//����a[0]��С
	printf("%d\n", sizeof(a + 1)); //a[1]��ַ
	printf("%d\n", sizeof(a[1]));//a[1]��С
	printf("%d\n", sizeof(&a));//&a��һ��ָ������a��ָ��
	printf("%d\n", sizeof(*&a));//a��������Ԫ�ش�С
	printf("%d\n", sizeof(&a + 1));//��һ�������ַ
	printf("%d\n", sizeof(&a[0]));//a[0]��ַ
	printf("%d\n", sizeof(&a[0] + 1));//a[1]��ַ
	return 0;
	//16 4 4 4 4 4 16 4 4 4
}
