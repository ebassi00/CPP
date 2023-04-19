/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebassi <ebassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 15:43:20 by ebassi            #+#    #+#             */
/*   Updated: 2023/04/19 15:57:12 by ebassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

void do_op(std::stack<int> &stack, char op)
{
    if (stack.size() < 2)
    {
		std::cout<< "Error: not enough elements for executing operation " << op << std::endl;
		exit(0);
    }
	int	num2 = stack.top();
	stack.pop();
	int	num1 = stack.top();
	stack.pop();

	switch(op){
		case '+':
			num2 = num1 + num2;
			break ;
		case '-':
			num2 = num1 - num2;
			break ;
		case '*':
			num2 = num1 * num2;
			break ;
		case '/':
			num2 = num1 / num2;
			break ;
	}
	stack.push(num2);
}

void calculate(std::string str)
{
    std::stack<int> stack;
    
    for (std::string::size_type i = 0; i < str.size(); i++)
    {
        if (str[i] == ' ')
            continue ;
        else if (str[i] >= '0' && str[i] <= '9')
            stack.push(str[i] - '0');
        else if (str[i] == '+' || str[i] == '-' || str[i] == '/' || str[i] == '*')
            do_op(stack, str[i]);
        else
        {
            std::cout << "Error" << std::endl;
            return ;
        }
    }
    std::cout << stack.top() << std::endl;
}