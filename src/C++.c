
#include "../bin/main.h"

int C_Plus_Plus(void)
{
	system("clear");

	printf(

				"+======+===================+\n"
				"| 序号 |   C ++ 章 节      |\n"
				"|======+===================|\n"
				"|  01  |  C++ 基础知识     |\n"
				"|  02  |  控制结构和函数   |\n"
				"|  03  |  高级数据类型     |\n"
				"|  04  |  面向对象编程     |\n"
				"|  05  |  C++ 高级         |\n"
				"|  06  |  C++ 标准函数库   |\n"
				"|--------------------------|\n"
				"| * 输入 \"q\" 返回上级菜单  |\n"
				"+--------------------------+\n"
		  ); 

	scanf("%s", Key);

	if(strcmp(Key, "01") == 0 || strcmp(Key, "1") == 0) {

		system("more -d course/C++/01.*");	
		Exit_Section(); C_Plus_Plus();
	}

	else if(strcmp(Key, "02") == 0 || strcmp(Key, "2") == 0) {

		system("more -d course/C++/02.*");	
		Exit_Section(); C_Plus_Plus();
	}

	else if(strcmp(Key, "03") == 0 || strcmp(Key, "3") == 0) {

		system("more -d course/C++/03.*");	
		Exit_Section(); C_Plus_Plus();
	}

	else if(strcmp(Key, "04") == 0 || strcmp(Key, "4") == 0) {

		system("more -d course/C++/04.*");	
		Exit_Section(); C_Plus_Plus();
	}

	else if(strcmp(Key, "05") == 0 || strcmp(Key, "5") == 0) {

		system("more -d course/C++/05.*");	
		Exit_Section(); C_Plus_Plus();
	}

	else if(strcmp(Key, "06") == 0 || strcmp(Key, "6") == 0) {

		system("more -d course/C++/06.*");	
		Exit_Section(); C_Plus_Plus();
	}

	else if(strcmp(Key, "Q") == 0 || strcmp(Key, "q") == 0)

	  Start();

	else {

		system("clear");
		printf("\n * 您输入有误，请重新输入!\n");
		sleep(2);
		Exit_Section(); C_Plus_Plus();
	}

	return EXIT_SUCCESS;
}
