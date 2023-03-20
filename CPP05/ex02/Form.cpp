/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebassi <ebassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 15:10:18 by ebassi            #+#    #+#             */
/*   Updated: 2022/10/11 16:39:23 by ebassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(std::string const &name, int const grade_required, int const grade_execute) : _name(name), _sign(false),
				_grade_required(grade_required), _grade_execute(grade_execute)
{
	std::cout << "Constructor called on Form" << std::endl;
}

Form::Form(Form const & rhs) : _name(rhs._name), _sign(rhs._sign), _grade_required(rhs._grade_required), _grade_execute(rhs._grade_execute)
{
	if (this->_grade_required < 1 || this->_grade_execute < 1)
		throw Form::GradeTooHighException();
	else if (this->_grade_required > 150 || this->_grade_execute > 150)
		throw Form::GradeTooLowException();
}

Form::~Form(void)
{
	std::cout << "Destructor called on Form" << std::endl;
}

Form& Form::operator=(Form const & rhs)
{
	this->_sign = rhs._sign;
	return (*this);
}

const char* Form::GradeTooHighException::what() const throw()
{
	return "FormException: Grade too High";
}

const char* Form::GradeTooLowException::what() const throw()
{
	return "FormException: Grade too Low";
}

const char* Form::FormAlreadySignedException::what() const throw()
{
	return "FormException: Already signed";
}

const char* Form::UnsignedFormException::what() const throw()
{
	return "FormException: Unsigned";
}

std::string const &Form::getName(void) const
{
	return (this->_name);
}

int	Form::getSignGrade(void) const
{
	return (this->_grade_required);
}

int	Form::getExecuteGrade(void) const
{
	return (this->_grade_execute);
}

bool Form::getSign(void) const
{
	return (this->_sign);
}

void Form::beSigned(Bureaucrat const &rhs)
{
	if (rhs.getGrade() > this->getSignGrade())
		throw Form::GradeTooLowException();
	else if (this->_sign)
		throw Form::FormAlreadySignedException();
	this->_sign = true;
}

void Form::execute(Bureaucrat const & executor) const
{
	if (executor.getGrade() > this->getExecuteGrade())
		throw Form::GradeTooLowException();
	if (!this->getSign())
		throw Form::UnsignedFormException();
}

std::ostream &operator<<(std::ostream &out, Form const &an)
{
	out << "Form " << an.getName() << " (Status " << an.getSign() << ") (Grade to Sign " << an.getSignGrade() << 
		") (Grade to Execute " << an.getExecuteGrade() << ")" << std::endl;
	return (out);
}