#include <iostream>

using namespace std;
/*
 * Create classes Rectangle and RectangleArea
 */
class Rectangle
{
    public:
    int a,b,multi;
    
    void read_input()
    {
        a=10;
        b=5;  
    };
    void display()
    {
      multi = a*b;  
    };
    
};

class RectangleArea : public Rectangle
{
    public:
    void display()
    {
        cout<<a<<" "<<b<<endl;
        cout<< multi;
    };
    
    
};

int main()
{
    /*
     * Declare a RectangleArea object
     */
    RectangleArea r_area;
    
    /*
     * Read the width and height
     */
    r_area.read_input();
    
    /*
     * Print the width and height
     */
    r_area.Rectangle::display();
    
    /*
     * Print the area
     */
    r_area.display();
    
    return 0;
}