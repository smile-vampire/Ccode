#include<stdio.h>
//一维数组
int main()
{
	int a[] = { 1, 2, 3, 4 };
	printf("%d\n", sizeof(a)); //sizeof代表整个数组大小
	printf("%d\n", sizeof(a + 0));//代表a[0]地址
	printf("%d\n", sizeof(*a));//代表a[0]大小
	printf("%d\n", sizeof(a + 1)); //a[1]地址
	printf("%d\n", sizeof(a[1]));//a[1]大小
	printf("%d\n", sizeof(&a));//&a是一个指向数组a的指针
	printf("%d\n", sizeof(*&a));//a数组所有元素大小
	printf("%d\n", sizeof(&a + 1));//下一个数组地址
	printf("%d\n", sizeof(&a[0]));//a[0]地址
	printf("%d\n", sizeof(&a[0] + 1));//a[1]地址
	return 0;
	//16 4 4 4 4 4 16 4 4 4
}
