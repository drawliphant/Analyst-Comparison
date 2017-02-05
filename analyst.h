//
// Created by drawl_000 on 1/27/2017.
//

#include <vector>
#include <fstream>
#include <iostream>
#include "transaction.h"

#ifndef ANALYSTCOMPARISON_ANALYST_H
#define ANALYSTCOMPARISON_ANALYST_H



class analyst {
private:
    std::string name;
    std::string initials;
    int time;
    int seedMoney;
    int trades;
    std::vector<transaction> history;
public:

    analyst(std::fstream &analystIn);

    int getD();
    int getSeed();
    int getTPL();
    int getPLPD();
    int getStock(std::string sym);
    std::string getInitials();
    std::string getName();

};

#endif //ANALYSTCOMPARER_ANALYST_H
