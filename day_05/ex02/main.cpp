#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
	std::cout << "__________________too low Exceptions_______________________" << std::endl;
	{
		try{
			Bureaucrat bob("Bob", 153);
		}
		catch (Bureaucrat::TooLowException& e)
		{
			std::cout << "Too Low" << std::endl;
		}
		catch (Bureaucrat::TooHighException& e)
		{
			std::cout << "Too High" << std::endl;
		}
	}
	std::cout << "__________________too high Exceptions_______________________" << std::endl;
	{
		try{
			Bureaucrat bob("Bob", 0);
		}
		catch (Bureaucrat::TooLowException& e)
		{
			std::cout << "Too Low" << std::endl;
		}
		catch (Bureaucrat::TooHighException& e)
		{
			std::cout << "Too High" << std::endl;
		}
	}
	std::cout << "____________________no exception_____________________" << std::endl;
	{
		try{
			Bureaucrat bob("Bob", 1);
			Bureaucrat jim("Jim", 50);
			Bureaucrat dav("Dav", 150);
		}
		catch (Bureaucrat::TooLowException& e)
		{
			std::cout << "Too Low" << std::endl;
		}
		catch (Bureaucrat::TooHighException& e)
		{
			std::cout << "Too High" << std::endl;
		}
	}
	std::cout << "____________________ex_01_____________________" << std::endl;
	{
		try{
			Bureaucrat jim("President", 1);
			ShrubberyCreationForm	f("Jean Eude");
			RobotomyRequestForm	g("Bernard");
			PresidentialPardonForm	r("Donatian");
			// Form		*d = new Form("form2", 20, 20);
			jim.signForm(f);
			jim.executeForm(f);
			jim.signForm(g);
			jim.executeForm(g);
			jim.signForm(r);
			jim.executeForm(r);
		}
		catch (Bureaucrat::TooLowException& e)
		{
			std::cout << "Too Low" << std::endl;
		}
		catch (Bureaucrat::TooHighException& e)
		{
			std::cout << "Too High" << std::endl;
		}
	}
}
