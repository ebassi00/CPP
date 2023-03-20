/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebassi <ebassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 15:10:21 by ebassi            #+#    #+#             */
/*   Updated: 2022/10/10 17:53:58 by ebassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{

public:
	Form(std::string const &name, int const grade_required, int const grade_execute);
	Form(Form const & rhs);
	Form& operator=(Form const & rhs);
	virtual ~Form(void);

	class GradeTooHighException : public std::exception {
		const char *what() const throw();
	};

	class GradeTooLowException : public std::exception {
		const char *what() const throw();
	};

	class FormAlreadySignedException : public std::exception {
		const char *what() const throw();
	};

	std::string const &getName(void) const;
	int getSignGrade(void) const;
	int getExecuteGrade(void) const;
	bool getSign(void) const;
	void beSigned(Bureaucrat const &rhs);

private:
	Form(void);
	std::string const &_name;
	bool _sign;
	int const _grade_required;
	int const _grade_execute;
};

std::ostream &operator<<(std::ostream &out, Form const &form);

#endif