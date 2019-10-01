#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
void reverse_string(char * string)
{
	if (*string != '\0')
	{
		string++;
		reverse_string(string);
		printf("%c", *(string - 1));
	}
}
int main()
	{
		char *p = "i ma a student";
		reverse_string(p);
		return 0;
	}
//void Fun(int num)
//{
//	while (num > 9)
//	{
//		printf("%d\n", num % 10);
//		 num = num / 10;
//	}
//	printf("%d\n", num);
//}
//int main()
//{
//	Fun(1234);
//	return 0;
//}
//void Fun(num)
//{
//	if (num > 9)
//	{
//		Fun(num / 10);
//	}
//	printf("%d\n", num % 10);
//}
//int main()
//{
//	Fun(1234);
//	return 0;
//}
//int Fun(int n)
//{
//	int js = 1;
//	int i = 1;
//	for (i; i <= n; i++)
//	{
//		js*=i;
//	}
//	return js;
//}
//int main()
//{
//	printf("%d\n", Fun(5));
//	return 0;
//}
//{
//	if (n == 1)
//	{
//		return 1;
//	}
//	return n*Fun(n - 1);
//}
//int main()
//{
//	printf("%d\n", Fun(5));
//	return 0;
//}
//int  Mystrlen(char *p)
//{
//	int count = 0;
//	while (*p != '\0')
//	{
//		count++;
//		p++;
//	}
//	return count;
//}
//int main()
//{
//	char *q = "hello";
//	printf("%d\n", Mystrlen(q));
//	return 0;
//}
//int  Mystrlen(char *p)
//{
//	if (*p == '\0')
//	{
//		return 0;
//	}
//	return (1 + Mystrlen(p+1));
//}
//int main()
//{
//	char *q = "hello";
//	printf("%d\n", Mystrlen(q));
//	return 0;
//}
//#include<stdlib.h>
//void reverse_string(char * string)
//{
//	if (*string != '\0')
//	{
//		string++;
//		reverse_string(string);
//		printf("%c", *(string - 1));
//	}
//}
//int main()
//	{
//		char *p = "i ma a student";
//		reverse_string(p);
//		return 0;
//	}
//int DigitSum(int n)
//{
//	if (n > 9)
//	{
//		return DigitSum(n / 10) + (n % 10);
//	}
//	return n;
//}
//int main()
//{
//	printf("%d\n", DigitSum(1729));
//}
//int Fun(int n, int k)
//{
//	int sum = 1;
//	int i = 0;
//	for (i = 0; i < k; i++)
//	{
//		sum = sum*n;
//	}
//	return sum;
//}
//int main()
//{
//	printf("%d\n", Fun(3, 4));
//	return 0;
//}
k
//int Fun(int n)
//{
//	int fun = 0;
//	int fun1 = 1;
//	int fun2 = 1;
//	int i=3;
//	if (n == 1 || n == 2)
//	{
//		return 1;
//	}
//	for (i; i <= n;i++)
//	{
//		fun = fun1 + fun2;
//		fun1 = fun2;
//		fun2 = fun;
//	}
//	return fun;
//
//}
//int main()
//{
//	printf("%d\n", Fun(1));
//	return 0;
//}
//int Fun(int n)
//{
//	if (n == 1 || n == 2)
//	{
//		return 1;
//	}
//	return Fun(n - 1) + Fun(n - 2);
//}
//int main()
//{
//	printf("%d\n", Fun(6));
//	return 0;
//}
//void Swap(int *p, int *q)
//{
//	int tmp = 0;
//	tmp = *p;
//	*p = *q;
//	*q = tmp;
//
//}
//int main()
//{
//	int a, b;
//	scanf("%d%d", &a, &b);
//	Swap(&a,&b);
//	printf("%d %d\n", a, b);
//	return 0;
//}
//void Fun(int m)
//{
//	int sum = 0;
//	int i = 0;
//	for (i = 1; i <= m; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			sum = i*j;
//			printf("%d*%d=%-3d", j, i, sum);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	Fun(9);
//	return 0;
//}
//单链表逆置
//Node *ReverseLink(Plist plist)
//{
//	Node *pCur = plist;
//	Node *prev = NULL;
//	Node *pNewHead = NULL;
//	while (pCur != NULL)
//	{
//		Node *pCurNext = pCur->next;
//		if (pCurNext == NULL)
//		{
//			pNewHead = pCur;
//		}
//		pCur->next = prev;
//		prev = pCur;
//		pCur = pCurNext;
//	}
//	return pNewHead;
//}

