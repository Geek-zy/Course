
#include "../bin/main.h"

int Perl(void)
{
	system("clear");

	printf(

				"+======+=====================+\n"
				"| 序号 |      Perl 章 节     |\n"
				"|======+=====================|\n"
				"|  01  |  概述               |\n"
				"|  02  |  简单变量           |\n"
				"|  03  |  操作符             |\n"
				"|  04  |  列表和数组变量     |\n"
				"|  05  |  文件读写           |\n"
				"|  06  |  模式匹配           |\n"
				"|  07  |  控制结构           |\n"
				"|  08  |  子程序             |\n"
				"|  09  |  关联数组-哈希表    |\n"
				"|  10  |  格式化输出         |\n"
				"|  11  |  文件系统           |\n"
				"|  12  |  Perl5 中的引用-指针|\n"
				"|  13  |  Perl的面向对象编程 |\n"
				"|  14  |  Perl5 的包和模块   |\n"
				"|  15  |  附录-函数集        |\n"
				"|  16  |  Perl 基本语法      |\n"
				"|----------------------------|\n"
				"|  * 输入 \"q\" 返回上级菜单   |\n"
				"+----------------------------+\n"
		  ); 

	scanf("%s", Key);

	if(strcmp(Key, "01") == 0 || strcmp(Key, "1") == 0) {

		system("more -d course/Perl/01.*");	
		Exit_Section(); Perl();
	}

	else if(strcmp(Key, "02") == 0 || strcmp(Key, "2") == 0) {

		system("more -d course/Perl/02.*");	
		Exit_Section(); Perl();
	}

	else if(strcmp(Key, "03") == 0 || strcmp(Key, "3") == 0) {

		system("more -d course/Perl/03.*");	
		Exit_Section(); Perl();
	}

	else if(strcmp(Key, "04") == 0 || strcmp(Key, "4") == 0) {

		system("more -d course/Perl/04.*");	
		Exit_Section(); Perl();
	}

	else if(strcmp(Key, "05") == 0 || strcmp(Key, "5") == 0) {

		system("more -d course/Perl/05.*");	
		Exit_Section(); Perl();
	}

	else if(strcmp(Key, "06") == 0 || strcmp(Key, "6") == 0) {

		system("more -d course/Perl/06.*");	
		Exit_Section(); Perl();
	}

	else if(strcmp(Key, "07") == 0 || strcmp(Key, "7") == 0) {

		system("more -d course/Perl/07.*");	
		Exit_Section(); Perl();
	}

	else if(strcmp(Key, "08") == 0 || strcmp(Key, "8") == 0) {

		system("more -d course/Perl/08.*");	
		Exit_Section(); Perl();
	}

	else if(strcmp(Key, "09") == 0 || strcmp(Key, "9") == 0) {

		system("more -d course/Perl/09.*");	
		Exit_Section(); Perl();
	}
	else if(strcmp(Key, "10") == 0) {

		system("more -d course/Perl/10.*");	
		Exit_Section(); Perl();
	}

	else if(strcmp(Key, "11") == 0) {

		system("more -d course/Perl/11.*");	
		Exit_Section(); Perl();
	}

	else if(strcmp(Key, "12") == 0) {

		system("more -d course/Perl/13.*");	
		Exit_Section(); Perl();
	}

	else if(strcmp(Key, "13") == 0) {

		system("more -d course/Perl/13.*");	
		Exit_Section(); Perl();
	}

	else if(strcmp(Key, "14") == 0) {

		system("more -d course/Perl/14.*");	
		Exit_Section(); Perl();
	}

	else if(strcmp(Key, "15") == 0) {

		system("more -d course/Perl/15.*");	
		Exit_Section(); Perl();
	}

	else if(strcmp(Key, "16") == 0) {

		system("more -d course/Perl/16.*");	
		Exit_Section(); Perl();
	}

	else if(strcmp(Key, "Q") == 0 || strcmp(Key, "q") == 0)

	  Start();

	else {

		system("clear");
		printf("\n * 您输入有误，请重新输入!\n");
		sleep(2);
		Exit_Section(); Perl();
	}

	return EXIT_SUCCESS;
}

