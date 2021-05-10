#define _CRT_SECURE_NO_WARNINGS 1
//static 可以改变全局变量的作用域，让静态全局变量只能在自己所在的源文件内使用
//static int g_val = 2021;
//static 修饰函数的时候，改变函数的链接属性：外部链接函数变为内部链接函数
//static int Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}

int add(int x, int y)
{
	int z = 0;
	z = x+y;
	return z;
}