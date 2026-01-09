#include <stdio.h>
int main (void){
	int month, season;
	scanf("%d",&month);
	if (month == 12||month == 1||month == 2){
		season = 1;
	}
	else if (month == 3||month == 4||month == 5){
		season = 2;
    }
	else if (month == 6||month == 7||month == 8){
		season = 3;
	}
	else if (month == 9||month == 10||month == 11){
		season = 4;
	}
	else{
		season = 5;
	}
	switch (season) {
		case 1 : printf("Winter"); break;
		case 2 : printf("Spring"); break;
		case 3 : printf("Summer"); break;
		case 4 : printf("Autumn"); break;
		default : printf("No Season");
	}
	return 0;
}