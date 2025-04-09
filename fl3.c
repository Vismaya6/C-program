#include <stdio.h>
int main () {
FILE *fp1;
int wordcount=0,line=0,character=0;
fp1=fopen("f.txt","r");
char ch;
while(fscanf(fp1,"%c",&ch)==1){
	if(ch==' '){
	wordcount++;
	}
	else if(ch=='.'){
	line++;
	wordcount++;
	}
	else{
	character++;
	}
	}
	printf("\nWord count=%d",wordcount);
	printf("\nline count=%d",line);
	printf("\ncharacter count=%d",character+wordcount);
        fclose(fp1);
        return 0;
        }

