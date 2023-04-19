/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebassi <ebassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 15:58:31 by ebassi            #+#    #+#             */
/*   Updated: 2023/04/19 16:20:28 by ebassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

std::vector<int>& merge_insert_sort(std::vector<int> &vec)
{
	if (vec.size() <= 1)
		return (vec);
	if (vec.size() <= 5)
	{
		//insertion sort
		for (int i = 1; i < (int)vec.size(); i++)
		{
			int j = i;
			while (j > 0 && vec[j] < vec[j - 1])
			{
				int tmp = vec[j];
				vec[j] = vec[j - 1];
				vec[j - 1] = tmp;
				j--;
			}
		}
	}
	else
	{
		//merge sort
		std::vector<int> left;
		std::vector<int> right;
		for (int i = 0; i < (int)vec.size() / 2; i++)
			left.push_back(vec[i]);
		for (int i = (int)vec.size() / 2; i < (int)vec.size(); i++)
			right.push_back(vec[i]);
		left = merge_insert_sort(left);
		right = merge_insert_sort(right);
		int i = 0;
		int j = 0;
		int k = 0;
		while (i < (int)left.size() && j < (int)right.size())
		{
			if (left[i] < right[j])
			{
				vec[k] = left[i];
				i++;
			}
			else
			{
				vec[k] = right[j];
				j++;
			}
			k++;
		}
		while (i < (int)left.size())
		{
			vec[k] = left[i];
			i++;
			k++;
		}
		while (j < (int)right.size())
		{
			vec[k] = right[j];
			j++;
			k++;
		}
	}
	return (vec);
}

std::deque<int>& merge_insert_sort(std::deque<int> &vec)
{
	if (vec.size() <= 1)
		return (vec);
	if (vec.size() <= 5)
	{
		//insertion sort
		for (int i = 1; i < (int)vec.size(); i++)
		{
			int j = i;
			while (j > 0 && vec[j] < vec[j - 1])
			{
				int tmp = vec[j];
				vec[j] = vec[j - 1];
				vec[j - 1] = tmp;
				j--;
			}
		}
	}
	else
	{
		//merge sort
		std::vector<int> left;
		std::vector<int> right;
		for (int i = 0; i < (int)vec.size() / 2; i++)
			left.push_back(vec[i]);
		for (int i = (int)vec.size() / 2; i < (int)vec.size(); i++)
			right.push_back(vec[i]);
		left = merge_insert_sort(left);
		right = merge_insert_sort(right);
		int i = 0;
		int j = 0;
		int k = 0;
		while (i < (int)left.size() && j < (int)right.size())
		{
			if (left[i] < right[j])
			{
				vec[k] = left[i];
				i++;
			}
			else
			{
				vec[k] = right[j];
				j++;
			}
			k++;
		}
		while (i < (int)left.size())
		{
			vec[k] = left[i];
			i++;
			k++;
		}
		while (j < (int)right.size())
		{
			vec[k] = right[j];
			j++;
			k++;
		}
	}
	return (vec);
}