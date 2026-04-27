#include <iostream>
#include <cmath>
#include <chrono>
#include <thread>
using namespace std;

int main() {
    const int width = 80;
    const int height = 30;
    const double cx = width / 2.0;
    const double cy = height / 2.0;

    double time = 0;

    while (true) {
        cout << "\033[2J\033[H"; // 화면 지우기

        for (int y = 0; y < height; y++) {
            for (int x = 0; x < width; x++) {
                double dx = x - cx;
                double dy = y - cy;
                double dist = sqrt(dx * dx + dy * dy);
                double angle = atan2(dy, dx);

                double spiral = sin(dist * 0.8 - angle * 4 + time);

                if (dist < 3) {
                    cout << "@";       // 블랙홀 중심
                }
                else if (dist < 6) {
                    cout << "#";
                }
                else if (spiral > 0.85 && dist < 25) {
                    cout << "*";
                }
                else if (spiral > 0.65 && dist < 30) {
                    cout << ".";
                }
                else {
                    cout << " ";
                }
            }
            cout << '\n';
        }

        time += 0.25;
        this_thread::sleep_for(chrono::milliseconds(50));
    }

    return 0;
}