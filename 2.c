//Aim:Program for systemcalls of unix os(opendir,closedir,readdir)
#include<stdio.h>
#include<stdlib.h>
#include<dirent.h>
struct dirent *dptr;
int main(int argc,char *argv[]){
	char buff[100];
	DIR *dirp;
	printf("\nENTER DIRECTORY NAME\n");
	scanf("%s",buff);
	if((dirp=opendir(buff))==NULL)
		printf("The given directory does not exist\n");exit(1);
	while(dptr=readdir(dirp)){
		printf("%s\n",dptr->d_name);
	}
	closedir(dirp);
}			
//Aim:Program for systemcalls of unix os(fork,getpid,exit)
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int main(){
	int pid,pid1,pid2;
	pid=fork();
	if(pid==-1){
		printf("error in process creation \n");
		exit(1);
	}	
	if(pid!=0){
		pid1=getpid();
		printf("\n the parent processID is %d\n", pid1);
	}	
	else{
		pid2=getpid();
		printf("\n the child process ID is %d\n", pid2);
	}	
}		


/*#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
int main(int argc,char *argv[]){
	FILE *fp;char ch;int sc=0;
	fp=fopen(argv[1],"r");
	if(fp==NULL)
		printf("unable to open a file%s",argv[1]);
		else
		{
		whlie(!feof(fp)){
			ch=fgetc(fp);
			if(ch==' ')
				sc++;
		}
		printf("no of spaces%d",sc);
		printf("\n");
		printf(fp);
	}
}		*/
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int main(int argc, char *argv[]) {
    FILE *fp;
    char ch;
    int sc = 0;

    if (argc < 2) {
        printf("Usage: %s <filename>\n", argv[0]);
        return 1;  // Exit if filename is not provided.
    }

    fp = fopen(argv[1], "r");
    if (fp == NULL) {
        printf("Unable to open the file %s\n", argv[1]);
        return 1;
    } else {
        while ((ch = fgetc(fp)) != EOF) {  // Read until the end of file.
            if (ch == ' ') {
                sc++;
            }
        }

        printf("Number of spaces: %d\n", sc);
        fclose(fp);  // Close the file after processing.
    }

    return 0;
}
			



#include <stdio.h>
22 #include <fcntl.h>
23 #include < unistd.h>
24 int main(int argc, char *argvIl) {
25
FILE *fp;
26
char ch;
27
int sc = 0;
28
if (argc < 2) {
29
printf("Usage: %s ‹filename>\n", argv[01);
30
return 1; // Exit if filename is not provided.
31
32
33
34
35
36
37
38
39
fp = fopen(argv[1], "r");
if (fp == NULL) {
printf("Unable to open the file %s\n", argv[11);
return 1;
} else 1
while ((ch = fetc(fp)) |= EOF) { // Read until the end of file.
if (ch == '') ( sc++;
40
41
42
43
44
printf("Number of spaces: %d\n", sc);
fclose(fp); // Close the file after processing.
45
46}
return







