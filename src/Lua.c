
#include "../bin/main.h"

int Lua(void)
{
	system("clear");

	printf(

				"+======+===================+\n"
				"| 序号 |    Lua  章 节     |\n"
				"|======+===================|\n"
				"|  01  |  Lua 教程         |\n"
				"|  02  |  Lua 基本语法     |\n"
				"|  03  |  Lua 数据类型     |\n"
				"|  04  |  Lua 变量         |\n"
				"|  05  |  Lua 循环         |\n"
				"|  06  |  Lua 流程控制     |\n"
				"|  07  |  Lua 函数         |\n"
				"|  08  |  Lua 运算符       |\n"
				"|  09  |  Lua 字符串       |\n"
				"|  10  |  Lua 高级教程     |\n"
				"|  11  |  Lua 数组         |\n"
				"|  12  |  Lua 迭代器       |\n"
				"|  13  |  Lua table(表)    |\n"
				"|  14  |  Lua 模块与包     |\n"
				"|  15  |  Lua 元表         |\n"
				"|  16  |  Lua 协同程序     |\n"
				"|  17  |  Lua 文件 I_O     |\n"
				"|  18  |  Lua 错误处理     |\n"
				"|  19  |  Lua 调试(Debug)  |\n"
				"|  20  |  Lua 垃圾回收     |\n"
				"|  21  |  Lua 面向对象     |\n"
				"|  22  |  Lua 数据库访问   |\n"
				"|--------------------------|\n"
				"| * 输入 \"q\" 返回上级菜单  |\n"
				"+--------------------------+\n"
		  ); 

	scanf("%s", Key);

	if(strcmp(Key, "01") == 0 || strcmp(Key, "1") == 0) {

		system("more -d course/Lua/01.*");	
		Exit_Section(); Lua();
	}

	else if(strcmp(Key, "02") == 0 || strcmp(Key, "2") == 0) {

		system("more -d course/Lua/02.*");	
		Exit_Section(); Lua();
	}

	else if(strcmp(Key, "03") == 0 || strcmp(Key, "3") == 0) {

		system("more -d course/Lua/03.*");	
		Exit_Section(); Lua();
	}

	else if(strcmp(Key, "04") == 0 || strcmp(Key, "4") == 0) {

		system("more -d course/Lua/04.*");	
		Exit_Section(); Lua();
	}

	else if(strcmp(Key, "05") == 0 || strcmp(Key, "5") == 0) {

		system("more -d course/Lua/05.*");	
		Exit_Section(); Lua();
	}

	else if(strcmp(Key, "06") == 0 || strcmp(Key, "6") == 0) {

		system("more -d course/Lua/06.*");	
		Exit_Section(); Lua();
	}

	else if(strcmp(Key, "07") == 0 || strcmp(Key, "7") == 0) {

		system("more -d course/Lua/07.*");	
		Exit_Section(); Lua();
	}

	else if(strcmp(Key, "08") == 0 || strcmp(Key, "8") == 0) {

		system("more -d course/Lua/08.*");	
		Exit_Section(); Lua();
	}

	else if(strcmp(Key, "09") == 0 || strcmp(Key, "9") == 0) {

		system("more -d course/Lua/09.*");	
		Exit_Section(); Lua();
	}
	else if(strcmp(Key, "10") == 0) {

		system("more -d course/Lua/10.*");	
		Exit_Section(); Lua();
	}

	else if(strcmp(Key, "11") == 0) {

		system("more -d course/Lua/11.*");	
		Exit_Section(); Lua();
	}

	else if(strcmp(Key, "12") == 0) {

		system("more -d course/Lua/13.*");	
		Exit_Section(); Lua();
	}

	else if(strcmp(Key, "13") == 0) {

		system("more -d course/Lua/13.*");	
		Exit_Section(); Lua();
	}

	else if(strcmp(Key, "14") == 0) {

		system("more -d course/Lua/14.*");	
		Exit_Section(); Lua();
	}

	else if(strcmp(Key, "15") == 0) {

		system("more -d course/Lua/15.*");	
		Exit_Section(); Lua();
	}

	else if(strcmp(Key, "16") == 0) {

		system("more -d course/Lua/16.*");	
		Exit_Section(); Lua();
	}

	else if(strcmp(Key, "17") == 0) {

		system("more -d course/Lua/17.*");	
		Exit_Section(); Lua();
	}

	else if(strcmp(Key, "18") == 0) {

		system("more -d course/Lua/18.*");	
		Exit_Section(); Lua();
	}

	else if(strcmp(Key, "19") == 0) {

		system("more -d course/Lua/19.*");	
		Exit_Section(); Lua();
	}

	else if(strcmp(Key, "20") == 0) {

		system("more -d course/Lua/20.*");	
		Exit_Section(); Lua();
	}

	else if(strcmp(Key, "21") == 0) {

		system("more -d course/Lua/21.*");	
		Exit_Section(); Lua();
	}

	else if(strcmp(Key, "22") == 0) {

		system("more -d course/Lua/22.*");	
		Exit_Section(); Lua();
	}

	else if(strcmp(Key, "Q") == 0 || strcmp(Key, "q") == 0)

	  Start();

	else {

		system("clear");
		printf("\n * 您输入有误，请重新输入!\n");
		sleep(2);
		Exit_Section(); Lua();
	}

	return EXIT_SUCCESS;
}

