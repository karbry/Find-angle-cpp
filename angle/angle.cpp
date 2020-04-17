

#include <iostream>

using namespace std;

void angle(double h, double m) {
    double result;
    double partofhour = m * 0.0166666666666667 * 30;

    m = m / 5;
    if (h > m) {
        result = (h - m)*30;
        
    }
    else result = (m - h) * 30;
    
    
    result += partofhour;


    if (result > 180) {
        result = 360 - result;
    }
    cout << result << "*";
}
int main()
{
    angle(6, 5);
}


