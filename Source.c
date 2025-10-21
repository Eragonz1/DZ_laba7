#include <locale.h>
#include <stdio.h>

int main() {

	int year;

	puts("УЗНАТЬ В КАКОЙ ДЕНЬ НЕДЕЛИ 1 СЕНТРБРЯ");
	printf("Введите год: ");
	scanf("%d", &year);

	switch (year)
	{
	case (2025):
		printf("1 сентября выпадает на - понедельник");
		break;
	case (2024):
		printf("1 сентября выпадает на - воскресенье");
		break;
	case (2023):
		printf("1 сентября выпадает на - пятницу");
		break;
	case (2022):
		printf("1 сентября выпадает на - четверг");
		break;
	case (2021):
		printf("1 сентября выпадает на - среду");
		break;
	case (2020):
		printf("1 сентября выпадает на - вторник");
		break;
	default:
		break;
	}

	return 0;
}