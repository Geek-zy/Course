
#include "../bin/main.h"

int PHP(void)
{
	system("clear");

	printf(
				"+======+===========================+\n"
				"| 序号 |        PHP  章 节         |\n"
				"|======+===========================|\n"
				"|  00  |  入门教程                 |\n"
				"|  01  |  简明教程                 |\n"
				"|  02  |  语言参考                 |\n"
				"|  03  |  数据类型                 |\n"
				"|  04  |  变量                     |\n"
				"|  05  |  常量                     |\n"
				"|  06  |  表达式 循环控制          |\n"
				"|  07  |  运算符 数组              |\n"
				"|  08  |  流程控制 函数            |\n"
				"|  09  |  函数 预处理命令          |\n"
				"|  10  |  类与对象 指针            |\n"
				"|  11  |  命名空间 结构体与共用体  |\n"
				"|  12  |  异常处理 位运算          |\n"
				"|  13  |  生成器                   |\n"
				"|  14  |  引用的解释               |\n"
				"|  15  |  预定义变量               |\n"
				"|  16  |  预定义异常               |\n"
				"|  17  |  预定义接口               |\n"
				"|  18  |  上下文选项和参数         |\n"
				"|----------------------------------|\n"
				"|     * 输入 \"q\"　返回上级菜单     |\n"
				"+----------------------------------+\n"
		  ); 

	scanf("%s", Key);

	if(strcmp(Key, "00") == 0 || strcmp(Key, "0") == 0) {

		system("more -d course/PHP/00.*");	
		Exit_Section(); PHP();
	}

	else if(strcmp(Key, "01") == 0 || strcmp(Key, "1") == 0) {

		system("more -d course/PHP/01.*");	
		Exit_Section(); PHP();
	}

	else if(strcmp(Key, "02") == 0 || strcmp(Key, "2") == 0) {

		system("more -d course/PHP/02.*");	
		Exit_Section(); PHP();
	}

	else if(strcmp(Key, "03") == 0 || strcmp(Key, "3") == 0) {

		system("more -d course/PHP/03.*");	
		Exit_Section(); PHP();
	}

	else if(strcmp(Key, "04") == 0 || strcmp(Key, "4") == 0) {

		system("more -d course/PHP/04.*");	
		Exit_Section(); PHP();
	}

	else if(strcmp(Key, "05") == 0 || strcmp(Key, "5") == 0) {

		system("more -d course/PHP/05.*");	
		Exit_Section(); PHP();
	}

	else if(strcmp(Key, "06") == 0 || strcmp(Key, "6") == 0) {

		system("more -d course/PHP/06.*");	
		Exit_Section(); PHP();
	}

	else if(strcmp(Key, "07") == 0 || strcmp(Key, "7") == 0) {

		system("more -d course/PHP/07.*");	
		Exit_Section(); PHP();
	}

	else if(strcmp(Key, "08") == 0 || strcmp(Key, "8") == 0) {

		system("more -d course/PHP/08.*");	
		Exit_Section(); PHP();
	}

	else if(strcmp(Key, "09") == 0 || strcmp(Key, "9") == 0) {

		system("more -d course/PHP/09.*");	
		Exit_Section(); PHP();
	}
	else if(strcmp(Key, "10") == 0) {

		system("more -d course/PHP/10.*");	
		Exit_Section(); PHP();
	}

	else if(strcmp(Key, "11") == 0) {

		system("more -d course/PHP/11.*");	
		Exit_Section(); PHP();
	}

	else if(strcmp(Key, "12") == 0) {

		system("more -d course/PHP/13.*");	
		Exit_Section(); PHP();
	}

	else if(strcmp(Key, "13") == 0) {

		system("more -d course/PHP/13.*");	
		Exit_Section(); PHP();
	}

	else if(strcmp(Key, "14") == 0) {

		system("more -d course/PHP/14.*");	
		Exit_Section(); PHP();
	}

	else if(strcmp(Key, "15") == 0) {

		system("more -d course/PHP/15.*");	
		Exit_Section(); PHP();
	}

	else if(strcmp(Key, "16") == 0) {

		system("more -d course/PHP/16.*");	
		Exit_Section(); PHP();
	}

	else if(strcmp(Key, "17") == 0) {

		system("more -d course/PHP/17.*");	
		Exit_Section(); PHP();
	}

	else if(strcmp(Key, "18") == 0) {

		system("more -d course/PHP/18.*");	
		Exit_Section(); PHP();
	}

	else if(strcmp(Key, "Q") == 0 || strcmp(Key, "q") == 0)
	  
	  Start();

	else {

		system("clear");
		printf("\n * 您输入有误，请重新输入!\n");
		sleep(2);
		Exit_Section(); PHP();
	}

	return EXIT_SUCCESS;
}
