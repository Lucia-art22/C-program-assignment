/*
NAME:NGUNJIRI LUCY WAKURAYA
REGISTRATION NUMBER:26451
DESCRITION:A PROGRAM THAT CHECKS IF A STUDENT IS ELIGIBLE FOR FINAL EXAMS.
*/

#include <stdio.h>

int main() {
    float attendance,mark;
    
    //input
	
 printf("Enter your mark: ");
 scanf("%f",&mark);
    
    printf("Enter attendance:");
    scanf("%f",&attendance);
    
    //check eligibility
 if(mark >=40 && attendance>=75){
 printf("You are eligible for the final exam\n");
    }else{
    printf("Not eligible for the final exam\n");
}
    return 0;
}