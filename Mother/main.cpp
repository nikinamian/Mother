//
//  main.cpp
//  Mother
//
//  Created by Niki Namian on 12/5/24.
//

#include <iostream>

using namespace std;

class Mother
{
public:
    //declare a virtual function
    virtual void printInfo()
    {
        cout<<"Mother class.\n";
    }
};
class BabyA:public Mother
{
public:
    void printInfo()
    {
        cout<<"BabyA class.\n";
    }
};
class BabyB:public Mother
{
public:
    void printInfo()
    {
        cout<<"BabyB class.\n";
    }
};

int main()
{
    //declare an array of the mother pointer
    Mother*ptrMotherArray[3];
    
    //POLYMORPHISM
    //asigns values to the array
    //all subclasses of the Mother class are the Mother
    ptrMotherArray[0]=new Mother();
    ptrMotherArray[1]=new BabyA();
    ptrMotherArray[2]=new BabyB();
    
    //calls a function from each object
    for(int i=0;i<3;i++){
        ptrMotherArray[i]->printInfo();
    }
    return 0;
}
