﻿#include <stdio.h> //Підключення бібліотеки

int main() //Підключення головної функції
{

	float c, f, C = 0.0, F; //Введення змінних
	printf("vv temp v F!\n"); //Виведення тексту на екран
	scanf_s("%f", &f); //Зчитування даних та їх запис у змінну F
	printf("vv temp v C!\n"); //Виведення тексту на екран
	scanf_s("%f", &c); //Зчитування даних та їх запис у змінну С

	C = (f - 32) * (5.0 / 9); //Формула для обчислення
	F = c * (9.0 / 5) + 32; //Формула для обчислення

	printf("temp v C = %f\n", C); //Виведення тексту на екран
	printf("temp v F = %f\n", F); //Виведення тексту на екран

	return 0; //Успішне завершення програми з кодом 0
}
