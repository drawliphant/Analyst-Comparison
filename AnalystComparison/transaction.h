//
// Created by drawl_000 on 2/1/2017.
//

#ifndef ANALYSTCOMPARISON_TRANSACTION_H
#define ANALYSTCOMPARISON_TRANSACTION_H
#include <iostream>
#include <string>


class transaction {
private:
    std::string symbol;
    int quantity;
    int pTime;
    int pPrice;
    int pFee;
    int sTime;
    int sPrice;
    int sFee;
public:
    int getTimeOwned();
    int getProfit();
    int getST();
    int getPT();
    std::string getSYM();
    transaction(std::string &Sym,int q,int PT, int PP,int PF, int ST,int SP, int SF);
    ~transaction();
};
#endif //ANALYSTCOMPARER_TRANSACTION_H
