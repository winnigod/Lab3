#include <stdio.h>

int main(){
	int h, m, s, add, time;
	scanf("%d : %d : %d", &h, &m, &s);
	time = (h * 3600) + (m * 60) + s;
	time = time % (24 * 3600);
	h = time / 3600;
	m = (time % 3600) / 60;
	s = ((time % 3600) % 60);
	printf("Hour:%d\nMinute:%d\nsecond:%d\nNext minutes: ", h, m, s);
	scanf("%d", &add);
	time = (h * 3600) + ((m + add) * 60) + s;
	time = time % (24 * 3600);
	h = time / 3600;
	m = (time % 3600) / 60;
	s = ((time % 3600) % 60);
	printf("\nHour:%d\nMinute:%d\nsecond:%d", h, m, s);
}