/*
NAME:NGUNJIRI LUCY WAKURAYA
REGISTRATION NUMBER:26451
DESCRIPTION:A PROGRAM DISPLAYING INTERNET DATA BUNDLES OFFERED BY A LOCAL MOBILE SERVICE PROVIDER
*/
#include <stdio.h>

int main(){
int choice;

//display of the menu
printf("Select data bundle:\n");
printf("1.100MB@50KES\n");
printf("2.500MB@200KES\n");
printf("3.1GB@350KES\n");
printf("4.2GB@600KES\n");

//prompt the user to enter a choice(1-4)
printf("Enter your choice(1-4):");
scanf("%d",&choice);
	
	//3.Uses a switch statement to display the selected bundle and its cost
	//4.Displays "invalid choice" if the user inputs a number outside (1-4)
	switch (choice){
		case 1:
			printf("You selected 100MB. Cost=50KES\n");
			break;
		case 2:
			printf("You have selected 500 MB.Cost=200KES\n");
			break;
		case 3:
			printf("You selected 1GB.Cost=350KES\n");
			break;
		case 4:
			printf("You selected 2GB.Cost 600KES\n");
			break;
		default:
			printf("Invalid choice\n");
	}
	return 0;
}
