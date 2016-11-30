#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<sys/stat.h>

int main(){
	int fdw, fdr, user_input, message, choice;
	// mkfifo("FIFO1",0600);

	// printf("No Client connected to recieve!\n");
	fdw = open("FIFO1", O_RDWR);

	// fdw = open("FIFO1", O_WRONLY);
	// fdr = open("FIFO1", O_RDONLY);

	// printf("\nA Client connected to recieve messages!\n");
	// printf("-- Enter '-1' to exit --\n");

	// do{
	// 	printf("1 : READ\n");
	// 	printf("2 : WRITE\n");
	// 	// printf("3 : EXIT\n");
	// 	printf("Enter choice: ");
		scanf("%d", &choice);

	// 	switch(choice){
	// 		case 1:
	// 			while(1){	
	// 				if(read(fdw, &message, sizeof(int)) != 0){
	// 					if(message % 10 == 2){
	// 						message = message / 10;
	// 						printf("Message recieved : %d\n", message);
	// 						int output = 12;
	// 						write(fdw, &output, sizeof(int));
	// 					}
	// 				// } else {
	// 					// printf("Buffer Empty!\n");
	// 					break;
	// 				}
	// 			}
	// 			break;
	// 		case 2:
			while(1){
				user_input = 1;
				write(fdw, &choice, sizeof(int));
			}
				// printf("Enter the message to be sent :");
				// scanf("%d", &user_input);
				// 				printf("Successfully read\n\n");

				// while(1){
				// 	int output;
				// 	if(read(fdw, &output, sizeof(int)) != 0){
				// 		if(output % 10 == 2){
				// 			output = output / 10;
				// 			if(output == 1){
				// 				printf("Successfully read\n\n");
				// 			} else {
				// 				printf("Some error\n");
				// 			}
				// 			break;
				// 		}
				// 	}
				// }
		// 		break;
		// 	default:
		// 		break;
		// }


		
		// if(user_input == -1)
		// 	break;

	// 	usleep(1000);
	// } while(1);

	close(fdw);
	// close(fdr);
	return 0;
}
