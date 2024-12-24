#include <iostream>
#include <cmath>

int fibonacci(int n) {
	if (n <= 0) return 0;       
	if (n == 1 || n == 2) return 1; 
	int prev = 1, curr = 1, next;
	for (int i = 3; i <= n; ++i) {
		next = prev + curr;
		prev = curr;
		curr = next;
	}
	return curr;
}

int main()
{
	int number;
	int step = 0;
	int counter;
	int i = 0;


	std::cout << "\nEnter the numeric for algebraic progression: ";
	std::cin >> number;
	std::cout << "\nEnter the number of repetitions ";
	std::cin >> counter;

	while (i < counter)
	{
		if (i <= 0)
		{
			step = number + number;
			i++;
			std::cout << "\nStep Number:" << i << std::endl << step;
		}
		else
		{
			step = step + number;
			i++;
			std::cout << "\nStep Number:" << i << std::endl << step;
		}
	}

	std::cout << "\nThe end result is " << step;
	//This is working, but somehow feels not right.

	/*int j, k;
	char s;

	std::cout << "\n\nEnter number of lines: ";
	std::cin >> j;
	std::cout << "\nEnter the length of a line: ";
	std::cin >> k;
	std::cout << "\nEnter the symbol to build with: ";
	std::cin >> s;



	for (int l = 0; l < j; l++)
	{
		for (int si = 0; si < k; si++)
		{
			std::cout << s;
		}
		std::cout << std::endl;
	}*/
	//First experimental try.


	int shape = 0;
	char s;

		std::cout << "\n\nChoose a shape(1 = triangle, 2 = reverse triangle, 3 = rectangle/square): ";
		std::cin >> shape;

		if (shape < 1 || shape > 3) 
		{
			std::cout << "\nWrong shape number. Please, enter 1 for a triangle, 2 for a reverse triangle and 3 for a rectangle or a square.";
			return 1;
		}
		//Is it possible to return form here to previous command instead of finishing the program? looked online but didn't looked very hard so didn't find anything.
		
		switch (shape)
		{
		case 1: //triangle.
		{
			int height;
			std::cout << "Enter the height of the triangle: ";
			std::cin >> height;
			std::cout << "\nEnter the symbol to build with: ";
			std::cin >> s;

			for (int i = 1; i <= height; i++)
			{
				for (int j = 1; j <= i; j++) {
					std::cout << s;
				
				}
				std::cout << std::endl;
			}
			break;
		}
		case 2: //reverse triangle.
		{
			int height;
			std::cout << "Enter the height of the triangle: ";
			std::cin >> height;
			std::cout << "\nEnter the symbol to build with: ";
			std::cin >> s;

			for (int i = 0; i <= height; i++)
			{
				for (int j = i; j < height; j++) {
					std::cout << s;

				}
				std::cout << std::endl;
			}
			break;
		}
		case 3: //square or rectangle.
		{
			int j, k;
			char s;

			std::cout << "\n\nEnter number of lines: ";
			std::cin >> j;
			std::cout << "\nEnter the length of a line: ";
			std::cin >> k;
			std::cout << "\nEnter the symbol to build with: ";
			std::cin >> s;



			for (int l = 0; l < j; l++)
			{
				for (int si = 0; si < k; si++)
				{
					std::cout << s;
				}
				std::cout << std::endl;
			}
		}
        }
		//probably posssible to type out different objects, like a diamond or a circle, but will experiment with it later.
		//Nonetheless, gained better understanding of what switch is and what for we can use it.


 char input;
 int sum = 0;

 std::cout << "\n\nEnter the symbol (for ending the program type '.'): ";
 while (true) {
	 std::cin >> input;
	 if (input == '.') 
	 {
		 std::cout << "Thank you for choosing VLT Airline.";
		 break;
	 }
	 if (islower (input)) 
	 {
		 char upper = toupper(input);
		 std::cout << "\nCharacter " << input << " is lower case. Changing to upper: " << upper;
	 }
	 else if (isdigit(input))
	 {
		 int digit = input - '0';
		 sum += digit;
		 std::cout << "\nDigit: " << digit << " was added to the sum. Current sum = " << sum;
	 }
	 else {
		 std::cout << "\nSomething went wrong. Please, enter either letter or a digit.";
	 }
 }
 //The problem with digit input is that it count 99 as 9 and 9, instead of 99. Will take a look a little bit later, for now this is working.
 //Also need to be more attentive. Tried to input - 0 and wondered "why i get 53 if enter 5?"


int n;
std::cout << "\n\nEnter Fibonacci sequence number: ";
std::cin >> n;

if (n <= 0) {
	std::cout << "\nThe number must be positivbe.";
}
else {
	std::cout << "\nNumber " << n << " of Fibonacci sequence: " << fibonacci(n);
}
//I don't really know what is fibonacci sequence and don't really know if that code is correct. Sadly, at the moment I don't have enough time to read about it, so will return later.
//Looked for an answer online.

int fac;
long factorial = 1.0;

std::cout << "\n\nEnter a positive number: ";
std::cin >> fac;

if (fac < 0)
	std::cout << "\nPlease, make sure you have entered a positive number.";
else {
	for (int i = 1; i <= fac; ++i) {
		factorial *= i;
	}
	std::cout << "\nFactorial of " << fac << " = " << factorial;
}
//at least factorial is known to me. Was easier than I expected.


return 0;
}


