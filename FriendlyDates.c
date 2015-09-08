#include <stdio.h>
#include <string.h>

char* findDay(int dayNum);
char* findMonth(int monthNum);

int main(void){
	char* buf;
	int year1, year2, month1, month2, day1, day2;
	scanf("%d-%d-%d %d-%d-%d %s", &year1, &month1, &day1, &year2, &month2,
		&day2, buf);
	printf("%d-%d-%d %d-%d-%d %s\n", year1, month1, day1, year2, month2,
		day2, buf);
}

char* findDay(int dayNum){
	char dayNumString[2];
	sprintf(dayNumString, "%d", dayNum);
	char* ret;
	if(dayNum == 1 || dayNum == 21 || dayNum == 31){
		char end[2] = "st";
		ret = strcat(dayNumString, end);
		return ret;
	}
	else if(dayNum == 2 || dayNum == 22){
		char end[2] = "nd";
		ret = strcat(dayNumString, end);
		return ret;
	}
	else if(dayNum == 3 || dayNum == 23){
		char end[2] = "rd";
		ret = strcat(dayNumString, end);
		return ret;
	}
	else{
		char end[2] = "th";
		ret = strcat(dayNumString, end);
		return ret;
	}
}

char* findMonth(int monthNum){
	if(monthNum == 1){
		return "January";
	}
	else if(monthNum == 2){
		return "February";
	}
	else if(monthNum == 3){
		return "March";
	}
	else if(monthNum == 4){
		return "April";
	}
	else if(monthNum == 5){
		return "May";
	}
	else if(monthNum == 6){
		return "June";
	}
	else if(monthNum == 7){
		return "July";
	}
	else if(monthNum == 8){
		return "August";
	}
	else if(monthNum == 9){
		return "September";
	}
	else if(monthNum == 10){
		return "October";
	}
	else if(monthNum == 11){
		return "November";
	}
	else if(monthNum == 12){
		return "December";
	}
}