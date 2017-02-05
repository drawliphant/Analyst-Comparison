#include "analyst.h"
#include "Utils.h"
#include <iomanip>

using namespace std;

int main(int argv, char* argc[])
{


    vector<string> symb={"AAPL","AMZN","GOOGL","MSFT"};//I'm sorry I didn't have time to make this part of the program dynamic
    //if you are grading and want to make sure my program can handle more stock symbols you can edit them here.
    fstream fileIn[argv-1];
    std::vector <analyst> group;

    for(int i=1;i<argv;i++){//iterate through program arguments, skipping title
        fileIn[i-1].open(argc[i]);//open a file with each program arg

        if (fileIn[i-1].fail()){//if the file failed to open
            std::cout<<"file didn't open correctly"<<std::endl;
            exit(1);
        }

        group.push_back(analyst(fileIn[i-1]));//create an analyst withe the opened file and add it to the vector<analyst> group
        //std::cout<<group[i-1].getHistory(2).getPrice();//test their history

   }
    cout<<"Analyst Comparer"<<std::endl;
    cout<<"Analysts:"<<std::endl<<std::endl;
    printPerformance(group,argv);
    printStocks(group,argv,symb);
    cin.get();//holds the program so i can read it


}
