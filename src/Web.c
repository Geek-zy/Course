
#include "../bin/main.h"

int Web(void)
{
	system("clear");

	printf(
				"+======+================+=======+================+=======+================+\n"
				"| 序号 |   HTML  章 节  | 序 号 |   CSS  章 节   | 序 号 |   JS  章 节    |\n"
				"|======+================+=======+================+=======+================+\n"
				"| H01  |  HTML 简介     | C01   |  CSS 教程      |  J01  |  JS 简介       |\n"
				"| H02  |  HTML 基础     | C02   |  CSS 简介      |  J02  |  JS 使用       |\n"
				"| H03  |  HTML 元素     | C03   |  CSS 边框      |  J03  |  JS 输出       |\n"
				"| H04  |  HTML 属性     | C04   |  CSS 背景      |  J01  |  JS 语句       |\n"
				"| H05  |  HTML 标题     | C05   |  CSS 文本效果  |  J05  |  JS 注释       |\n"
				"| H06  |  HTML 段落     | C06   |  CSS 字体      |  J06  |  JS 变量       |\n"
				"| H07  |  HTML 格式     | C07   |  CSS 2D转换    |  J07  |  JS 数据类型   |\n"
				"| H08  |  HTML CSS      | C08   |  CSS 3D转换    |  J08  |  JS 对象       |\n"
				"| H09  |  HTML 链接     | C09   |  CSS 过渡      |  J09  |  JS 函数       |\n"
				"| H10  |  HTML 图像     | C10   |  CSS 动画      |  J10  |  JS 运算符     |\n"
				"| H11  |  HTML 表格     | C11   |  CSS 多列      |  J11  |  JS 逻辑运算符 |\n"
				"| H12  |  HTML 列表     | C12   |  CSS 用户界面  |  J12  |  JS if 判断    |\n"
				"| H13  |  HTML div      | C13   |  CSS 打印参考  |  J13  |  JS Switch 判断|\n"
				"| H14  |  HTML 布局     | C14   |  CSS 听觉参考  |  J14  |  JS for 循环   |\n"
				"| H15  |  HTML 表单     | C15   |  CSS 单位      |  J15  |  JS while 循环 |\n"
				"| H16  |  HTML 框架     | C16   |  CSS 合法颜色值|  J16  |  JS break 语句 |\n"
				"| H17  |  HTML Iframe   |       |                |  J17  |  JS 错误       |\n"
				"| H18  |  HTML 背景     |       |                |  J18  |  JS 表单验证   |\n"
				"| H19  |  HTML 颜色     |       |                |  J19  |  JS 对象       |\n"
				"| H20  |  HTML 颜色名   |       |                |  J20  |  JS number 对象|\n"
				"| H21  |  HTML 快速参考 |       |                |  J21  |  JS 字符串对象 |\n"
				"| H22  |  HTML DOCTYPE  |       |                |  J22  |  JS 日期对象   |\n"
				"| H23  |  HTML 头部元素 |       |                |  J23  |  JS 数组对象   |\n"
				"| H24  |  HTML 脚本     |       |                |  J24  |  JS 逻辑对象   |\n"
				"| H25  |  HTML 字符     |       |                |  J25  |  JS 算数对象   |\n"
				"| H26  |  HTML URL      |       |                |  J26  |  JS RegExp对象 |\n"
				"| H27  |  HTML 字符编码 |       |                |       |                |\n"
				"| H28  |  HTML Server   |       |                |       |                |\n"
				"|-------------------------------------------------------------------------|\n"
				"|                   * 输 入 \"q\"　返 回 上 级 菜 单                        |\n"
				"+-------------------------------------------------------------------------+\n"
		  ); 

	scanf("%s", Key);

	//HTML
	if(strcmp(Key, "H01") == 0 || strcmp(Key, "H1") == 0 || strcmp(Key, "h01") == 0 || strcmp(Key, "h1") == 0) {

		system("more -d course/Web/HTML/01.*");	
		Exit_Section(); Web();
	}

	else if(strcmp(Key, "H02") == 0 || strcmp(Key, "H2") == 0 || strcmp(Key, "h02") == 0 || strcmp(Key, "h2") == 0) {

		system("more -d course/Web/HTML/02.*");	
		Exit_Section(); Web();
	}

	else if(strcmp(Key, "H03") == 0 || strcmp(Key, "H3") == 0 || strcmp(Key, "h03") == 0 || strcmp(Key, "h3") == 0) {

		system("more -d course/Web/HTML/03.*");	
		Exit_Section(); Web();
	}

	else if(strcmp(Key, "H04") == 0 || strcmp(Key, "H4") == 0 || strcmp(Key, "h04") == 0 || strcmp(Key, "h4") == 0) {

		system("more -d course/Web/HTML/04.*");	
		Exit_Section(); Web();
	}

	else if(strcmp(Key, "H05") == 0 || strcmp(Key, "H5") == 0 || strcmp(Key, "h05") == 0 || strcmp(Key, "h5") == 0) {

		system("more -d course/Web/HTML/05.*");	
		Exit_Section(); Web();
	}

	else if(strcmp(Key, "H06") == 0 || strcmp(Key, "H6") == 0 || strcmp(Key, "h06") == 0 || strcmp(Key, "h6") == 0) {

		system("more -d course/Web/HTML/06.*");	
		Exit_Section(); Web();
	}

	else if(strcmp(Key, "H07") == 0 || strcmp(Key, "H7") == 0 || strcmp(Key, "h07") == 0 || strcmp(Key, "h7") == 0) {

		system("more -d course/Web/HTML/07.*");	
		Exit_Section(); Web();
	}

	else if(strcmp(Key, "H08") == 0 || strcmp(Key, "H8") == 0 || strcmp(Key, "h08") == 0 || strcmp(Key, "h8") == 0) {

		system("more -d course/Web/HTML/08.*");	
		Exit_Section(); Web();
	}

	else if(strcmp(Key, "H09") == 0 || strcmp(Key, "H9") == 0 || strcmp(Key, "h09") == 0 || strcmp(Key, "h9") == 0) {

		system("more -d course/Web/HTML/09.*");	
		Exit_Section(); Web();
	}
	else if(strcmp(Key, "H10") == 0 || strcmp(Key, "h10") == 0) {

		system("more -d course/Web/HTML/10.*");	
		Exit_Section(); Web();
	}

	else if(strcmp(Key, "H/11") == 0 || strcmp(Key, "h11") == 0) {

		system("more -d course/Web/HTML/11.*");	
		Exit_Section(); Web();
	}

	else if(strcmp(Key, "H12") == 0 || strcmp(Key, "h12") == 0) {

		system("more -d course/Web/HTML/12.*");	
		Exit_Section(); Web();
	}

	else if(strcmp(Key, "H13") == 0 || strcmp(Key, "h13") == 0) {

		system("more -d course/Web/HTML/13.*");	
		Exit_Section(); Web();
	}

	else if(strcmp(Key, "H14") == 0 || strcmp(Key, "h14") == 0) {

		system("more -d course/Web/HTML/14.*");	
		Exit_Section(); Web();
	}

	else if(strcmp(Key, "H15") == 0 || strcmp(Key, "h15") == 0) {

		system("more -d course/Web/HTML/15.*");	
		Exit_Section(); Web();
	}

	else if(strcmp(Key, "H16") == 0 || strcmp(Key, "h16") == 0) {

		system("more -d course/Web/HTML/16.*");	
		Exit_Section(); Web();
	}

	else if(strcmp(Key, "H17") == 0 || strcmp(Key, "h17") == 0) {

		system("more -d course/Web/HTML/17.*");	
		Exit_Section(); Web();
	}

	else if(strcmp(Key, "H18") == 0 || strcmp(Key, "h18") == 0) {

		system("more -d course/Web/HTML/18.*");	
		Exit_Section(); Web();
	}

	else if(strcmp(Key, "H19") == 0 || strcmp(Key, "h19") == 0) {

		system("more -d course/Web/HTML/19.*");	
		Exit_Section(); Web();
	}

	else if(strcmp(Key, "H20") == 0 || strcmp(Key, "h20") == 0) {

		system("more -d course/Web/HTML/20.*");	
		Exit_Section(); Web();
	}

	else if(strcmp(Key, "H21") == 0 || strcmp(Key, "h21") == 0) {

		system("more -d course/Web/HTML/21.*");	
		Exit_Section(); Web();
	}

	else if(strcmp(Key, "H22") == 0 || strcmp(Key, "h22") == 0) {

		system("more -d course/Web/HTML/22.*");	
		Exit_Section(); Web();
	}

	else if(strcmp(Key, "H23") == 0 || strcmp(Key, "h23") == 0) {

		system("more -d course/Web/HTML/23.*");	
		Exit_Section(); Web();
	}

	else if(strcmp(Key, "H24") == 0 || strcmp(Key, "h24") == 0) {

		system("more -d course/Web/HTML/24.*");	
		Exit_Section(); Web();
	}

	else if(strcmp(Key, "H25") == 0 || strcmp(Key, "h25") == 0) {

		system("more -d course/Web/HTML/25.*");	
		Exit_Section(); Web();
	}

	else if(strcmp(Key, "H26") == 0 || strcmp(Key, "h26") == 0) {

		system("more -d course/Web/HTML/26.*");	
		Exit_Section(); Web();
	}

	else if(strcmp(Key, "H27") == 0 || strcmp(Key, "h27") == 0) {

		system("more -d course/Web/HTML/27.*");	
		Exit_Section(); Web();
	}

	else if(strcmp(Key, "H28") == 0 || strcmp(Key, "h28") == 0) {

		system("more -d course/Web/HTML/28.*");	
		Exit_Section(); Web();
	}

	//CSS
	else if(strcmp(Key, "C01") == 0 || strcmp(Key, "C1") == 0 || strcmp(Key, "c01") == 0 || strcmp(Key, "c1") == 0) {

		system("more -d course/Web/CSS/01.*");	
		Exit_Section(); Web();
	}

	else if(strcmp(Key, "C02") == 0 || strcmp(Key, "C2") == 0 || strcmp(Key, "c02") == 0 || strcmp(Key, "c2") == 0) {

		system("more -d course/Web/CSS/02.*");	
		Exit_Section(); Web();
	}

	else if(strcmp(Key, "C03") == 0 || strcmp(Key, "C3") == 0 || strcmp(Key, "c03") == 0 || strcmp(Key, "c3") == 0) {

		system("more -d course/Web/CSS/03.*");	
		Exit_Section(); Web();
	}

	else if(strcmp(Key, "C04") == 0 || strcmp(Key, "C4") == 0 || strcmp(Key, "c04") == 0 || strcmp(Key, "c4") == 0) {

		system("more -d course/Web/CSS/04.*");	
		Exit_Section(); Web();
	}

	else if(strcmp(Key, "C05") == 0 || strcmp(Key, "C5") == 0 || strcmp(Key, "c05") == 0 || strcmp(Key, "c5") == 0) {

		system("more -d course/Web/CSS/05.*");	
		Exit_Section(); Web();
	}

	else if(strcmp(Key, "C06") == 0 || strcmp(Key, "C6") == 0 || strcmp(Key, "c06") == 0 || strcmp(Key, "c6") == 0) {

		system("more -d course/Web/CSS/06.*");	
		Exit_Section(); Web();
	}

	else if(strcmp(Key, "C07") == 0 || strcmp(Key, "C7") == 0 || strcmp(Key, "c07") == 0 || strcmp(Key, "c7") == 0) {

		system("more -d course/Web/CSS/07.*");	
		Exit_Section(); Web();
	}

	else if(strcmp(Key, "C08") == 0 || strcmp(Key, "C8") == 0 || strcmp(Key, "c08") == 0 || strcmp(Key, "c8") == 0) {

		system("more -d course/Web/CSS/08.*");	
		Exit_Section(); Web();
	}

	else if(strcmp(Key, "C09") == 0 || strcmp(Key, "C9") == 0 || strcmp(Key, "c09") == 0 || strcmp(Key, "c9") == 0) {

		system("more -d course/Web/CSS/09.*");	
		Exit_Section(); Web();
	}

	else if(strcmp(Key, "C10") == 0 || strcmp(Key, "c10") == 0) {

		system("more -d course/Web/CSS/10.*");	
		Exit_Section(); Web();
	}

	else if(strcmp(Key, "C11") == 0 || strcmp(Key, "c11") == 0) {

		system("more -d course/Web/CSS/11.*");	
		Exit_Section(); Web();
	}

	else if(strcmp(Key, "C12") == 0 || strcmp(Key, "c12") == 0) {

		system("more -d course/Web/CSS/12.*");	
		Exit_Section(); Web();
	}

	else if(strcmp(Key, "C13") == 0 || strcmp(Key, "c13") == 0) {

		system("more -d course/Web/CSS/13.*");	
		Exit_Section(); Web();
	}

	else if(strcmp(Key, "C14") == 0 || strcmp(Key, "c14") == 0) {

		system("more -d course/Web/CSS/14.*");	
		Exit_Section(); Web();
	}

	else if(strcmp(Key, "C15") == 0 || strcmp(Key, "c15") == 0) {

		system("more -d course/Web/CSS/15.*");	
		Exit_Section(); Web();
	}

	else if(strcmp(Key, "C16") == 0 || strcmp(Key, "c16") == 0) {

		system("more -d course/Web/CSS/16.*");	
		Exit_Section(); Web();
	}

	//JavaScript
	else if(strcmp(Key, "J01") == 0 || strcmp(Key, "J1") == 0 || strcmp(Key, "j01") == 0 || strcmp(Key, "j1") == 0) {

		system("more -d course/Web/JavaScript/01.*");	
		Exit_Section(); Web();
	}

	else if(strcmp(Key, "J02") == 0 || strcmp(Key, "J2") == 0 || strcmp(Key, "j02") == 0 || strcmp(Key, "j2") == 0) {

		system("more -d course/Web/JavaScript/02.*");	
		Exit_Section(); Web();
	}

	else if(strcmp(Key, "J03") == 0 || strcmp(Key, "J3") == 0 || strcmp(Key, "j03") == 0 || strcmp(Key, "j3") == 0) {

		system("more -d course/Web/JavaScript/03.*");	
		Exit_Section(); Web();
	}

	else if(strcmp(Key, "J04") == 0 || strcmp(Key, "J4") == 0 || strcmp(Key, "j04") == 0 || strcmp(Key, "j4") == 0) {

		system("more -d course/Web/JavaScript/04.*");	
		Exit_Section(); Web();
	}

	else if(strcmp(Key, "J05") == 0 || strcmp(Key, "J5") == 0 || strcmp(Key, "j05") == 0 || strcmp(Key, "j5") == 0) {

		system("more -d course/Web/JavaScript/05.*");	
		Exit_Section(); Web();
	}

	else if(strcmp(Key, "J06") == 0 || strcmp(Key, "J6") == 0 || strcmp(Key, "j06") == 0 || strcmp(Key, "j6") == 0) {

		system("more -d course/Web/JavaScript/06.*");	
		Exit_Section(); Web();
	}

	else if(strcmp(Key, "J07") == 0 || strcmp(Key, "J7") == 0 || strcmp(Key, "j07") == 0 || strcmp(Key, "j7") == 0) {

		system("more -d course/Web/JavaScript/07.*");	
		Exit_Section(); Web();
	}

	else if(strcmp(Key, "J08") == 0 || strcmp(Key, "J8") == 0 || strcmp(Key, "j08") == 0 || strcmp(Key, "j8") == 0) {

		system("more -d course/Web/JavaScript/08.*");	
		Exit_Section(); Web();
	}

	else if(strcmp(Key, "J09") == 0 || strcmp(Key, "J9") == 0 || strcmp(Key, "j09") == 0 || strcmp(Key, "j9") == 0) {

		system("more -d course/Web/JavaScript/09.*");	
		Exit_Section(); Web();
	}

	else if(strcmp(Key, "J10") == 0 || strcmp(Key, "j10") == 0) {

		system("more -d course/Web/JavaScript/10.*");	
		Exit_Section(); Web();
	}

	else if(strcmp(Key, "J11") == 0 || strcmp(Key, "j11") == 0) {

		system("more -d course/Web/JavaScript/11.*");	
		Exit_Section(); Web();
	}

	else if(strcmp(Key, "J12") == 0 || strcmp(Key, "j12") == 0) {

		system("more -d course/Web/JavaScript/12.*");	
		Exit_Section(); Web();
	}

	else if(strcmp(Key, "J13") == 0 || strcmp(Key, "j13") == 0) {

		system("more -d course/Web/JavaScript/13.*");	
		Exit_Section(); Web();
	}

	else if(strcmp(Key, "J14") == 0 || strcmp(Key, "j14") == 0) {

		system("more -d course/Web/JavaScript/14.*");	
		Exit_Section(); Web();
	}

	else if(strcmp(Key, "J15") == 0 || strcmp(Key, "j15") == 0) {

		system("more -d course/Web/JavaScript/15.*");	
		Exit_Section(); Web();
	}

	else if(strcmp(Key, "J16") == 0 || strcmp(Key, "j16") == 0) {

		system("more -d course/Web/JavaScript/16.*");	
		Exit_Section(); Web();
	}

	else if(strcmp(Key, "J17") == 0 || strcmp(Key, "j17") == 0) {

		system("more -d course/Web/JavaScript/17.*");	
		Exit_Section(); Web();
	}

	else if(strcmp(Key, "J18") == 0 || strcmp(Key, "j18") == 0) {

		system("more -d course/Web/JavaScript/18.*");	
		Exit_Section(); Web();
	}

	else if(strcmp(Key, "J19") == 0 || strcmp(Key, "j19") == 0) {

		system("more -d course/Web/JavaScript/19.*");	
		Exit_Section(); Web();
	}

	else if(strcmp(Key, "J20") == 0 || strcmp(Key, "j20") == 0) {

		system("more -d course/Web/JavaScript/20.*");	
		Exit_Section(); Web();
	}

	else if(strcmp(Key, "J21") == 0 || strcmp(Key, "j21") == 0) {

		system("more -d course/Web/JavaScript/21.*");	
		Exit_Section(); Web();
	}

	else if(strcmp(Key, "J22") == 0 || strcmp(Key, "j22") == 0) {

		system("more -d course/Web/JavaScript/22.*");	
		Exit_Section(); Web();
	}

	else if(strcmp(Key, "J23") == 0 || strcmp(Key, "j23") == 0) {

		system("more -d course/Web/JavaScript/23.*");	
		Exit_Section(); Web();
	}

	else if(strcmp(Key, "J24") == 0 || strcmp(Key, "j24") == 0) {

		system("more -d course/Web/JavaScript/24.*");	
		Exit_Section(); Web();
	}

	else if(strcmp(Key, "J25") == 0 || strcmp(Key, "j25") == 0) {

		system("more -d course/Web/JavaScript/25.*");	
		Exit_Section(); Web();
	}

	else if(strcmp(Key, "J26") == 0 || strcmp(Key, "j26") == 0) {

		system("more -d course/Web/JavaScript/26.*");	
		Exit_Section(); Web();
	}

	else if(strcmp(Key, "Q") == 0 || strcmp(Key, "q") == 0)

	  Start();

	else {

		system("clear");
		printf("\n* 您输入有误，请重新输入!\n");
		sleep(2);
		Exit_Section(); Web();
	}

	return EXIT_SUCCESS;
}
