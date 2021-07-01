/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edepauw <edepauw@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 13:17:41 by edepauw           #+#    #+#             */
/*   Updated: 2021/07/01 13:19:31 by edepauw          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

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
	std::cout << std::endl;
	std::cout << "____________________ex_01_____________________" << std::endl;
	{
		try{
			Bureaucrat jim("Jim", 50);
			Form		f("form1", 80, 80);
			Form		d("form2", 20, 20);
			jim.signForm(&f);
			jim.signForm(&d);
		}
		catch (std::exception& e)
		{
			std::cout << e.what() << std::endl;
		}
	}
}
