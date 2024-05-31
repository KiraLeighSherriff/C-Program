#include <stdio.h>

/*Turns seconds into hours mintutes and seconds */

int main(void){

	int num;

	int hours,minutes,seconds;
	int rem;

	
	printf("Enter seconds : ");
	scanf("%d",&num);
	
	hours = (num/3600);// To find out how many hours are in the second

	rem = num - (hours * 3600);//need to take away the hours from the orginal input to get the minutes 
	minutes = rem/60; // the remander of the hours conversted to minutes	

	rem = rem - (minutes*60);//find the remainder of the minutes to get the seconds
	seconds = rem; // the remainder from the minutes is then amount of seconds

	
	printf("%d hour, %d minutes and %d seconds",hours,minutes,seconds);
}
