
#include "main.h"

int Help(void) {

	system("clear");

	printf(
				"+===========+===================+\n"
				"|  操作命令 |      说    明     |\n"
				"|===========+===================|\n"
				"|   Enter   | 向下滚动，默认1行 |\n"
				"| n Enter   | 向下n 行，n为行数 |\n"
				"|   空格键  | 向下滚动一屏      |\n"
				"|   Ctrl+F  | 向下滚动一屏      |\n"
				"|   Ctrl+B  | 向上滚动一屏      |\n"
				"|     d     | 向下滚动半屏      |\n"
				"|     =     | 输出当前行的行号  |\n"
				"|    :f     | 输出文件名、行号  |\n"
				"|     v     | 编辑教程-Vim编辑器|\n"
				"|     !     | 调用Shell         |\n"
				"|     n     | 打开使用说明      |\n"
				"|     q     | 退出教程          |\n"
				"+----------+--------------------+\n"
				"|    * 输入\"q\" 返回上级菜单     |\n"
				"+----------+--------------------+\n"
		  ); 

	scanf("%s", Key);

	if(strcmp(Key, "Q") == 0 || strcmp(Key, "q") == 0)

	  Main_Menu();

	else {

		system("clear");

		printf("\n* 您输入有误，请重新输入!\n");
		sleep(2);
		Help();
	}

	return EXIT_SUCCESS;
}
