//
// Created by drawl_000 on 1/27/2017.
//
#include "analyst.h"
#include "Utils.h"

analyst::analyst(std::fstream & analystIn){
    std::string holder;//just holds strings so that they can be converted to int
    std::getline(analystIn,name);
    std::getline(analystIn,initials);
    std::getline(analystIn,holder);
    time=stoi(holder);
    std::getline(analystIn,holder);
    seedMoney=stoi(holder);
    std::getline(analystIn,holder);
    trades=stoi(holder);

    std::string tHolder[8]={};//make an array of strings to hold a line
    for(int i=0;i<trades;i++){//iterate through all the trades they made
        std::getline(analystIn,holder);//read next line from file
        split(holder,',',tHolder,8);//split the string into an array of strings.
        //std::cout<<tHolder[0];//working
        transaction trans(tHolder[0], stoi(tHolder[1]), stoi(tHolder[2]), stoi(tHolder[3]), stoi(tHolder[4]),//constructs new transaction
                stoi(tHolder[5]), stoi(tHolder[6]), stoi(tHolder[7]));//constructs additional pylons
        //std::cout << trans.getSYM();
        history.push_back(trans);//adds transaction to history
        //std::cout<<history[i].getPrice();
    }

}

int analyst::getD(){
    return time;
}
int analyst::getSeed(){
    return seedMoney;
}
int analyst::getTPL(){
    int sum;
    for(int i=0;i<trades;i++){
        sum+=history[i].getProfit();
    }
    return sum;
}
int analyst::getPLPD(){
    return getTPL()/time;
}
int analyst::getStock(std::string sym){//returns a stock's SPLPD
    float ret=0;
    int min=2147483647;
    int max=0;
    float PL=0;
    for(int i=0;i<trades;i++){
        //std::cout<<history[i].getSYM();
        if(history[i].getSYM()==sym) {

            if (history[i].getST() > max)max = history[i].getST();
            if (history[i].getPT() < min)min = history[i].getPT();
            PL+=history[i].getProfit();
        }
    }
    //ret=PL*float(max-min)/float((60*24));
    ret=PL;
    return ret;

}
std::string analyst::getInitials(){
    return initials;
}

std::string analyst::getName(){
    return name;
}