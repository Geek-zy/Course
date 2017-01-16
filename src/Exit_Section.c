
#include "../bin/main.h"

int Exit_Section(void) {

	system("clear");
	printf("\n* 系统提示：系统检测到您输入\"q\" 按键或者已到本章节末尾！");
	printf("\n* 温馨提示：\"more\"有一个BUG，如果教程直接退出，请将终端调小后再试！");
	printf("\n* 正在退出，请稍等！\n");
	sleep(3);

	return EXIT_SUCCESS;
}

