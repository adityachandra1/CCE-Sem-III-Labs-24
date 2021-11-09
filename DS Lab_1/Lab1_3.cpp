
#include <iostream>
#include <string.h>

using namespace std;

#define N 100

class time{
    private:
    int hrs, minutes, seconds;
    public:
    void display(){
        cout << "Time : " << hrs << " hrs " << minutes << " mins " << seconds << " seconds" << endl;
    }
    void read(){
        int hr, min , sec;
        cin >> hr >> min >> sec;
        hrs = hr;
        minutes = min;
        seconds = sec;
    }
};

time diff;


int main(){
   time t;
   cout << "Enter Time" << endl;
   t.read();
   t.display();
}
