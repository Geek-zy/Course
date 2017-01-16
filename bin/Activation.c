
#include "main.h"

int Activation(void)
{
	system("clear");

	printf("\n* 请输入激活码（输入\"q\" 退出程序）：");

	scanf("%s", Key);

	if(strcmp(Key, Activation_K_Code) == 0) {

		system("mkdir etc");
		system("touch etc/init.conf");
		Encode_W();

		int Activate_Success(void) {

			system("clear");
			printf("\n* 恭喜，激活成功，即将进入系统！\n");
			sleep(3);

			return EXIT_SUCCESS;
		}

		Activate_Success();
		Main_Menu();
	}

	else if(strcmp(Key, "Q") == 0 || strcmp(Key, "q") == 0)

	  exit(0);

	else {

		system("clear");
		printf("\n* 您输入有误，请重新输入!\n");
		sleep(2);
		Activation();
	}

	return EXIT_SUCCESS;
}
