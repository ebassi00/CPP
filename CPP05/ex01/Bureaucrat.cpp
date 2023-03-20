/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebassi <ebassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 14:37:35 by ebassi            #+#    #+#             */
/*   Updated: 2022/10/11 15:04:27 by ebassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) : _name("Default"), _grade(1) {}

Bureaucrat::Bureaucrat(std::string const &name, int grade) : _name(name), _grade(grade)
{
	if (this->_grade < 1)
		throw (Bureaucrat::GradeTooLowException());
	if (this->_grade > 150)
		throw (Bureaucrat::GradeTooHighException());
	std::cout << "Constructor called on Bureaucrat" << std::endl;
}

Bureaucrat::~Bureaucrat(void)
{
	std::cout << "Destructor called on Bureaucrat" << std::endl;
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return "BureaucratException: Grade too High";
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return "BureaucratException: Grade too Low";
}

std::string const Bureaucrat::getName(void) const
{
	return (this->_name);
}

int	Bureaucrat::getGrade(void) const
{
	return (this->_grade);
}

void Bureaucrat::signForm(Form &form) const
{
	if (form.getSign())
	{
		std::cout << this->getName() << " cannot sign " << form.getName() << " because the form is already signed." << std::endl;
	}
	else if (form.getSignGrade() < this->_grade)
	{
		std::cout << this->getName() << " cannot sign " << form.getName() << " because it's grade is too low." << std::endl;
	}
	else
	{
		std::cout << this->getName() << " signs " << form.getName() << std::endl;
		form.beSigned(*this);
	}
}

std::ostream &operator<<(std::ostream &out, Bureaucrat const &an)
{
	out << "Bureaucrat " << an.getName() << " (Grade " << an.getGrade() << ")";
	return (out);
}