
#include "main.h"

int Start(void) {

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

	if(strcmp(Key, "01") == 0 || strcmp(Key, "1") == 0)

	  C();

	else if(strcmp(Key, "02") == 0 || strcmp(Key, "2") == 0)

	  C_Plus_Plus();

	else if(strcmp(Key, "03") == 0 || strcmp(Key, "3") == 0)

	  Web();

	else if(strcmp(Key, "04") == 0 || strcmp(Key, "4") == 0)

	  PHP();

	else if(strcmp(Key, "05") == 0 || strcmp(Key, "5") == 0)

	  Shell();

	else if(strcmp(Key, "06") == 0 || strcmp(Key, "6") == 0)

	  Swift();

	else if(strcmp(Key, "07") == 0 || strcmp(Key, "7") == 0)
	
	  Python();
	
	else if(strcmp(Key, "08") == 0 || strcmp(Key, "8") == 0)

	  Lua();

	else if(strcmp(Key, "09") == 0 || strcmp(Key, "9") == 0)

	  Perl();

	else if(strcmp(Key, "10") == 0)

	  Ruby();

	else if(strcmp(Key, "Q") == 0 || strcmp(Key, "q") == 0)

	  Main_Menu();

	else {

		system("clear");

		printf("\n* 您输入有误，请重新输入!\n");
		sleep(2);
		Start();
	}

	return EXIT_SUCCESS;
}
