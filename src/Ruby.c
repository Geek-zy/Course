
#include "../bin/main.h"

int Ruby(void)
{
	system("clear");

	printf(

				"+======+========================+\n"
				"| 序号 |       Ruby  章 节      |\n"
				"|======+========================|\n"
				"|  01  |  Ruby 语法             |\n"
				"|  02  |  Ruby 数据类型         |\n"
				"|  03  |  Ruby 类和对象         |\n"
				"|  04  |  Ruby 类案例           |\n"
				"|  05  |  Ruby 变量             |\n"
				"|  06  |  Ruby 运算符           |\n"
				"|  07  |  Ruby 注释             |\n"
				"|  08  |  Ruby 判断             |\n"
				"|  09  |  Ruby 循环             |\n"
				"|  10  |  Ruby 方法             |\n"
				"|  11  |  Ruby 块               |\n"
				"|  12  |  Ruby 模块             |\n"
				"|  13  |  Ruby 字符串           |\n"
				"|  14  |  Ruby 数组             |\n"
				"|  15  |  Ruby 哈希             |\n"
				"|  16  |  Ruby 日期 & 时间      |\n"
				"|  17  |  Ruby 范围             |\n"
				"|  18  |  Ruby 迭代器           |\n"
				"|  19  |  Ruby 文件的输入与输出 |\n"
				"|  20  |  Ruby File 类和方法    |\n"
				"|  21  |  Ruby Dir 类和方法     |\n"
				"|  22  |  Ruby 异常             |\n"
				"|  23  |  Ruby语言最小化        |\n"
				"|  24  |  对象                  |\n"
				"|  25  |  名称与名称表          |\n"
				"|  26  |  类与模块              |\n"
				"|  27  |  垃圾回收              |\n"
				"|  28  |  变量和常量            |\n"
				"|  29  |  安全                  |\n"
				"|-------------------------------|\n"
				"|    * 输入 \"q\" 返回上级菜单    |\n"
				"+-------------------------------+\n"
		  ); 

	scanf("%s", Key);

	if(strcmp(Key, "01") == 0 || strcmp(Key, "1") == 0) {

		system("more -d course/Ruby/01.*");	
		Exit_Section(); Ruby();
	}

	else if(strcmp(Key, "02") == 0 || strcmp(Key, "2") == 0) {

		system("more -d course/Ruby/02.*");	
		Exit_Section(); Ruby();
	}

	else if(strcmp(Key, "03") == 0 || strcmp(Key, "3") == 0) {

		system("more -d course/Ruby/03.*");	
		Exit_Section(); Ruby();
	}

	else if(strcmp(Key, "04") == 0 || strcmp(Key, "4") == 0) {

		system("more -d course/Ruby/04.*");	
		Exit_Section(); Ruby();
	}

	else if(strcmp(Key, "05") == 0 || strcmp(Key, "5") == 0) {

		system("more -d course/Ruby/05.*");	
		Exit_Section(); Ruby();
	}

	else if(strcmp(Key, "06") == 0 || strcmp(Key, "6") == 0) {

		system("more -d course/Ruby/06.*");	
		Exit_Section(); Ruby();
	}

	else if(strcmp(Key, "07") == 0 || strcmp(Key, "7") == 0) {

		system("more -d course/Ruby/07.*");	
		Exit_Section(); Ruby();
	}

	else if(strcmp(Key, "08") == 0 || strcmp(Key, "8") == 0) {

		system("more -d course/Ruby/08.*");	
		Exit_Section(); Ruby();
	}

	else if(strcmp(Key, "09") == 0 || strcmp(Key, "9") == 0) {

		system("more -d course/Ruby/09.*");	
		Exit_Section(); Ruby();
	}
	else if(strcmp(Key, "10") == 0) {

		system("more -d course/Ruby/10.*");	
		Exit_Section(); Ruby();
	}

	else if(strcmp(Key, "11") == 0) {

		system("more -d course/Ruby/11.*");	
		Exit_Section(); Ruby();
	}

	else if(strcmp(Key, "12") == 0) {

		system("more -d course/Ruby/13.*");	
		Exit_Section(); Ruby();
	}

	else if(strcmp(Key, "13") == 0) {

		system("more -d course/Ruby/13.*");	
		Exit_Section(); Ruby();
	}

	else if(strcmp(Key, "14") == 0) {

		system("more -d course/Ruby/14.*");	
		Exit_Section(); Ruby();
	}

	else if(strcmp(Key, "15") == 0) {

		system("more -d course/Ruby/15.*");	
		Exit_Section(); Ruby();
	}

	else if(strcmp(Key, "16") == 0) {

		system("more -d course/Ruby/16.*");	
		Exit_Section(); Ruby();
	}

	else if(strcmp(Key, "17") == 0) {

		system("more -d course/Ruby/17.*");	
		Exit_Section(); Ruby();
	}

	else if(strcmp(Key, "18") == 0) {

		system("more -d course/Ruby/18.*");	
		Exit_Section(); Ruby();
	}

	else if(strcmp(Key, "19") == 0) {

		system("more -d course/Ruby/19.*");	
		Exit_Section(); Ruby();
	}

	else if(strcmp(Key, "20") == 0) {

		system("more -d course/Ruby/20.*");	
		Exit_Section(); Ruby();
	}

	else if(strcmp(Key, "21") == 0) {

		system("more -d course/Ruby/21.*");	
		Exit_Section(); Ruby();
	}

	else if(strcmp(Key, "22") == 0) {

		system("more -d course/Ruby/22.*");	
		Exit_Section(); Ruby();
	}

	else if(strcmp(Key, "23") == 0) {

		system("more -d course/Ruby/23.*");	
		Exit_Section(); Ruby();
	}

	else if(strcmp(Key, "24") == 0) {

		system("more -d course/Ruby/24.*");	
		Exit_Section(); Ruby();
	}

	else if(strcmp(Key, "25") == 0) {

		system("more -d course/Ruby/25.*");	
		Exit_Section(); Ruby();
	}

	else if(strcmp(Key, "26") == 0) {

		system("more -d course/Ruby/26.*");	
		Exit_Section(); Ruby();
	}

	else if(strcmp(Key, "27") == 0) {

		system("more -d course/Ruby/27.*");	
		Exit_Section(); Ruby();
	}

	else if(strcmp(Key, "28") == 0) {

		system("more -d course/Ruby/28.*");	
		Exit_Section(); Ruby();
	}

	else if(strcmp(Key, "29") == 0) {

		system("more -d course/Ruby/29.*");	
		Exit_Section(); Ruby();
	}

	else if(strcmp(Key, "Q") == 0 || strcmp(Key, "q") == 0)

	  Start();

	else {

		system("clear");
		printf("\n * 您输入有误，请重新输入!\n");
		sleep(2);
		Exit_Section(); Ruby();
	}

	return EXIT_SUCCESS;
}

