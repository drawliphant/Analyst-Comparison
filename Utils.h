//
// Created by Stephen Clyde on 1/16/17.
//

#ifndef ANALYSTRANKERANDCOMPARER_UTILS_H
#define ANALYSTRANKERANDCOMPARER_UTILS_H

#include <vector>
#include <string>
#include <fstream>
#include "analyst.h"

bool split(const std::string& s, char delimiter, std::string elements[], int expectedNumberOfElements);

std::string getTrimmedLine(std::ifstream& inputStream);
std::string trim(const std::string& str);
std::string ltrim(const std::string& str);
std::string rtrim(const std::string& str);
bool IsNotWhiteSpace (char ch);

std::string centerString(const std::string& str, int width);

void printPerformance(std::vector<analyst> group, int argv);
void printStocks(std::vector<analyst> group, int argv, std::vector<std::string> symb);
#endif //ANALYSTRANKERANDCOMPARER_UTILS_H
