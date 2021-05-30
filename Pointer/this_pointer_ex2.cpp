//example of this pointer
//the program to calculates the power of a number

#include <iostream>
using namespace std;

class power
{
private:
    int num,pow,val;//val variable to store the powered number
public:
    power(){};
    power(int num,int pow)
    {
        this->num=num;//this pointer to diffrentiate the object
        this->pow=pow;
        val=1;//the value will be returned
        if(pow==0)//if the power of a number is zero
        return;

        //if not then the power will be calculated
        for( ; pow>0; pow--)//if the power is greater than zero it will loop the times of power
        val=val*num;//val will be multiplied with number
        
          
    };

    void getdata()
    {
        cout<<val<<endl;
    };
    
};

int main()
{
    power a1(2,3),b1(4,2);//number initialized
    a1.getdata();
    b1.getdata();

return 0;
}


