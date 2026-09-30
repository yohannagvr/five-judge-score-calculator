// hw5 q7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
using namespace std;

void getdata(double& score);
double findlowest(double s1, double s2, double s3, double s4, double s5);
double findhighest(double s1, double s2, double s3, double s4, double s5);
void calcscore(double s1, double s2, double s3, double s4, double s5);

int main() {
    double score1, score2, score3, score4, score5;
    cout << "Enter the five judge scores:\n";

    getdata(score1);
    getdata(score2);
    getdata(score3);
    getdata(score4);
    getdata(score5);
    calcscore(score1, score2, score3, score4, score5);

    return 0;
}

void getdata(double& score) {
    do {
        cout << "Enter a judge's score (0 - 10): ";
        cin >> score;
        if (score < 0 || score > 10)
            cout << "Invalid score! Must be between 0 and 10.\n";

    } while (score < 0 || score > 10);
}

double findlowest(double s1, double s2, double s3, double s4, double s5) 
{
    double lowest = s1;
    if (s2 < lowest) lowest = s2;
    if (s3 < lowest) lowest = s3;
    if (s4 < lowest) lowest = s4;
    if (s5 < lowest) lowest = s5;

    return lowest;
}
double findhighest(double s1, double s2, double s3, double s4, double s5) 
{
    double highest = s1;
    if (s2 > highest) highest = s2;
    if (s3 > highest) highest = s3;
    if (s4 > highest) highest = s4;
    if (s5 > highest) highest = s5;

    return highest;
}
void calcscore(double s1, double s2, double s3, double s4, double s5) 
{
    double lowest = findlowest(s1, s2, s3, s4, s5);
    double highest = findhighest(s1, s2, s3, s4, s5);
    double total = s1 + s2 + s3 + s4 + s5;
    double finalScore = (total - lowest - highest) / 3;

    cout << fixed << setprecision(2) << "\nFinal contestant score: " << finalScore << endl;
}
