/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebassi <ebassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 15:09:45 by ebassi            #+#    #+#             */
/*   Updated: 2023/03/22 14:16:56 by ebassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include <string>
#include <fstream>
#include "AForm.hpp"

class ShrubberyCreationForm : public Form
{

public:
	ShrubberyCreationForm(std::string const &target);
	virtual ~ShrubberyCreationForm(void);
	ShrubberyCreationForm(ShrubberyCreationForm const &other);
	ShrubberyCreationForm &operator=(ShrubberyCreationForm const & rhs);

	class TargetFileException : public std::exception {
		const char *what() const throw();
	};

	class WriteException : public std::exception {
		const char *what() const throw();
	};

	static std::string const &name;
	void execute(Bureaucrat const &executor) const;

private:
	ShrubberyCreationForm(void);
	static std::string const _trees[3];
	std::string const _target;
};

#endif