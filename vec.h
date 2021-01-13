#pragma once
#include <vector>
#include <iostream>

void print_vec_elements(std::vector<double> v);


double dot_sum(std::vector<double> v1, std::vector<double> v2);

double magnitude(std::vector<double> a);
std::vector < double > v_minus(std::vector<double> b, std::vector<double> a);
std::vector<double> v_subtract(std::vector<double> a, std::vector<double> b);
std::vector < double > v_add(std::vector<double> b, std::vector<double> a);
std::vector < double > v_scale(std::vector<double> a, double b);
std::vector<double> add_val(std::vector<double> b, double c);
std::vector<double> cross_product(std::vector<double> b, std::vector<double> c);
