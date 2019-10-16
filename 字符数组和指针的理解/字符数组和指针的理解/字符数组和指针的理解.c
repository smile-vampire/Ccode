#include<stdio.h>
//字符数组
int main()
{
	char arr[] = { 'a', 'b', 'c', 'd', 'e', 'f' };
	printf("%d\n", sizeof(arr));//整个数组大小
	printf("%d\n", sizeof(arr + 0));//a[0]地址
	printf("%d\n", sizeof(*arr));//a[0]大小
	printf("%d\n", sizeof(arr[1]));//a[1]大小
	printf("%d\n", sizeof(&arr));//a地址
	printf("%d\n", sizeof(&arr + 1));//下一个数组地址
	printf("%d\n", sizeof(&arr[0] + 1));//a[1]地址
	return 0;
	//6 4  1 1 4 4 4
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
int main()
{
	char arr[] = { 'a', 'b', 'c', 'd', 'e', 'f' };
	printf("%d\n", strlen(arr));   //遇到/0停止  随机值   x
	printf("%d\n", strlen(arr + 0)); //x
	//printf("%d\n", strlen(*arr));    strlen 接受为指针  a[0大小]
	//printf("%d\n", strlen(arr[1]));   a[1]大小                             这几个为语法错误
	//printf("%d\n", strlen(&arr));     整个数组地址 应用数组指针接收
	//printf("%d\n", strlen(&arr+1));     整个数组地址 应用数组指针接收
	printf("%d\n", strlen(&arr[0] + 1));//x-1
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
int main()
{
	char arr[] = "abcdef";
	printf("%d\n", sizeof(arr));
	printf("%d\n", sizeof(arr + 0));
	printf("%d\n", sizeof(*arr));
	printf("%d\n", sizeof(arr[1]));
	printf("%d\n", sizeof(&arr));
	printf("%d\n", sizeof(&arr + 1));
	printf("%d\n", sizeof(&arr[0] + 1));
	return 0;
	//7 4 1 1 4 4 4
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
int main()
{
	char *p = "abcdef";
	printf("%d\n", sizeof(p));
	printf("%d\n", sizeof(p + 1));
	printf("%d\n", sizeof(*p));
	printf("%d\n", sizeof(p[0]));
	printf("%d\n", sizeof(&p));
	printf("%d\n", sizeof(&p + 1));
	printf("%d\n", sizeof(&p[0] + 1));
	return 0;
	//4 4 1 1 4 4 4
}
————————————————
版权声明：本文为CSDN博主「smilevampire」的原创文章，遵循 CC 4.0 BY - SA 版权协议，转载请附上原文出处链接及本声明。
原文链接：https ://blog.csdn.net/smilevampire/article/details/102534323