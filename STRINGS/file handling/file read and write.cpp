#include<stdio.h>
main(){
	FILE *fp;
	char ch;
	fp=fopen("file.txt","w");
	printf("enter text:");
	while((ch=getchar())!='#'){
		putc(ch,fp);
	}
	fclose(fp);
	fp=fopen("file.txt","r");
	printf("file content:\n");
	while((ch=getc(fp))!=EOF){ 
	printf("%c",ch);
	}
	//printf("\n");
	printf("\nend of file");
	fclose(fp);
	
}
