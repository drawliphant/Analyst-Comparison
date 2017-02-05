//
// Created by drawl_000 on 2/1/2017.
//

#include "transaction.h"



transaction::transaction(std::string &Sym,int q,int PT, int PP,int PF, int ST,int SP, int SF){
    symbol=Sym;
    quantity=q;
    pTime=PT;
    pPrice=PP;
    pFee=PF;
    sTime=ST;
    sPrice=SP;
    sFee=SF;

}
int transaction::getTimeOwned(){
    return pTime-sTime;
}
int transaction::getProfit(){
    return quantity*(sPrice-pPrice)-(pFee+sFee);
}
int transaction::getST(){
    return sTime;
}
int transaction::getPT(){
    return pTime;
}
std::string transaction::getSYM(){
    return symbol;
}
transaction::~transaction(){

}