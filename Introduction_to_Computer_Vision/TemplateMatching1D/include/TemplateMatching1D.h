#ifndef _TEMPLATE_MATCHING_H_
#define _TEMPLATE_MATCHING_H_
#include <iostream>
#include <vector>
#include <cstring>
#include <cmath>

void templateMatching1D(const std::vector<int> &s, const std::vector<int> &t, size_t &index);
void displayArray(const std::string &in_s, const std::vector<int> &in_v);
void displayArray(const std::string &in_s, const std::vector<double> &in_v, const int &offset);

#endif
