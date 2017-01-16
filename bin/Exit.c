
#include "main.h"

int Exit(void) {

ERROR:    

	system("clear");

	printf("\n* 是否要退出本教程系统！！！\n\n");
	printf("Y 是\tN 否\n"); 

	scanf("%s", Key);

	if(strcmp(Key, "Y") == 0 || strcmp(Key, "y") == 0) {

		system("clear");
		printf("\n* 感谢您使用本教程系统！！！\n");
		exit(0);
	}   

	else if(strcmp(Key, "N") == 0 || strcmp(Key, "n") == 0)

	  Main_Menu();

	else {

		system("clear");

		printf("\n * 您输入有误，请重新输入！\n");
		sleep(2);
		goto ERROR;
	}   

	return EXIT_SUCCESS;
}
