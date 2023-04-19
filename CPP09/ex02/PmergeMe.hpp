/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebassi <ebassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 15:58:29 by ebassi            #+#    #+#             */
/*   Updated: 2023/04/19 15:59:47 by ebassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <vector>
#include <deque>
#include <sys/time.h>
#include <stdlib.h>

std::vector<int>& merge_insert_sort(std::vector<int> &vec);
std::deque<int>& merge_insert_sort(std::deque<int> &vec);