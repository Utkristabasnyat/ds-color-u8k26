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
};

int main()
{
    Color color1;

    color1.setRed(255);
    color1.setGreen(100);
    color1.setBlue(50);

    cout << color1.getRed() << endl;
    cout << color1.getGreen() << endl;
    cout << color1.getBlue() << endl;

    return 0;
}