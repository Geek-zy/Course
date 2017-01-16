
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

#define Activation_K_Code "GEEK-ZY95-RIMA-GV10"
#define Activation_V_Code "1280b012e9facbb465c059fee16efc09"

char Key[128];						//全局按键变量

char *Encode;						//MD5秘钥 写入init.conf
char  Decode[128];					//MD5秘钥 读取init.conf

int strcmp();						//对比两个字符串，不声明出警告

int main(int argc, char *argv[]);	//程序入口
int init(void);						//初始化，判断是否激活
int Welcome(void);					//欢迎界面，只在第一次激活时出现
int Encode_W(void);					//MD5编码
int Decode_R(void);					//MD5解码
int Activation(void);				//激活码
int Activate_Success(void);			//激活成功
int Main_Menu(void);				//主菜单
int Select(void);					//查看教程
int Start(void);					//开始学习
int Help(void);						//使用帮助
int Authors(void);					//鸣谢作者
int Exit(void);						//退出程序

int Exit_Section(void);				/*退出章节提示，more有一个BUG，如果到文件末尾more会自动退出，
									  所以，加一个提示，方便用户使用。
									  如果文件内容不到当前显示屏的一屏，程序将教程一闪而过。
									  将终端调小即可解决，或者将教程内容增加N个回车。
									  */

int C(void);						//C 语言教程
int C_Plus_Plus(void);				//C++ 教程
int Web(void);						//Web 教程
int PHP(void);						//PHP 教程
int Shell(void);					//Shell 教程
int Swift(void);					//Swift 教程
int Python(void);					//Python 教程
int Lua(void);						//Lua 教程
int Perl(void);						//Perl 教程
int Ruby(void);						//Ruby 教程
