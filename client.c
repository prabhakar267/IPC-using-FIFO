#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<sys/stat.h>

int main(){
	int fd, user_input, message, choice;
	fd = open("FIFO1", O_RDWR);

	do{
		printf("1 : READ\n");
		printf("2 : WRITE\n");
		printf("Enter choice: ");
		scanf("%d", &choice);

		switch(choice){
			case 1:
				while(1){	
					if(read(fd, &message, sizeof(int)) != 0){
						if(message % 10 == 2){
							message = message / 10;
							printf("Message recieved : %d\n", message);
							break;
						}
					}
				}
				break;
			case 2:
				printf("Enter the message to be sent :");
				scanf("%d", &user_input);
				write(fd, &user_input, sizeof(int));
								printf("Successfully read\n");
				break;
		}
		usleep(1000);
	} while(1);

	close(fd);
	return 0;
}
