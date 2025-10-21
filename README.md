# Домашнее задание к работе 7
## Условие задачи
<b>Варинат 8</b>

Определить на какой день недели приходится 1 сентября произвольно
заданного года XXI века.
## 1. Реализация программы
```
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
```
## 2. Результаты работы программы
<img width="483" height="178" alt="image" src="https://github.com/user-attachments/assets/82e8b6aa-6e39-418a-be1b-bd57f989cca0" />

## 3. Информация о разработчике
> З.Д. бИЦ-251
