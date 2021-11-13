#include <iostream>

using namespace std;

#define N 100

class time{
    public:
    int hrs, minutes, seconds;
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

time diff(time t1, time t2){
    time t3;
    t3.hrs = (t1.hrs - t2.hrs) < 0 ? (t2.hrs - t1.hrs)  : (t1.hrs - t2.hrs) ;
    t3.minutes = (t1.minutes - t2.minutes) < 0 ? (t2.minutes - t1.minutes) : (t1.minutes - t2.minutes);
    t3.seconds = (t1.seconds - t2.seconds) < 0 ? (t2.seconds - t1.seconds) : (t1.seconds - t2.seconds);
    return t3;
}



int main(){
   time t1 , t2;
   cout << "Enter Time" << endl;
   t1.read();
   t2.read();
   t1.display();
   t2.display();

   time t3 = diff(t1, t2);
   t3.display();
}
