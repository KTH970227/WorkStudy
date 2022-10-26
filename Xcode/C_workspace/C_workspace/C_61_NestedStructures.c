#define _CRT_SECURE_NO_WAIRRINGS
#include <stdio.h>
#define LEN 20

//중접 구조체(Nested Structures)
//구조체를 다른 구조체의 멤버로 사용하기

struct names {
	char given[LEN];
	char family[LEN];
};

struct reservation {
	struct names guest;
	struct names host;
	char food[LEN];
	char place[LEN];

	//time
	int year;
	int month;
	int day;
	int hours;
	int minutes;
};

int main()
{
	//초기화
	struct reservation res = {
		.guest = {"Nick", "Carraway"},
		.host = { "Jay", "Gatsby" },
		.place = {"the Gatsby mansion"},
		.food = {"Escargot"},
		.year = 1925,
		.month = 4,
		.day = 10,
		.hours = 18,
		.minutes = 30
	};

	//Dear Nick Carraway,
	//I would like to serve you Escargot.
	//Please visit the Gatsby mansion on 10/4/1925 at 18:30.
	//Sincerely,
	//Hay Gatsby

	const char* formatted = 
	"Dear %s %s, \nI would like to serve you %s.\nPlease visit %s on %d/%d/%d at %d:%d.\nSincerely,\n%s %s\n";

	printf(formatted, res.guest.given, res.guest.family, 
					  res.food, 
					  res.place, res.month, res.day, res.year, res.hours, res.minutes, 
					  res.host.given, res.host.family);

	printf("\nDear %s %s,\n", res.guest.given, res.guest.family);
	printf("I would like to serve you %s.\n", res.food);
	printf("Please visit %s on %d/%d/%d at %d:%d.\n", res.place, res.month, res.day, res.year, res.hours, res.minutes);
	printf("Sincerely,\n");
	printf("%s %s\n", res.host.given, res.host.family);
}