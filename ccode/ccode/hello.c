#define _CRT_SECURE_NO_WARNINGS 1

#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//第一个程序
//int main()
//{
//	float f = 0.5;
//	double d = 3.14;
//	printf("%f\n", f);
//	printf("%lf\n", d);
//	return 0;
//}


//数据类型
//char        //字符数据类型
//short       //短整型
//int         //整形
//long        //长整型
//long long   //更长的整形
//float       //单精度浮点数
//double      //双精度浮点数
////C语言有没有字符串类型
//int main()
//{
//	printf("%d\n", sizeof(char));  //1B
//	printf("%d\n", sizeof(short));	//2B
//	printf("%d\n", sizeof(int));	//4B
//	printf("%d\n", sizeof(long));	//4B  sizeof(long)>=sizeof(int)
//	printf("%d\n", sizeof(long long));	//8B
//	printf("%d\n", sizeof(float));	//4B
//	printf("%d\n", sizeof(double));	//8B
//	return 0;
//}

//变量

//int a = 100;
//int main()
//{	//将所有变量定义在代码块前边
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	scanf("%d %d", &num1, &num2);  //输入函数
//	sum = num1 + num2;
//	printf("sum = %d\n", sum);
//	//int a = 10;  //建议局部变量和全局变量名称不要一样，如果名称相同，局部变量优先。
//	//printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//	//生命extern外部符号
//	extern int g_var;
//	printf("g_var = %d\n", g_var);
//	return 0;
//}

//常量
//const 常属性，修饰常量
//int main()
//{
//	const int num = 4;
//	//num = 8
//	printf("%d\n", num);
//	return 0;
//}

//#define MAX 10  //标识符常量
//int main()
//{
//	int arr[MAX] = {0};
//	printf("%d\n", MAX);
//	return 0;
//}

//枚举常量,一一列举
//enum sex {male,female,secret};
//int main()
//{
//	enum sex s = female;
//	int arr[secret] = {0};
//	//printf("%d\n", arr);
//	//male = 4;
//	printf("%d\n", male);
//	printf("%d\n", female);
//	printf("%d\n", secret);
//	printf("%d\n", s);
//	return 0;
//}
//字符串

//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = {'a','b','c'};
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));
//	return 0;
//}

//转义符
//\ddd 8进制
//xdd 16进制
//int main()
//{
//	printf("%d\n", strlen("c:\test\32\test.c"));
//	return 0;
//}


//if 选择
//int main()
//{
//	int input = 0;
//	printf("%s", "你要好好学习吗？(1/0) >: ");
//	scanf("%d", &input);
//	if (input == 1)
//		printf("好offer!\n");
//	else
//		printf("卖红薯！\n");
//	return 0;
//}

//while循环
//int main()
//{
//	int line = 0;
//	while(line<20000)
//	{
//		printf("写一行代码... %d\n", line);
//		line++;
//	}
//	printf("好offer\n");
//	return 0;
//}


//函数

//int Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}
//
//int main()
//{	
//	int sum = 0;
//	int num1 = 0;
//	int num2 = 0;
//	scanf("%d %d", &num1,&num2);
//	sum = Add(num1,num2);
//	printf("%d\n", sum);
//	return 0;
//}

//函数
//int Add(int x, int y)
//{
//    int z = x + y;
//    return z;
//}
//
//int main()
//{
//    int num1 = 0;
//    int num2 = 0;
//    int sum = 0;
//    scanf("%d %d", &num1, &num2);
//    sum = Add(num1,num2);
//    printf("和为：%d\n", sum);
//}

//int main()
//{
//    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//    char ch[20];
//    float arr2[5];
//    int i = 0;
//    while(i < 10)
//    {
//        printf("%d\n",arr[i]);
//        i++;
//    }
//}
//按位移
//int main()
//{
//    int a = 1;
//    int b = a<<2;
//    printf("%d\n", b);
//    return 0;
//}
//位运算
//int main()
//{
//    int a = 3;
//    //3: 011;
//    int b = 5;
//    //b: 101;
//    int c = a&b;
//    //c: 001
//    int d = a|b;
//    //d:111
//    //异或：相同为0，不同为1；
//    //e: 二进制：110，十进制：6
//    int e =a^b;
//    printf("%d\n", e);
//}


//赋值：= += -= *= /= &= |= ^= <<= >>=


//交换变量值

//int main()
//{
//    int a = 1;
//    int b = 2;
//    int c = 0 ;
//    c = a;
//    a = b;
//    b = c;
//    //b,a = a,b;
//    printf("a = %d\n", a);
//    printf("b = %d\n", b);
//    return  0;
//}
// 110
// 101

//寻找单身狗
//int main()
//{
//    int i = 0;
//    int ret = 0;
//    int arr[] = {1,2,3,4,5,1,2,3,4,5,6};
//    int sz = sizeof(arr) / sizeof(arr[0]);
//    for (i = 0; i< sz; i++)
//    {
        //int j = 0;
        //int count = 0;
        //for (j = 0; j < sz; j++)
        //{
        //    if (arr[i] == arr[j])
        //    {
        //        count++;
        //    }
        //}
        //if (count == 1)
        //{
        //    printf("单身狗是：%d\n", arr[i]);
        //    break;
        //}
//        ret = ret^arr[i];
//    }
//    printf("单身狗是：%d\n", ret);
//    return 0;
//} 

//常见关键字： 
//auto:局部变量都是自动变量，默认定义局部变量时省略。
//extern:引入外部符号，外部变量
//register：寄存器关键字

//static关键字
//void test()
//{
//static 修饰局部变量，局部变量生命周期变长，出了作用域不再销毁。
//static 可以改变全局变量的作用域，让静态全局变量只能在自己所在的源文件内使用
//static 修饰函数的时候，改变函数的链接属性：外部链接函数变为内部链接函数
//	static int a = 1;
//	a++;
//	printf("%d\n", a);
//}
//
//int main()
//{
//	int i= 0;
//	while (i<5)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}

//int main()
//{
//	//引用add.c
//	extern int g_val;
//	printf("%d\n", g_val);
//	return 0;
//}

//extern int Add(int, int);
//int main()
//{
//	int sum = Add(3,5);
//	printf("%d\n", sum);
//	return 0;
//}

//#define 定义标识符常量
//#define MAX 100
//#define 可以定义宏-带参数

//#define MAX(x,y) (x>y?x:y)
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = MAX(a,b);
//	printf("%d\n", max);
//	return 0;
//}

//指针
//int main()
//{
//	int a = 10;
//	int* p = &a; //int* 指针变量; &a: 取地址操作符
//	printf("%p\n", &a);
//	printf("%p\n", p);
//	*p = 20; //解引用操作符 *
//	printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//	char ch = 'w';
//	char* pc = &ch;
//	*pc = 't';
//	printf("%c\n", ch);
//	printf("%d\n",sizeof(pc));
//	return 0;
//}