//Node *LastKNode(Plist plist,int k)//倒数第k个节点
//{
//	Node *p = plist->next;
//	Node *q = plist->next;
//	while (k-1>0)
//	{
//		if (p->next != NULL)
//		{
//			p = p->nxet;
//			
//			k--;
//		}
//		else
//		{
//			printf("没有此节点\n");
//			break;
//		}
//	}
//	while (p->nxet != NULL)
//	{
//		p=p->next;
//		q=q->next;
//	}
//	return q;
//}
//
///////////////一维数组指针和二维数组关系
//void Show(int *arr, int row, int col)
//{                                                                                                                       
//	int i = 0;
//	for (i = 0; i < row; i++)
//	{
//		int j = 0;
//		for (j = 0; j < col; j++)
//		{
//			printf("%d\n", arr[i*col + j]);
//		}
//	}
//}
//int main()
//{
//	char password[20] = { 0 };
//	int count = 3;
//	while (count != 0)
//	{
//		printf("请输入密码：\n");
//		scanf("%s", &password);
//		if (strcmp(password, "123456") == 0)
//		{
//			printf("登陆成功\n");
//			break;
//		}
//		else
//		{
//			count--;
//			printf("你还有%d次机会", count);
//		}
//	}
//	if (count == 0)
//	{
//		printf("退出\n");
//	}
//	return 0;
//}
//int Inseter(int arr[], int len,int num)
//{
//	int i = 0;
//	int left = 0;
//	int right = len - 1;
//	while (left<=right)
//	{
//		int mid = (left + right)/2;
//		if (num>arr[mid])
//		{
//			left++;
//		}
//		else if (num < arr[mid])
//		{
//			right--;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//		return -1;
//}
//int main()
//{
//	int arr[10] = { 2, 8, 11, 56, 66, 77, 88, 99 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	printf("%d\n", Inseter(arr, len, 77));
//	return 0;
//}
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch >= 'a'&&ch <= 'z')
//		{
//			putchar(ch - 32);
//		}
//		else if(ch >= 'A'&&ch <= 'Z')
//		{
//			putchar(ch + 32);
//		}
//		else if (ch >= 0 && ch <= 9)
//		{
//			;
//		}
//		else
//		{
//			putchar(ch);
//		}
//	}
//	return 0;
//}
//#include<stdlib.h>
//int main()
//{
//	int num = rand();
//	int n=0;
//	
//	while (n!=num)
//	{
//		scanf("%d", &n);
//		if (n > num)
//		{
//			printf("Ì«´óÁË\n");
//		}
//		else if (n < num)
//		{
//			printf("Ì«Ð¡ÁË\n");
//		}
//	}
//	printf("´ð¶ÔÁË\n");
//	return 0;
//}
//int Fun(int a, int b)
//{
//	int sn = 0;
//	int i = 0;
//	int c = 0;
//	for (i = 0; i < b; i++)
//	{
//		c=a + c * 10;
//		sn += c;
//	}
//	return sn;
//}
//int main()
//{
//	int a, b;
//	scanf("%d%d", &a, &b);
//	printf("%d\n", Fun(a, b));
//	return 0;
//}
//#include<math.h>
//int main()
//{
//	int i = 0;
//	for (i = 1; i < 999999; i++)
//	{
//		int count = 0;
//		int tmp =i;
//		while (tmp!=0)
//		{
//			count++;
//			tmp = tmp / 10;
//		}
//		tmp = i;
//		int sum = 0;
//		while (tmp != 0)
//		{
//			sum += pow((double)(tmp % 10), (double)count);
//				tmp = tmp / 10;
//		}
//		if (sum == i)
//		{
//			printf("%d\n", i);
//		}
//	}
//}
//int main()
//{
//	int count = 0
//	int i = 0;
//	for (i = 0; i <= 100; i++)
//	{
//		if (i % 10 == 0 || i / 10 == 9)
//		{
//			count++;
//		}
//	}
//	printf("%d\n", count);
//	return 0;
//}
//int main()
//{
//	int i = 0; 
//	int flg = 1;
//	float sum = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += flg*1.0 / i;
//		flg = -flg;
//	}
//	printf("%f\n", sum);
//
//	return 0;
//}
//int main()
//{
//	int a = 12;
//	int b = 18;
//	int c = 0;
//	c=(a > b) ? b : a;
//	while (a%c!=0||b%c!=0)
//	{
//		c--;
//	}
//	printf("%d\n", c);
//}
//int main()
//{
//	int a = 5;
//	int b = 7;
//	a = a^b;
//	b = a^b;
//	a = a^b;
//	printf("a=%d b=%d\n", a, b);
//	return 0;
//}