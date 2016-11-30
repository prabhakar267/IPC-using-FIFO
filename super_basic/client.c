#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

int main(){
	int fd, message;

	fd = open("FIFO1",O_RDONLY);
	
	while(read(fd, &message, sizeof(int)) != 0){
		printf("%d\n",message);
		usleep(1000);
	}
	close(fd);
	return 0;
}
