
#include "main.h"

int Select(void) {

	system("clear");

	printf(
				"+==========+==========+\n"
				"| 序 号 | 教 程 列 表 |\n"
				"|==========+==========|\n"
				"|   01  |   C         |\n"
				"|   02  |   C ++      |\n"
				"|   03  |   Web       |\n"
				"|   04  |   PHP       |\n"
				"|   05  |   Shell     |\n"
				"|   06  |   Swift     |\n"
				"|   07  |   Python    |\n"
				"|   08  |   Lua       |\n"
				"|   09  |   Perl      |\n"
				"|   10  |   Ruby      |\n"
				"+----------+----------+\n"
				"|*输入\"q\" 返回上级菜单|\n"
				"+----------+----------+\n"
		  ); 

	scanf("%s", Key);

	if(strcmp(Key, "Q") == 0 || strcmp(Key, "q") == 0)

	  Main_Menu();

	else {

		system("clear");

		printf("\n* 您输入有误，请重新输入!\n");
		sleep(2);
		Select();
	}

	return EXIT_SUCCESS;
}
