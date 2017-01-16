
#include "main.h"

int Authors(void) {

	system("clear");

	printf(
				"+==============================+\n"
				"| * 软件名称：教程系统         |\n"
				"| * 软件版本：V2.0             |\n"
				"| * 作    者：Geek             |\n"
				"| * 微    信：GM251021         |\n"
				"| * 联系方式：zy251021@163.com |\n"
				"| * 创作时间：2016-12-24       |\n"
				"+------------------------------+\n"
				"|   * 输入\"q\" 返回上级菜单     |\n"
				"+------------------------------+\n"
		  ); 

	scanf("%s", Key);

	if(strcmp(Key, "Q") == 0 || strcmp(Key, "q") == 0)

	  Main_Menu();

	else {

		system("clear");

		printf("\n* 您输入有误，请重新输入!\n");
		sleep(2);
		Authors();
	}

	return EXIT_SUCCESS;
}
