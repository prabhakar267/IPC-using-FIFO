#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<sys/stat.h>

int main(){
	int fdw, fdr, user_input, message, choice;
	mkfifo("FIFO1",0600);

	fdw = open("FIFO1", O_RDWR);
	// fdr = open("FIFO1", O_RDONLY);

	// printf("\nA Client connected to recieve messages!\n");
	// printf("-- Enter '-1' to exit --\n");

	// while(1){
		while(read(fdw, &message, sizeof(int)) != 0){
			// if(message % 10 == 1){
				// message = message / 10;
				printf("Message recieved : %d\n", message);
				// int output = 12;
				// write(fdw, &output, sizeof(int));
		// 	}
		// }
	
		// usleep(1000);
	}

	close(fdw);
	// close(fdr);
	return 0;
}
