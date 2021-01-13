#pragma once
#include "vec.h"
#include <math.h>

void print_vec_elements(std::vector<double> v)
{
	for (std::vector<double>::iterator vec_it = v.begin(); vec_it < v.end(); vec_it++)
	{
		if (vec_it == v.begin())
		{

			std::cout << "-----------------" << "\n";

		}
		std::cout << *vec_it << ',';
	}

	std::cout << "\n";
	std::cout << "-----------------";
}

double dot_sum(std::vector<double> v1, std::vector<double> v2)
{
	double dsum = 0;
	for (unsigned i = 0; i < v1.size(); i++)
	{
		dsum += v1[i] * v2[i];
	}
	return dsum;
}


std::vector < double > v_scale(std::vector<double> a, double b)
{
	std::vector<double> scaled_vec;
	for (unsigned int i = 0; i < scaled_vec.size(); i++)
	{
		scaled_vec[i] = b * a[i];
	}
	return scaled_vec;
}

double magnitude(std::vector<double> a)
{
	double sum = 0;

	return sum;
	
}

std::vector<double> v_subtract(std::vector<double> a, std::vector<double> b)
{
	std::vector<double> summed_vec = {};
	for (unsigned int i = 0; i < summed_vec.size(); i++)
	{
		summed_vec[i] = a[i] - b[i];
	}
	return summed_vec;
}

std::vector < double > v_add(std::vector<double> b, std::vector<double> a)
{
	std::vector<double> summed_vec;
	for (unsigned int i = 0; i < b.size(); i++)
	{
		summed_vec.push_back(a[i] - b[i]);
	}
	return summed_vec;
}
std::vector < double > v_minus(std::vector<double> b, std::vector<double> a)
{
	std::vector<double> summed_vec;
	for (unsigned int i = 0; i < b.size(); i++)
	{
		summed_vec[i] = a[i] - b[i];
	}
	return summed_vec;
}

std::vector<double> cross_product(std::vector<double> a, std::vector<double> b)
{
	std::vector<double> new_vec = {};


	for (unsigned int i = 0; i < 2; i++)
	{
		new_vec.push_back(a[1] * b[2] - a[2] * b[1]);
		new_vec.push_back(-1 * (a[2] * b[0] - a[0] * b[2]));
		new_vec.push_back(a[0] * b[1] - a[1] * b[0]);
	}

	return new_vec;
}

std::vector<double> add_val(std::vector<double> b, double c)
{
	for (unsigned int i = 0; i < b.size(); i++)
	{
		b[i] += c;
	}
	return b;
}
