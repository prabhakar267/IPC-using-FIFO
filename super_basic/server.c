#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<sys/stat.h>

int main(){
	int fd, user_input;
	mkfifo("FIFO1",0600);

	printf("No Client connected to recieve!\n");

	fd = open("FIFO1",O_WRONLY);
	printf("\nA Client connected to recieve messages!\n");
	printf("-- Enter '-1' to exit --\n");

	while(1){
		printf("Enter the number to be read by the client: ");
		scanf("%d", &user_input);
		
		if(user_input == -1)
			break;

		write(fd, &user_input, sizeof(int));
		usleep(1000);
	}

	close(fd);
	return 0;
}
