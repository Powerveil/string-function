#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<assert.h>
#include<errno.h>
#include<ctype.h>


//int my_strlen(const char* str)
//{
//	int count = 0;
//	assert(str != NULL);
//	while (*str != '\0')
//	{
//		str++;
//		count++;
//	}
//	return count;
//}

//int my_strlen(const char* str)
//{
//	assert(str != NULL);
//	char* p = str;
//	while (*p != '\0')
//	{
//		p++;
//	}
//	return p - str;
//}
//int my_strlen(char* str)
//{
//	if (*str != '\0')
//	{
//		return 1 + my_strlen(++str);
//	}
//	else
//		return 0;
//}

//size_t 就是 unsigned int
//int main(void)
//{
//	char str[] = "abcdef";
//	//int len = strlen(str);
//	//int len = my_strlen(str);
//	//printf("%d\n", len);
//	if (my_strlen("abc") - my_strlen("abcdef") > 0)
//	{
//		printf("haha\n");
//	}
//	else
//	{
//		printf("hehe\n");
//	}
//
//	return 0;
//}


//int main(void)
//{
//	int i = 0;
//	while (i++ <= 5)
//	{
//	}
//	printf("%d\n", i);
//	return 0;
//}








//char *strcpy( char *strDestination, const char *strSource );


//    strcpy函数的注意事项

//源字符串必须以'\0'结束
//会将源字符串中的'\0'拷贝到目标空间
//目标空间必须足够大，以确保能存放源字符串
//目标空间必须可变
//学会模拟实现。

//char* my_strcpy(char* dest, const char* src)
//{
//	assert(dest);
//	assert(src);
//	char* ret = dest;
//	//拷贝src指向的字符串到dest指向的空间，包含'\0'
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	//返回目的空间的起始地址
//	return ret;
//}
//
//
//int main(void)
//{
//	char arr1[] = "abcdefghi";
//	//目标字符串
//	char arr2[] = "bit";//arr2 必须有\0 不然会越界访问 让后面的字符拷贝到arr1
//	//源字符串
//
//	//my_strcpy(arr1, arr2);
//	printf("%s\n", my_strcpy(arr1, arr2));
//	return 0;
//}



//char *strcat( char *strDestination, const char *strSource );

//   strcat 注意事项


//源字符串必须以'\0'结束
//目标空间必须足够大，能容纳下源字符串的内容
//目标空间必须可修改
//字符串自己给自己追加，如何？


//char* my_strcat(char* dest, const char* src)
//{
//	assert(dest);
//	assert(src);
//	char* ret = dest;
//
//	//1. 找到目的字符串的'\0'
//	while (*dest != '\0')
//	{
//		dest++;
//	}
//	//2. 追加
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//
//
//int main(void)
//{
//	char arr1[30] = "hello\0xxxxxxxxxxxxx";
//	char arr2[] = "world";
//	//my_strcat(arr1, arr2);
//	printf("%s\n", my_strcat(arr1, arr2));
//	return 0;
//}



//      strcmp

//int strcmp( const char *string1, const char *string2 );

//      strcmp的注意事项


//第一个字符串大于第二个字符串，则返回大于0的数字
//第一个字符串等于第二个字符串，则返回0
//第一个字符串小于第二个字符串，则返回小于0的数字
//那么如何判断两个字符串？

//int my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	//比较
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0')
//			return 0;
//		str1++;
//		str2++;
//	}
//	/*if (*str1 > *str2)
//		return 1;
//	else if (*str1 < *str2)
//		return -1;*/
//	return *str1 - *str2;
//}
//
//int main(void)
//{
//	char* p1 = "abcdef";//6
//	char* p2 = "qwert";//5
//	int ret = my_strcmp(p1, p2);
//
//	printf("%d\n", ret);
//	return 0;
//}


//    strncpy

//int main(void)
//{
//	char str1[10] = "abcsasaa";
//	char str2[] = "asd";
//	strncpy(str1, str2, 6);
//	return 0;
//}


//   strncat


//int main(void)
//{
//	char str1[30] = "abcdes\0xxxxxxxxxx";
//	char str2[] = "hello";
//	strncat(str1, str2, 8);
//	return 0;
//}








//strstr - 查找字符串

//char* my_strstr(const char* str1, const char* str2)
//{
//	char* p2 = (char*)str2;
//	char* cur = (char*)str1;
//	if (*str2 == '\0')
//		return (char*)str1;
//	while (*cur!='\0')
//	{
//		char* p1 = cur;
//		while (*p1 && *p2 && *p1 == *p2)
//		{
//			p1++;
//			p2++;
//		}
//		if (*p2 == '\0')
//			return cur;//找到字串
//		cur++;
//	}
//	return NULL;//找不到字串
//}
//
//int main(void)
//{
//	char* p1 = "abbcdef";
//	char* p2 = "bbc";
//	char* ret = my_strstr(p1, p2);
//	if (ret == NULL)
//	{
//		printf("字串不存在\n");
//	}
//	else
//	{
//		printf("%s\n", ret);
//	}
//	return 0;
//}





