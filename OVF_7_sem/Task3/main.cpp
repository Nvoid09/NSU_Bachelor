#include "Task3.h"

#include <QApplication>

#include<iostream>
#include <fstream>
#include <string>
#include <cmath>
using namespace std;
double funct(double value, double u, double a){
    return value + u + a;
}

int main(int argc, char *argv[])
{
    QApplication ap(argc, argv);
    Task3 w;
    w.show();
    return ap.exec();
}
