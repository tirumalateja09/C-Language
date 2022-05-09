#include<stdio.h>
#include<stdlib.h>
int main(){
	char path[100];
	char ch;
	int characters,words,lines;
	FILE *fp;
	fp=fopen("file2.txt","w");
	if(fp==NULL){
		printf("unable to open the file ");
		exit(0);
	}
	printf("enter data\n");
	while((ch=getchar())!='#'){
		putc(ch,fp);
	}
	fclose(fp);
	fp=fopen("file2.txt","r");
	characters=words=lines=0;
	while((ch=getc(fp))!=EOF){
		characters++;
		if(ch=='\n')
		lines++;
		if(ch==' '||ch=='\t'||ch=='\n')
		words++;
	}
	if(characters>0)
	words++;
	lines++;
	printf("\n");
	printf("total characters=%d\n",characters);
	printf("total words=%d\n",words);
	printf("total lines=%d\n",lines);
	fclose(fp);
	}
