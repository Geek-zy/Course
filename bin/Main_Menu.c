
#include "main.h"

int Main_Menu(void) {

	system("clear");

	printf(
				"\n ★ 主 菜 单\n\n"
				"1.查 看 教 程\n\n"
				"2.开 始 学 习\n\n"
				"3.使 用 说 明\n\n"
				"4.鸣 谢 作 者\n\n"
				"q.退 出 程 序\n\n"
		  ); 

	scanf("%s", Key);

	if(strcmp(Key, "1") == 0)

	  Select();

	else if(strcmp(Key, "2") == 0)

	  Start();

	else if(strcmp(Key, "3") == 0)

	  Help();

	else if(strcmp(Key, "4") == 0)

	  Authors();

	else if(strcmp(Key, "Q") == 0 || strcmp(Key, "q") == 0)

	  Exit();

	else {

		system("clear");

		printf("\n* 您输入有误，请重新输入!\n");
		sleep(3);
		Main_Menu();
	}

	return EXIT_SUCCESS;
}
