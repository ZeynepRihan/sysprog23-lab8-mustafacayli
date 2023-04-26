/**
 * nonshared fds
 * opens/creates files with the 
 * different  names file descriptors are not shread!
*/
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
int main(){
	int fd;
    char *str;
    int pid = fork();
	if (pid > 0){
        fd = open("parent", O_CREAT | O_TRUNC | O_WRONLY, 0666);
		str = "parent \n";
		write(fd, str, strlen(str));
		close(fd);
	}else if (pid == 0){
        fd = open("child", O_CREAT | O_TRUNC | O_WRONLY, 0666);
		str = "child \n";
		write(fd, str, strlen(str));
		close(fd);
	}else
	{
		perror("fork");
		exit(1);
	}
}
