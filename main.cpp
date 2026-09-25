#include <iostream>
using namespace std;

class Color
{
private:
    int red;
    int green;
    int blue;

public:
    void setRed(int r)
    {
        red = r;
    }

    void setGreen(int g)
    {
        green = g;
    }

    void setBlue(int b)
    {
        blue = b;
    }

    int getRed()
    {
        return red;
    }

    int getGreen()
    {
        return green;
    }

    int getBlue()
    {
        return blue;
    }

    void print()
    {
        cout << "Red: " << red
             << ", Green: " << green
             << ", Blue: " << blue << endl;
    }
};

int main()
{
    Color color1;

    color1.setRed(255);
    color1.setGreen(100);
    color1.setBlue(50);

    cout << "Color 1" << endl;
    color1.print();

    return 0;
}