// V0 -> first speed in km/h
//  d -> distance
//  g -> 9.8
//  mu
//  d = pow(v0,2)/2*mu*g
//  1h =3600 s
//  1km = 1000 m
//  km/h => km/s = 1000/3600 => 1/3.6
#include <iostream>
using namespace std;

double stoppingDistance(double v0_kmh, double mu, double g)
{
    double v = v0_kmh / 3.6;
    double d = (v * v) / (2 * mu * g);
    return d;
}

int main()
{
    double v0, mu;
    double g = 9.8;

    cout << "Please enter first speed v0 (km/h): ";
    cin >> v0;

    cout << "Please enter  mu: ";
    cin >> mu;

    double d = stoppingDistance(v0, mu, g);

    cout << "Stopping distance is: " << d << " meters" << endl;

    cout << "if => v0 = 120 km/h, mu = 0.3" << endl;
    cout << "Stopping distance = " << stoppingDistance(120, 0.3, g) << " meters" << endl;

    cout << "if => v0 = 50 km/h, mu = 0.3" << endl;
    cout << "Stopping distance = " << stoppingDistance(50, 0.3, g) << " meters" << endl;

    return 0;
}
