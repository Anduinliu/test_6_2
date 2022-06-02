 #define _CRT_SECURE_NO_WARNINGS  1
#include<stdio.h>
#include<string.h>
//int main()
//{
//	for (int i = 0; i < 2; i++)
//	{
//		printf("     **     \n");
//	}
//}
//反转字符串
//void ReverseString(char* a, int size)
//{
//	int start = 0;
//	int end = size - 1;
//	char tmp = 0;//存储字符串
//	if (size == 0 || size == 1)
//	{
//		a = a;
//	}
//	while (start < end)
//	{
//		char tmp = a[start];
//		a[start] = a[end];
//		a[end] = tmp;
//		++start;
//		--end;
//	}
//	printf("%s\n", a);
//}
//int main()
//{
//	int len = 0;
//	char a[10] = { 0 };//初始化字符串
//	scanf("%s", &a);
//	len = strlen(a);
//	ReverseString(a, len);
//	return 0;
//}
int main()
{
    char arr1[] = "abcd";//此处可以结合内存来说明
    char arr2[] = { 'a', 'b', 'c','d' };
    //结合内存详细讲
    printf("%s\n", arr1);
    printf("%s\n", arr2);
}