//int main(void)
//{
//	//192.168.31.121
//	//192 168 31 121 - strtok
//	//zpw@bitedu.tech   @.
//	//zpw bitedu tech
//
//	char arr[] = "zpw@bitedu.tech";
//	char* p = "@.";
//
//	//点分十进制的表示形式
//	//char arr[] = "192.168.31.121";
//	//char* p = ".";
//
//	//zpw\0bitdu.tech
//	char buf[1024] = { 0 };
//	strcpy(buf, arr);
//	//切割buf中的字符串
//
//	char* ret = NULL;
//
//	for (ret = strtok(arr, p); ret != NULL; ret = strtok(NULL, p))
//	{
//		printf("%s ", ret);
//	}
//
//
//
//	return 0;
//}


//int main(void)
//{
//	//错误码  错误信息
//	//0 -     No error
//	//1 -     Operation not permitted
//	//2 -     No such file or directory
//	//...
//	//errno 是一个全局的错误码的变量
//	//当C语言的库函数在执行过程中，发生了错误，就会把对应的错误码，赋值到errno中
//	//
//
//	//char* str = strerror(errno);
//	//printf("%s\n", str);
//
//
//	//打开文件
//	FILE* pf = fopen("text1.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		printf("open file success\n");
//	}
//	return 0;
//}


//int main(void)
//{
//	//char ch = 'w';
//	////int a = islower(ch);
//	//int a = isdigit(ch);
//	//printf("%d\n", a);
//
//	//char ch = tolower('W');
//	//char ch = toupper('a');
//
//	//printf("%c", ch);
//
//	char arr[] = "I Am A Student";
//	int i = 0;
//	while (arr[i])
//	{
//		if (isupper(arr[i]))
//		{
//			arr[i] = tolower(arr[i]);
//		}
//		i++;
//	}
//	printf("%s\n", arr);
//
//	return 0;
//}


void* my_memcpy(void* dest, const void* src, int size)
{
	assert(dest != NULL);
	assert(src != NULL);
	void* ret = dest;
	while (size--)
	{
		*(char*)dest = *(char*)src;
		++(char*)dest;
		++(char*)src;
	}
	return ret;
}


//C语言标准：
//memcpy 只要处理 不重叠的内存拷贝就可以 - 60 - 100
//memmove 处理重叠内存的拷贝 - 100
//


//int main(void)
//{
//	char a[] = "abcdef";
//	char* p1 = a;
//	char* p2 = p1 + 1;
//	if (p1 > p2)
//	{
//		printf("6666\n");
//	}
//	else
//	{
//		printf("123456789\n");
//	}
//	return 0;
//}

void* my_memmove(void* dest, const void* src, size_t num)
{
	assert(dest != NULL);
	assert(src != NULL);
	void* ret = dest;
	if (dest < src)
	{
		while (num--)
		{
			*(char*)dest = *(char*)src;
			++(char*)dest;
			++(char*)src;
		}
	}
	else
	{
		while (num--)
		{
			*((char*)dest + num) = *((char*)src + num);

		}
		(char*)dest = (char*)src;
	}
	return ret;
}

//int main(void)
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	//my_memcpy(arr+2, arr, 20);
//
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//
//	my_memmove(arr, arr + 2, 20);//处理内存重置的情况的
//
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


struct S
{
	char name[20];
	int age;
};



//int main(void)
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int brr1[5] = { 0 };
//
//	struct S arr2[2] = { {"张三", 20},{"李四", 30} };
//	struct S brr2[2] = { 0 };
//
//	my_memcpy(brr1, arr1, sizeof(arr1));
//	my_memcpy(brr2, arr2, sizeof(arr2));
//	//strcpy(brr, arr);
//	return 0;
//}
//
//
//
//
//


//  memcmp

//int main(void)
//{
//	//01 00 00 00 02 00 00 00 03 00 ...
//	//01 00 00 00 02 00 00 00 05 00 ...
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 1,2,5,4,3 };
//	int ret = memcmp(arr1, arr2, 9);
//	printf("%d\n", ret);
//	return 0;
//}


// memset - 内存设置

int main(void)
{
	/*char arr[10] = "";
	memset(arr, '#', 10);*/
	int arr[10] = { 0 };
	//40个字节
	//01 01 01 01 01 01 01 01 01 01 00 00 ...

	memset(arr, 1, 10);
	return 0;
}
