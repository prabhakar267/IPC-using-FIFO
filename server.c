#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<sys/stat.h>

int main(){
	int fd, message;
	mkfifo("FIFO1",0600);

	fd = open("FIFO1", O_RDWR);

	while(1){
		if(read(fd, &message, sizeof(int)) != 0){
			if(message % 10 == 1){
				message = message / 10;
				printf("Message recieved : %d\n", message);
			}
		}
		usleep(1000);
	}

	close(fd);
	return 0;
}
