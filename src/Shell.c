
#include "../bin/main.h"

int Shell(void)
{
	system("clear");

	printf(

				"+======+=========================+\n"
				"| 序号 |      Shell  章 节       |\n"
				"|======+=========================|\n"
				"|  01  |  Shell 简介             |\n"
				"|  02  |  几种常见的Shell        |\n"
				"|  03  |  脚本、编译型语言的差异 |\n"
				"|  04  |  什么时候使用Shell      |\n"
				"|  05  |  第一个Shell脚本        |\n"
				"|  06  |  Shell 变量             |\n"
				"|  07  |  Shell 特殊变量         |\n"
				"|  08  |  Shell 替换             |\n"
				"|  09  |  Shell 运算符           |\n"
				"|  10  |  Shell 注释             |\n"
				"|  11  |  Shell 字符串           |\n"
				"|  12  |  Shell 数组             |\n"
				"|  13  |  Shell echo命令         |\n"
				"|  14  |  shell printf命令       |\n"
				"|  15  |  Shell if else语句      |\n"
				"|  16  |  Shell case esac语句    |\n"
				"|  17  |  Shell for循环          |\n"
				"|  18  |  Shell while循环        |\n"
				"|  19  |  break 和 continue命令  |\n"
				"|  20  |  Shell 函数             |\n"
				"|  21  |  Shell 函数参数         |\n"
				"|  22  |  Shell 输入输出重定向   |\n"
				"|  23  |  Shell 文件包含         |\n"
				"|--------------------------------|\n"
				"|    * 输入 \"q\" 返回上级菜单     |\n"
				"+--------------------------------+\n"
		  ); 

	scanf("%s", Key);

	if(strcmp(Key, "01") == 0 || strcmp(Key, "1") == 0) {

		system("more -d course/Shell/01.*");	
		Exit_Section(); Shell();
	}

	else if(strcmp(Key, "01") == 0 || strcmp(Key, "1") == 0) {

		system("more -d course/Shell/01.*");	
		Exit_Section(); Shell();
	}

	else if(strcmp(Key, "02") == 0 || strcmp(Key, "2") == 0) {

		system("more -d course/Shell/02.*");	
		Exit_Section(); Shell();
	}

	else if(strcmp(Key, "03") == 0 || strcmp(Key, "3") == 0) {

		system("more -d course/Shell/03.*");	
		Exit_Section(); Shell();
	}

	else if(strcmp(Key, "04") == 0 || strcmp(Key, "4") == 0) {

		system("more -d course/Shell/04.*");	
		Exit_Section(); Shell();
	}

	else if(strcmp(Key, "05") == 0 || strcmp(Key, "5") == 0) {

		system("more -d course/Shell/05.*");	
		Exit_Section(); Shell();
	}

	else if(strcmp(Key, "06") == 0 || strcmp(Key, "6") == 0) {

		system("more -d course/Shell/06.*");	
		Exit_Section(); Shell();
	}

	else if(strcmp(Key, "07") == 0 || strcmp(Key, "7") == 0) {

		system("more -d course/Shell/07.*");	
		Exit_Section(); Shell();
	}

	else if(strcmp(Key, "08") == 0 || strcmp(Key, "8") == 0) {

		system("more -d course/Shell/08.*");	
		Exit_Section(); Shell();
	}

	else if(strcmp(Key, "09") == 0 || strcmp(Key, "9") == 0) {

		system("more -d course/Shell/09.*");	
		Exit_Section(); Shell();
	}
	else if(strcmp(Key, "10") == 0) {

		system("more -d course/Shell/10.*");	
		Exit_Section(); Shell();
	}

	else if(strcmp(Key, "11") == 0) {

		system("more -d course/Shell/11.*");	
		Exit_Section(); Shell();
	}

	else if(strcmp(Key, "12") == 0) {

		system("more -d course/Shell/13.*");	
		Exit_Section(); Shell();
	}

	else if(strcmp(Key, "13") == 0) {

		system("more -d course/Shell/13.*");	
		Exit_Section(); Shell();
	}

	else if(strcmp(Key, "14") == 0) {

		system("more -d course/Shell/14.*");	
		Exit_Section(); Shell();
	}

	else if(strcmp(Key, "15") == 0) {

		system("more -d course/Shell/15.*");	
		Exit_Section(); Shell();
	}

	else if(strcmp(Key, "16") == 0) {

		system("more -d course/Shell/16.*");	
		Exit_Section(); Shell();
	}

	else if(strcmp(Key, "17") == 0) {

		system("more -d course/Shell/17.*");	
		Exit_Section(); Shell();
	}

	else if(strcmp(Key, "18") == 0) {

		system("more -d course/Shell/18.*");	
		Exit_Section(); Shell();
	}

	else if(strcmp(Key, "19") == 0) {

		system("more -d course/Shell/19.*");	
		Exit_Section(); Shell();
	}

	else if(strcmp(Key, "20") == 0) {

		system("more -d course/Shell/20.*");	
		Exit_Section(); Shell();
	}

	else if(strcmp(Key, "21") == 0) {

		system("more -d course/Shell/21.*");	
		Exit_Section(); Shell();
	}

	else if(strcmp(Key, "22") == 0) {

		system("more -d course/Shell/22.*");	
		Exit_Section(); Shell();
	}

	else if(strcmp(Key, "23") == 0) {

		system("more -d course/Shell/23.*");	
		Exit_Section(); Shell();
	}

	else if(strcmp(Key, "Q") == 0 || strcmp(Key, "q") == 0)

	  Start();

	else {

		system("clear");
		printf("\n * 您输入有误，请重新输入!\n");
		sleep(2);
		Exit_Section(); Shell();
	}

	return EXIT_SUCCESS;
}


