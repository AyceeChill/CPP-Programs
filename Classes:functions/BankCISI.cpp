//program to calculate SI and CI

#include <iostream>
using namespace std;

class bank
{

private:
    int years;
    float rate_of_interest;
    int principle_amount;
    float return_value;

public:
    bank(){};                        //an empty const to help compiler to find and run next constructors
    bank(int yr, float roi, int pa); //const to get the values
    bank(int yr, int roi, int pa);   //const to get the values if roi is int
    void getdata();
};

bank::bank(int yr, float roi, int pa)
{
    years = yr;
    rate_of_interest = roi;
    principle_amount = pa;

    return_value = pa; //becouse in the first deposit the return value will be the same amount

    //return value for entered year will be

    for (int i = 0; i < years; i++)
    {
        return_value = return_value * (1 + rate_of_interest); //the principle amount that is the return value for first year multiply by the rate of interest of first year
    }
};

bank::bank(int yr, int roi, int pa)
{
    years = yr;
    rate_of_interest = float(roi) / 100; //to convert the int to float
    principle_amount = pa;

    return_value = pa; //becouse in the first deposit the return value will be the same amount

    //return value for entered year will be

    for (int i = 0; i < years; i++)
    {
        return_value = return_value * (1 + rate_of_interest); //the principle amount that is the return value for first year multiply by the rate of interest of first year
    }
};

void bank::getdata()
{
    cout << "the amount " << principle_amount << " after " << years << " year on " << rate_of_interest << " rate of interest is " << return_value << endl;
};

int main()
{

    int y,a;
    float r;


    //if r is float
    cout<<"enter year, rate of interest and principle amount"<<endl;
    cin>>y>>r>>a;
    bank b1(y,r,a);
    b1.getdata();

    //if r is int
    cout<<"enter year, rate of interest and principle amount"<<endl;
    cin>>y>>r>>a;
    bank b2(y,R,a);
    b2.getdata();


        return 0;
}