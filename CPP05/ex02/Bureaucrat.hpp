/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebassi <ebassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 14:37:32 by ebassi            #+#    #+#             */
/*   Updated: 2023/03/22 14:14:44 by ebassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <string>
#include <iostream>
#include "AForm.hpp"

class Form;

class Bureaucrat
{

public:
	Bureaucrat(void);
	Bureaucrat(std::string const &name, int grade);
	Bureaucrat(Bureaucrat const & rhs);
	Bureaucrat& operator=(Bureaucrat const & rhs);
	virtual ~Bureaucrat(void);
	
	class GradeTooHighException : public std::exception {
		const char *what() const throw();
	};

	class GradeTooLowException : public std::exception {
		const char *what() const throw();
	};

	std::string const getName(void) const;
	int getGrade(void) const;
	void signForm(Form &form) const;
	void executeForm(Form const & form) const;

private:
	std::string const _name;
	int	_grade;
};

std::ostream& operator<<(std::ostream& os, Bureaucrat const & an);

#endif