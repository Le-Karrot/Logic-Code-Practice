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
	//the following excercises were given by google overview as startups

	//loop that shows even numbers between 0 up to users given number
	//user will enter a number 
	/*
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


	//the following are from geek for geek. For these kind of exercices I will only go by what the prompt is asking for and not sign in into the site

	//print number pattern(e.g. if user enter 3 output should be 333222111 332211 321) constraints 1 >= n <= 40

	int n; //will be use to indicate the number sequence the pattern will follow

	std::cout << "Enter a number: ";
	std::cin >> n;

	std::cout << "The pattern is: \n";

	int counter = n; //use a iteration coutner for rows and printing number
	int temp = n;//to keept the initial pattern number and not modifing it accidentally;

	for (int i = counter; i > 0; i--) //outter loop keeps count of how many iteration for n time for rows
	{
		for (int j = temp; j > 0; j--)//first inner loop will keep track of decreasing next number after each print
		{
			for (int k = counter; k > 0; k--)//second inner loop will determine how many n to print n times before decreasing
			{
				std::cout << n;
			}
			n--; //decreases n after each iteration
		}
		std::cout << "-1. ";//instead of new line it will display a -1 at the end of each iteration
		
		n = temp;
		counter--;
	}
	
	//Series AP given the first 2 terms a1 and a2 of an Arithmetic Series. Find the nth term of the series. 

	int  a1, a2, n;

	std::cout << "Enter first term: ";
	std::cin >> a1;

	std::cout << "Enter second term: ";
	std::cin >> a2;

	std::cout << "Enter n^th term to find: ";
	std::cin >> n;

	int d = a2 - a1; //common difference

	int nth_term = a1 + (n - 1) * d; //nth term formula

	std::cout << "The " << n << " term is: " << nth_term;

	*/

	//Series GP given three intergers a, r, and n. First interger a is geometric progression, r is common ratio, and n is the position you need to find. Calculate the n^th term of the GP series.
	
	int a, r, nth;

	int mod = 10000000007;


	std::cout << "Enter first term: ";
	std::cin >> a;

	std::cout << "Enter common ratio: ";
	std::cin >> r;

	std::cout << "Enter n term to search: ";
	std::cin >> nth;

	



}