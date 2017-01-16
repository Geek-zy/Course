
#include "main.h"

//将MD5密文编码写入到文件中
int Encode_W(void) {  

	Encode = Activation_V_Code;   
	FILE *fp;  

	fp=fopen("etc/init.conf", "w");		/*建立一个文字文件只写*/   
	fprintf(fp, "%s", Encode);			/*向所建文件写一字符串*/   
	fclose(fp);  

	return EXIT_SUCCESS;
}

//从文件读取MD5密文解码
int Decode_R(void) {  

	FILE *fp;   

	if((fp = fopen("etc/init.conf","r")) == NULL) {  

		return 0;
	}

	while(!feof(fp)) {  

		if(fgets(Decode,128,fp) != NULL)  

		  //printf("%s",Decode);

		  return EXIT_SUCCESS;	  
	}  

	fclose(fp);  

	return EXIT_SUCCESS;
} 

