#include "func.h"
//Написати функцію, що виводить на екран прямокутник з висотою N і шириною K.
void firsttask()
{
    int N;
    int K;
std::cout << "Enter height: " << std::endl;
std::cin >> N;
std::cout << "Enter width: " << std::endl;
std::cin >> K;
    for (int i = 0; i < N; i++) {
            for (int j = 0; j < K; j++) {
                std::cout << "*";
            }
            std::cout << std::endl;
        }
}

//Написати функцію, яка обчислює факторіал переданого їй числа.
void secondtask()
{
    int n;
	int fl = 1;
	std::cout << "Enter number: " << std::endl;
	std::cin >> n;
    for (int i = 1; i <= n; i++) {
		fl *= i;
	}
	std::cout << "Factorial of " << n << " is " << fl << std::endl;
}

//Написати функцію, яка перевіряє, чи є передане їй число простим.
void thirdtask()
{
	int n;
	std::cout << "Enter number: " << std::endl;
	std::cin >> n;
	for (int i = 2; i < n; i++) {
		if (n % i == 0) {
			std::cout << "Number is not simple" << std::endl;
			return;
		}
	}
	std::cout << "Number is simple" << std::endl;
}

//Напишіть функцію, яка повертає куб числа.
void fourthtask()
{
	int n;
	std::cout << "Enter number: " << std::endl;
	std::cin >> n;
	std::cout << "Cube of " << n << " is " << n * n * n << std::endl;
}

//Написати функцію для знаходження найбільшого з двох чисел.
void fifthtask()
{
	int n1, n2;
	std::cout << "Enter first number: " << std::endl;
	std::cin >> n1;
	std::cout << "Enter second number: " << std::endl;
	std::cin >> n2;
	if (n1 > n2) {
		std::cout << "First number is bigger" << std::endl;
	}
	else if (n1 < n2) {
		std::cout << "Second number is bigger" << std::endl;
	}
	else {
		std::cout << "Numbers are equal" << std::endl;
	}
}

//Напишіть функцію, яка повертає істину, якщо передане значення додатне і хибу, якщо від'ємне.
void sixthtask()
{
	int n;
	std::cout << "Enter number: " << std::endl;
	std::cin >> n;
	if (n > 0) {
		std::cout << "Number is positive" << std::endl;
	}
	else if (n < 0) {
		std::cout << "Number is negative" << std::endl;
	}
	else {
		std::cout << "Number is zero" << std::endl;
	}
}

//Написати функцію, яка приймає два параметри: основу степеня та показник степеня і обчислює ступінь числа на основі отриманих даних.
void seventhtask()
{
	int num1, num2;
	std::cout << "Enter number: " << std::endl;
	std::cin >> num1;
	std::cout << "Enter degree : " << std::endl;
	std::cin >> num2;
	int res = 1;
	for (int i = 0; i < num2; i++) {
		res *= num1;
	}
	std::cout << "Result is " << res << std::endl;
}

//Написати функцію, яка отримує як параметри 2 цілих числа і повертає суму чисел з діапазону між ними.
void eighthtask()
{
	int num1, num2;
	std::cout << "Enter first number: " << std::endl;
	std::cin >> num1;
	std::cout << "Enter second number: " << std::endl;
	std::cin >> num2;
	int sum = 0;
	for (int i = num1; i <= num2; i++) {
		sum += i;
	}
	std::cout << "Sum is " << sum << std::endl;
}

//Число називається досконалим, якщо сума всіх його дільників дорівнює йому самому. Напишіть функцію пошуку таких чисел у введеному інтервалі.
void ninthtask()
{
	int num1, num2;
	std::cout << "Enter first number: " << std::endl;
	std::cin >> num1;
	std::cout << "Enter second number: " << std::endl;
	std::cin >> num2;
	for (int i = num1; i <= num2; i++) {
		int sum = 0;
		for (int j = 1; j < i; j++) {
			if (i % j == 0) {
				sum += j;
			}
		}
		if (sum == i) {
			std::cout << i << std::endl;
		}
	}
}

//Напишіть функцію, що виводить на екран передану їй гральну карту.
void tenthtask()
{
	int num;
	std::cout << "Enter number of card[1-13]: " << std::endl;
	std::cin >> num;
	switch (num)
	{
	case 1:
		std::cout << "Ace" << std::endl;
		break;
	case 2:
		std::cout << "Two" << std::endl;
		break;
	case 3:
		std::cout << "Three" << std::endl;
		break;
	case 4:
		std::cout << "Four" << std::endl;
		break;
	case 5:
		std::cout << "Five" << std::endl;
		break;
	case 6:
		std::cout << "Six" << std::endl;
		break;
	case 7:
		std::cout << "Seven" << std::endl;
		break;
	case 8:
		std::cout << "Eight" << std::endl;
		break;
	case 9:
		std::cout << "Nine" << std::endl;
		break;
	case 10:
		std::cout << "Ten" << std::endl;
		break;
	case 11:
		std::cout << "Jack" << std::endl;
		break;
	case 12:
		std::cout << "Queen" << std::endl;
		break;
	case 13:
		std::cout << "King" << std::endl;
		break;
	default:
		break;
	}
}	

//Напишіть функцію, яка визначає, чи є "щасливим" шестизначне число.
void eleventhtask()
{
	int num;
	std::cout << "Enter number: " << std::endl;
	std::cin >> num;
	int sum1 = 0;
	int sum2 = 0;
	for (int i = 0; i < 3; i++) {
		sum1 += num % 10;
		num /= 10;
	}
	for (int i = 0; i < 3; i++) {
		sum2 += num % 10;
		num /= 10;
	}
	if (sum1 == sum2) {
		std::cout << "Number is lucky" << std::endl;
	}
	else {
		std::cout << "Number is not lucky" << std::endl;
	}
}