
#include "../bin/main.h"

int Swift(void)
{
	system("clear");

	printf(

				"+======+===================+\n"
				"| 序号 |    Swift 章 节    |\n"
				"|======+===================|\n"
				"|  01  |  关于 Swift       |\n"
				"|  02  |  Swift 初见       |\n"
				"|  03  |  基础部分         |\n"
				"|  04  |  基本运算符       |\n"
				"|  05  |  字符串和字符     |\n"
				"|  06  |  集合类型         |\n"
				"|  07  |  控制流           |\n"
				"|  08  |  函数             |\n"
				"|  09  |  闭包             |\n"
				"|  10  |  枚举             |\n"
				"|  11  |  类和结构体       |\n"
				"|  12  |  属性             |\n"
				"|  13  |  方法             |\n"
				"|  14  |  附属脚本         |\n"
				"|  15  |  继承             |\n"
				"|  16  |  构造过程         |\n"
				"|  17  |  析构过程         |\n"
				"|  18  |  自动引用计数     |\n"
				"|  19  |  可选链式调用     |\n"
				"|  20  |  错误处理         |\n"
				"|  21  |  类型转换         |\n"
				"|  22  |  嵌套类型         |\n"
				"|  23  |  扩展             |\n"
				"|  24  |  协议             |\n"
				"|  25  |  泛型             |\n"
				"|  26  |  访问控制         |\n"
				"|  27  |  高级运算符       |\n"
				"|--------------------------|\n"
				"| * 输入 \"q\" 返回上级菜单  |\n"
				"+--------------------------+\n"
		  ); 

	scanf("%s", Key);

	if(strcmp(Key, "01") == 0 || strcmp(Key, "1") == 0) {

		system("more -d course/Swift/01.*");	
		Exit_Section(); Swift();
	}

	else if(strcmp(Key, "02") == 0 || strcmp(Key, "2") == 0) {

		system("more -d course/Swift/02.*");	
		Exit_Section(); Swift();
	}

	else if(strcmp(Key, "03") == 0 || strcmp(Key, "3") == 0) {

		system("more -d course/Swift/03.*");	
		Exit_Section(); Swift();
	}

	else if(strcmp(Key, "04") == 0 || strcmp(Key, "4") == 0) {

		system("more -d course/Swift/04.*");	
		Exit_Section(); Swift();
	}

	else if(strcmp(Key, "05") == 0 || strcmp(Key, "5") == 0) {

		system("more -d course/Swift/05.*");	
		Exit_Section(); Swift();
	}

	else if(strcmp(Key, "06") == 0 || strcmp(Key, "6") == 0) {

		system("more -d course/Swift/06.*");	
		Exit_Section(); Swift();
	}

	else if(strcmp(Key, "07") == 0 || strcmp(Key, "7") == 0) {

		system("more -d course/Swift/07.*");	
		Exit_Section(); Swift();
	}

	else if(strcmp(Key, "08") == 0 || strcmp(Key, "8") == 0) {

		system("more -d course/Swift/08.*");	
		Exit_Section(); Swift();
	}

	else if(strcmp(Key, "09") == 0 || strcmp(Key, "9") == 0) {

		system("more -d course/Swift/09.*");	
		Exit_Section(); Swift();
	}
	else if(strcmp(Key, "10") == 0) {

		system("more -d course/Swift/10.*");	
		Exit_Section(); Swift();
	}

	else if(strcmp(Key, "11") == 0) {

		system("more -d course/Swift/11.*");	
		Exit_Section(); Swift();
	}

	else if(strcmp(Key, "12") == 0) {

		system("more -d course/Swift/13.*");	
		Exit_Section(); Swift();
	}

	else if(strcmp(Key, "13") == 0) {

		system("more -d course/Swift/13.*");	
		Exit_Section(); Swift();
	}

	else if(strcmp(Key, "14") == 0) {

		system("more -d course/Swift/14.*");	
		Exit_Section(); Swift();
	}

	else if(strcmp(Key, "15") == 0) {

		system("more -d course/Swift/15.*");	
		Exit_Section(); Swift();
	}

	else if(strcmp(Key, "16") == 0) {

		system("more -d course/Swift/16.*");	
		Exit_Section(); Swift();
	}

	else if(strcmp(Key, "17") == 0) {

		system("more -d course/Swift/17.*");	
		Exit_Section(); Swift();
	}

	else if(strcmp(Key, "18") == 0) {

		system("more -d course/Swift/18.*");	
		Exit_Section(); Swift();
	}

	else if(strcmp(Key, "19") == 0) {

		system("more -d course/Swift/19.*");	
		Exit_Section(); Swift();
	}

	else if(strcmp(Key, "20") == 0) {

		system("more -d course/Swift/20.*");	
		Exit_Section(); Swift();
	}

	else if(strcmp(Key, "21") == 0) {

		system("more -d course/Swift/21.*");	
		Exit_Section(); Swift();
	}

	else if(strcmp(Key, "22") == 0) {

		system("more -d course/Swift/22.*");	
		Exit_Section(); Swift();
	}

	else if(strcmp(Key, "23") == 0) {

		system("more -d course/Swift/23.*");	
		Exit_Section(); Swift();
	}

	else if(strcmp(Key, "24") == 0) {

		system("more -d course/Swift/24.*");	
		Exit_Section(); Swift();
	}

	else if(strcmp(Key, "25") == 0) {

		system("more -d course/Swift/25.*");	
		Exit_Section(); Swift();
	}

	else if(strcmp(Key, "26") == 0) {

		system("more -d course/Swift/26.*");	
		Exit_Section(); Swift();
	}

	else if(strcmp(Key, "27") == 0) {

		system("more -d course/Swift/27.*");	
		Exit_Section(); Swift();
	}

	else if(strcmp(Key, "Q") == 0 || strcmp(Key, "q") == 0)

	  Start();

	else {

		system("clear");
		printf("\n * 您输入有误，请重新输入!\n");
		sleep(2);
		Exit_Section(); Swift();
	}

	return EXIT_SUCCESS;
}

