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
