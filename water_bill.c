/*
NAME:NGUNJIRI LUCY WAKURAYA
REGISTRATION NO:CT101/G/26451/25
DESCRIPTION:A PROGRAM DISPLAYING A WATER BILL CALCULATOR
*/

#include <stdio.h>
int main() {
float units,total_bill;

//prompt the user to enter the amount of units consumed
printf("Enter the number of water units consumed: ");
scanf("%f", &units);

if (units<=30) {
	total_bill=units*20;
}
else if(units>=31 && units<=60) {
	total_bill=units*25;
}
else{
	total_bill=units*30;
}
 printf("Your total bill is %.2f KES\n", total_bill);
return 0;
}