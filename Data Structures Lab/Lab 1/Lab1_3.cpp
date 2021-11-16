#include <iostream>

using namespace std;

class time {
   public:
    int hrs, minutes, seconds;
    void display() {
        cout << "Time : " << hrs << " hrs " << minutes << " mins " << seconds << " seconds" << endl;
    }
    void read() {
        cout << "Enter Hrs: " << endl;
        cin >> hrs;
        cout << "Enter Minutes: " << endl;
        cin >> minutes;
        cout << "Enter Seconds" << endl;
        cin >> seconds;
        cout << endl;
    }
};

time diff(time t1, time t2) {
    time t3;
    t3.hrs = (t1.hrs - t2.hrs) < 0 ? (t2.hrs - t1.hrs) : (t1.hrs - t2.hrs);
    t3.minutes = (t1.minutes - t2.minutes) < 0 ? (t2.minutes - t1.minutes) : (t1.minutes - t2.minutes);
    t3.seconds = (t1.seconds - t2.seconds) < 0 ? (t2.seconds - t1.seconds) : (t1.seconds - t2.seconds);
    return t3;
}

time sum(time t1, time t2) {
    time t3;
    int carry = 0;
    t3.seconds = t1.seconds + t2.seconds;
    t3.minutes = t1.minutes + t2.minutes;
    t3.hrs = t1.hrs + t2.hrs;

    if (t3.seconds >= 60) {
        t3.minutes++;
        t3.seconds %= 60;
    }
    if (t3.minutes >= 60) {
        t3.hrs++;
        t3.minutes %= 60;
    }
    return t3;
}

int main() {
    time t1, t2;

    cout << "Enter Time 1" << endl;
    t1.read();
    cout << "Enter Time 2" << endl;
    t2.read();

    cout << "Time 1 : ";
    t1.display();
    cout << "Time 2 : ";
    t2.display();

    int opt;
    time t3;
    cout << "Enter 1 to add \nEnter 2 for difference" << endl;
    cin >> opt;
    switch (opt) {
        case 1:
            t3 = sum(t1, t2);
            break;
        case 2:
            t3 = diff(t1, t2);
            break;
    }

    t3.display();
}
