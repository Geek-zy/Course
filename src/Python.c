
#include "../bin/main.h"

int Python(void)
{
	system("clear");

	printf(
				"+======+===========================+\n"
				"| 序号 |       Python  章 节       |\n"
				"|======+===========================|\n"
				"|  01  |  开胃菜                   |\n"
				"|  02  |  使用Python解释器         |\n"
				"|  03  |  Python简介               |\n"
				"|  04  |  深入Python流程控制       |\n"
				"|  05  |  数据结构                 |\n"
				"|  06  |  模块                     |\n"
				"|  07  |  输入和输出               |\n"
				"|  08  |  错误和异常               |\n"
				"|  09  |  类                       |\n"
				"|  11  |  Python标准库概览         |\n"
				"|  11  |  标准库浏览-PartII        |\n"
				"|  12  |  虚拟环境和包             |\n"
				"|  13  |  Python高级教程           |\n"
				"|  14  |  交互式输入行编辑历史回溯 |\n"
				"|  15  |  浮点数算法-争议和限制    |\n"
				"|  16  |  附录                     |\n"
				"|  17  |  文件                     |\n"
				"|----------------------------------|\n"
				"|     * 输入 \"q\"　返回上级菜单     |\n"
				"+----------------------------------+\n"
		  ); 

	scanf("%s", Key);

	if(strcmp(Key, "01") == 0 || strcmp(Key, "1") == 0) {

		system("more -d course/Python/01.*");	
		Exit_Section(); Python();
	}

	else if(strcmp(Key, "02") == 0 || strcmp(Key, "2") == 0) {

		system("more -d course/Python/02.*");	
		Exit_Section(); Python();
	}

	else if(strcmp(Key, "03") == 0 || strcmp(Key, "3") == 0) {

		system("more -d course/Python/03.*");	
		Exit_Section(); Python();
	}

	else if(strcmp(Key, "04") == 0 || strcmp(Key, "4") == 0) {

		system("more -d course/Python/04.*");	
		Exit_Section(); Python();
	}

	else if(strcmp(Key, "05") == 0 || strcmp(Key, "5") == 0) {

		system("more -d course/Python/05.*");	
		Exit_Section(); Python();
	}

	else if(strcmp(Key, "06") == 0 || strcmp(Key, "6") == 0) {

		system("more -d course/Python/06.*");	
		Exit_Section(); Python();
	}

	else if(strcmp(Key, "07") == 0 || strcmp(Key, "7") == 0) {

		system("more -d course/Python/07.*");	
		Exit_Section(); Python();
	}

	else if(strcmp(Key, "08") == 0 || strcmp(Key, "8") == 0) {

		system("more -d course/Python/08.*");	
		Exit_Section(); Python();
	}

	else if(strcmp(Key, "09") == 0 || strcmp(Key, "9") == 0) {

		system("more -d course/Python/09.*");	
		Exit_Section(); Python();
	}
	else if(strcmp(Key, "10") == 0) {

		system("more -d course/Python/10.*");	
		Exit_Section(); Python();
	}

	else if(strcmp(Key, "11") == 0) {

		system("more -d course/Python/11.*");	
		Exit_Section(); Python();
	}

	else if(strcmp(Key, "12") == 0) {

		system("more -d course/Python/13.*");	
		Exit_Section(); Python();
	}

	else if(strcmp(Key, "13") == 0) {

		system("more -d course/Python/13.*");	
		Exit_Section(); Python();
	}

	else if(strcmp(Key, "14") == 0) {

		system("more -d course/Python/14.*");	
		Exit_Section(); Python();
	}

	else if(strcmp(Key, "15") == 0) {

		system("more -d course/Python/15.*");	
		Exit_Section(); Python();
	}

	else if(strcmp(Key, "16") == 0) {

		system("more -d course/Python/16.*");	
		Exit_Section(); Python();
	}

	else if(strcmp(Key, "17") == 0) {

		system("more -d course/Python/17.*");	
		Exit_Section(); Python();
	}

	else if(strcmp(Key, "Q") == 0 || strcmp(Key, "q") == 0)

	  Start();

	else {

		system("clear");
		printf("\n * 您输入有误，请重新输入!\n");
		sleep(2);
		Exit_Section(); Python();
	}

	return EXIT_SUCCESS;
}
