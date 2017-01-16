
#include "../bin/main.h"

int C(void) {

	system("clear");

	printf(

				"+======+==================================+\n"
				"| 序号 |         C 语 言 章 节            |\n"
				"|======+==================================|\n"
				"|  00  |  目录                            |\n"
				"|  01  |  C语言概述                       |\n"
				"|  02  |  程序的灵魂—算法                 |\n"
				"|  03  |  数据类型、运算符与表达式        |\n"
				"|  04  |  最简单的C程序设计—顺序程序设计  |\n"
				"|  05  |  分支结构程序                    |\n"
				"|  06  |  循环控制                        |\n"
				"|  07  |  数组                            |\n"
				"|  08  |  函数                            |\n"
				"|  09  |  预处理命令                      |\n"
				"|  10  |  指针                            |\n"
				"|  11  |  结构体与共用体                  |\n"
				"|  12  |  位运算                          |\n"
				"|  13  |  文件                            |\n"
				"|-----------------------------------------|\n"
				"|        * 输入 \"q\"　返回上级菜单         |\n"
				"+-----------------------------------------+\n"
		  ); 

	scanf("%s", Key);

	if(strcmp(Key, "00") == 0 || strcmp(Key, "0") == 0) {

		system("more -d course/C/00.*");	
		Exit_Section(); C();
	}

	else if(strcmp(Key, "01") == 0 || strcmp(Key, "1") == 0) {

		system("more -d course/C/01.*");	
		Exit_Section(); C();
	}

	else if(strcmp(Key, "02") == 0 || strcmp(Key, "2") == 0) {

		system("more -d course/C/02.*");	
		Exit_Section(); C();
	}

	else if(strcmp(Key, "03") == 0 || strcmp(Key, "3") == 0) {

		system("more -d course/C/03.*");	
		Exit_Section(); C();
	}

	else if(strcmp(Key, "04") == 0 || strcmp(Key, "4") == 0) {

		system("more -d course/C/04.*");	
		Exit_Section(); C();
	}

	else if(strcmp(Key, "05") == 0 || strcmp(Key, "5") == 0) {

		system("more -d course/C/05.*");	
		Exit_Section(); C();
	}

	else if(strcmp(Key, "06") == 0 || strcmp(Key, "6") == 0) {

		system("more -d course/C/06.*");	
		Exit_Section(); C();
	}

	else if(strcmp(Key, "07") == 0 || strcmp(Key, "7") == 0) {

		system("more -d course/C/07.*");	
		Exit_Section(); C();
	}

	else if(strcmp(Key, "08") == 0 || strcmp(Key, "8") == 0) {

		system("more -d course/C/08.*");	
		Exit_Section(); C();
	}

	else if(strcmp(Key, "09") == 0 || strcmp(Key, "9") == 0) {

		system("more -d course/C/09.*");	
		Exit_Section(); C();
	}

	else if(strcmp(Key, "10") == 0) {

		system("more -d course/C/10.*");	
		Exit_Section(); C();
	}

	else if(strcmp(Key, "11") == 0) {

		system("more -d course/C/11.*");	
		Exit_Section(); C();
	}

	else if(strcmp(Key, "12") == 0) {

		system("more -d course/C/12.*");	
		Exit_Section(); C();
	}

	else if(strcmp(Key, "13") == 0) {

		system("more -d course/C/13.*");	
		Exit_Section(); C();
	}

	else if(strcmp(Key, "Q") == 0 || strcmp(Key, "q") == 0)

	  Start();

	else {

		system("clear");
		printf("\n * 您输入有误，请重新输入!\n");
		sleep(2);
		Exit_Section(); C();
	}

	return EXIT_SUCCESS;
}
