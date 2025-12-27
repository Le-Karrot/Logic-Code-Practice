/*
Author: Kevin Ramirez
Date: 12/23/2025
Program: Practice.cpp
Purpose: To reveiw/practice on my logic code fundamentals
*/

#include <iostream>
#include <iomanip>
#include <string>

/*
Exercises will be for interview questions increasing in difficulty.
The exercises should consist of algorithms such as loops or if statements, work with differents data structures.
Goal is to master the fundamentals and increase my mastery in logical code thinking/planning when creating programs by deep diving and understanding the problem at hand.
Practice thinking smaller till the whole picture is crafted.

The exercises I find online are from geek for geek and more.
After finishing on exercise I will comment it out indicating completion.
*/


int main()
{

	//before actually starting exercises, will actually start by getting better a loops as they will help stregthen algorithm knowlegde
	
	//loop that shows even numbers between 0 up to users given number

	//user will enter a number 
	int e_num;
	std::cout << "Even number finder.\n";
	std::cout << "Enter a number: ";
	std::cin >> e_num;

	for (int i = 0; i <= e_num; i+=2)
	{
		std::cout << i << ", ";
	}

	//a loop that shows prime numbers from 0 up to users given number

	int p_num;

	std::cout << "\nPrime number finder.\n";
	std::cout << "Enter a number: ";
	std::cin >> p_num;

	for (int i = 0; i <= p_num; i++)
	{
		if (i % 2 != 0) 
		{
			std::cout << i << ", ";
		}
	}
	

	//calculating the sum from 1 up to users given number

	int num, sum = 0;
	
	std::cout << "Sum of numbers.\n";
	std::cout << "Enter a number: ";
	std::cin >> num;

	for (int i = 0; i <= num; i++)
	{
		sum += i;
	}
	std::cout << "sum of number is: " << sum;
	

	//factorial of a number

	int factorial;
	int initial;
	int factoral_sum = 0;

	std::cout << "Factorial of a number.\n";
	std::cout << "Enter a number: ";
	std::cin >> factorial;

	initial = factorial;

	for (int i = initial - 1; i > 0; i--)
	{

		factoral_sum = factorial * i;

		factorial = factoral_sum;

	}
	
	std::cout << "The sum is: " << factoral_sum;

	

	//mulitplication table prints out users given number up to n time(limit n to 12)

	int num;
	int sum = 0;

	int reverse = 0;//to reverse num so table can be in acsending order
	
	std::cout << "Multiplication table.\n";
	std::cout << "Enter a number: ";
	std::cin >> num;

	std::cout << "| " << std::setfill(' ') << std::setw(5) << "Current number :" << reverse << " | " << std::setfill(' ') << std::setw(7) << " Sum " << " | \n";

	for (int i = 0; i <= num; i++)
	{
		for (int j = 0; j <= 12; j++)//condition is 12 rows and to multiply num up to 12 times
		{
			sum = reverse * j;

			std::cout << "| " << std::setfill(' ') << std::setw(12) << " " << reverse << " * " << j << " | " << std::setfill(' ') << std::setw(7) << sum << " | \n";
			std::cout << std::setfill('-') << std::setw(33) << " \n";
		}

		reverse++;
		std::cout << "| " << std::setfill(' ') << std::setw(5) << "Current number :" << reverse << " | " << std::setfill(' ') << std::setw(7) << " Sum " << " | \n";
		std::cout << std::setfill('-') << std::setw(33) << " \n";
	}
	

	//fibonacci sequence (e.g. 0, 1, 1, 2, 3, 5, 8, 13...)

	std::cout << "Fibonacci sequnce to first 10 terms.\n";

	int next_number = 1; //load the next number
	int previous_number; //store previous number 
	int current_sequence = 0; //current number


	for (int i = 0; i < 10; i++)
	{

		std::cout << current_sequence << ", "; //output current number in fibonacci sequence

		previous_number = current_sequence; //first set a variable to the previous number to save that value to sum later

		current_sequence = next_number; //second lets load the next number to print

		next_number = previous_number + current_sequence; //finally we update the next number to load it for next iteration
		
	}
	


	//reverse a number 

	std::cout << "Reversing order of any number(must be greater than 1).\n";

	std::string number;

	std::cout << "Enter a number: ";
	std::cin >> number;

	for(int i = number.length(); i >= 0; i--)
	{
		std::cout << number[i] << " ";
	}

	

}