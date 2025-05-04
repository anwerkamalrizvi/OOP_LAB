#include <iostream>
#include <fstream>
#include <ctime>
using namespace std;

void slog() {
    ofstream f("system_log.txt", ios::app);
    time_t t = time(0);
    f << "System started at: " << ctime(&t);
    f.close();
}

int main() {
    slog();
    return 0;
}