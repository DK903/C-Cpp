#include <iostream>
using namespace std;
class volume
{
    public:
        double width;
        double length;
        double high;
};
int main(){
    volume volume1;
    double VOLUME;
    volume1.width = 3;
    volume1.length = 4;
    volume1.high = 5.1;
    VOLUME = volume1.width * volume1.length * volume1.high;
    cout << VOLUME << endl;
    return 0;
}
