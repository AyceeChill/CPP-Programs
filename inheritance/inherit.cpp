#include <iostream>
using namespace std;

class building
{
private:
    int area;
    int floor;

public:
    building()
    {
        area = 0;
        floor = 0;
    };
    void getdata(int x, int y)
    {
        area = x;
        floor = y;
    };
    void setdata()
    {
        cout << "Building" << endl;
        cout << "Area=" << area << "  "
             << "Floor=" << floor << endl;
    };
};

class Home : public building
{
private:
    int bedroom;
    int bath;

public:
    void getdata(int x, int y)
    {
        bedroom = x;
        bath = y;
    };
    void setdata()
    {
        cout << "Home of given building." << endl;
        cout << "Bedroom=" << bedroom << "  "
             << "Bath=" << bath << endl;
    };
};

class office : public building
{
private:
    int officeroom;
    int hall;

public:
    void getdata(int x, int y)
    {
        officeroom = x;
        hall = y;
    };

    void setdata()
    {
        cout << "Office of given building," << endl;
        cout << "Offices=" << officeroom << "  "
             << "Hall=" << hall << endl;
    };
};

int main()
{
    building a;
    Home b;
    office c;

    a.getdata(4000, 3);
    b.getdata(3, 2);
    c.getdata(2, 1);
    a.setdata();
    b.setdata();
    c.setdata();

    return 0;
}
