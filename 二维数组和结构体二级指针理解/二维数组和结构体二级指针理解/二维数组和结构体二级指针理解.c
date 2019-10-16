#include<stdio.h>
//二维数组
int main()
{
	char a[3][4] = { 0 };//&a[0]代表整个地址
	printf("%d\n", sizeof(a));//sizeof数组名代表整个数组大小
	printf("%d\n", sizeof(a[0][0]));//代表第一个元素值
	printf("%d\n", sizeof(a[0]));//代表第一行数组名（内容）
	printf("%d\n", sizeof(a[0] + 1));//代表第一行第二个元素地址
	printf("%d\n", sizeof(*(a[0] + 1)));//代表第一行第二个元素内容
	printf("%d\n", sizeof(a + 1));//代表第二行地址（数组指针）
	printf("%d\n", sizeof(*(a + 1)));//第二行的内容
	printf("%d\n", sizeof(&a[0] + 1));//第二行地址
	printf("%d\n", sizeof(*(&a[0] + 1)));//第二行内容
	printf("%d\n", sizeof(*a));//代表第一行数组名（内容）
	printf("%d\n", sizeof(a[3]));//编译期间确定了，不会参与运算
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
	int *ptr = (int *)(&a + 1);//&a+1加到数组最后
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
//结构体大小20字节
struct Test
{
	int Num;
	char *pcName;
	short sDate;
	char cha[2];
	short sBa[4];
}*p;
//假设p 的值为0x100000。 如下表表达式的值分别为多少？
int main()
{
	p = (struct Test*) 0x100000;
	printf("%p\n", p + 0x1); //p是结构体指针+1相对于加20个字节  转为16进制14  0x001000014 
	printf("%p\n", (unsigned long)p + 0x1);//他为long型数据0x001000001 
	printf("%p\n", (unsigned int*)p + 0x1);//0x001000004他为  int*类型
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
	int a[3][2] = { (0, 1), (2, 3), (4, 5) };//逗号表达式相当于={1,3,5,0,0,0}
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
	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);//p指向a  &p[4][2]=*(*(p+4)+2);
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
	printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));//aa+1代表第二行地址 * 代表6的地址  *(ptr2 - 1)  5
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
	printf("%s\n", *--*++cpp + 3);//ER  因为自增所以cpp指向改变
	printf("%s\n", *cpp[-2] + 3);//*((*(CPP-2))+3     ST
	printf("%s\n", cpp[-1][-1] + 1);//*(*(CPP-1)-1)+1   EW  因为[]解引用没有改变cpp指向
	return 0;
}
————————————————
版权声明：本文为CSDN博主「smilevampire」的原创文章，遵循 CC 4.0 BY - SA 版权协议，转载请附上原文出处链接及本声明。
原文链接：https ://blog.csdn.net/smilevampire/article/details/102534323