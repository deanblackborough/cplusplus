#include <iostream>
#include <string>

class Question
{
private:
	int type = 1;
	std::string question = {};

	int long_multiplication_values [2] = {};
	int short_division_values [2] = {};
public:
	const int LONG_MULTIPLICATION = 1;
	const int SHORT_DIVISION = 2;	

private:
	std::string nextLongMultiplication()
	{
		return "Long multiplication question";
	}

	std::string nextShortDivision()
	{
		return "Short division question";
	}

public:
	void setType(int question_type)
	{
		type = question_type;
	}

	std::string next()
	{
		if (type == LONG_MULTIPLICATION)
		{
			return nextLongMultiplication();
		}

		return nextShortDivision();
	}

	void userAnswer()
	{

	}

	std::string answer()
	{

	}

	std::string solution()
	{

	}
};


int main()
{
	char quit = {};
	int question_type = {};
	bool quizz = { true };

	std::cout << "Welcome to MathsQuizz" << std::endl;
	std::cout << "Time for some maths questions!" << std::endl;
	std::cout << std::endl;

	while (quizz == true) 
	{
		std::cout << "Please choose the question type" << std::endl;
		std::cout << "--- Enter 1 for Long multiplication:" << std::endl;
		std::cout << "--- Enter 2 for Short division:" << std::endl;
		std::cin >> question_type;

		Question question;

		if (question_type == 1)
		{
			std::cout << "Your long multiplication question is: " << std::endl;
			question.setType(question.LONG_MULTIPLICATION);
		} 
		else if(question_type == 2)
		{
			std::cout << "Your short division question is: " << std::endl;
			question.setType(question.SHORT_DIVISION);
		} 
		else 
		{
			std::cout << "Oops, you selected an option not shown, I'm going to pick an option for you!" << std::endl;
			std::cout << "Your long multiplication question is: " << std::endl;
			question.setType(question.LONG_MULTIPLICATION);
		}

		std::cout << question.next() << std::endl;



		std::cout << "Do you want another question? (y/n)" << std::endl;
		std::cin >> quit;
		if (quit == 'n')
		{
			std::cout << "Bye bye!" << std::endl;
			quizz = false;
		}
	}

	return 0;
}