/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebassi <ebassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 15:58:11 by ebassi            #+#    #+#             */
/*   Updated: 2023/04/19 16:21:13 by ebassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

long long get_time()
{
	struct timeval tv;
	gettimeofday(&tv, NULL);
	return (tv.tv_sec * 1000000 + tv.tv_usec);
}

int ft_error(std::string error)
{
	std::cout << error << std::endl;
	return (0);
}

int main(int argc, char **argv)
{
	if (argc <= 2)
		return (ft_error("Not enough arguments"));
	std::vector<int> vec;
	std::deque<int> deq;
	
	for (int i = 1; i < argc; i++){
		int	x = atoi(argv[i]);
		if (x <= 0)
			return (ft_error("Error"));
		vec.push_back(x);
		deq.push_back(x);
	}

	std::cout << "Before: ";
	for (std::vector<int>::iterator l = vec.begin(); l != vec.end(); l++)
		std::cout << *l << " ";
	long long	start = get_time();
	vec = merge_insert_sort(vec);
	long long	end = get_time();
	std::cout << "\nAfter: ";
	for (std::vector<int>::iterator l = vec.begin(); l != vec.end(); l++)
		std::cout << *l << " ";
	
	std::cout << "\nTime to process a range of " << argc - 1 <<  " elements with std::vector : " << end - start << " us" << std::endl;
	start = get_time();
	deq = merge_insert_sort(deq);
	end = get_time();
	std::cout << "Time to process a range of " << argc - 1 <<  " elements with std::deque : " << end - start << " us" << std::endl;
	return 0;
}