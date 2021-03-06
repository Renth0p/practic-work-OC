#include <iostream>
#include <cmath>

using namespace std;

void first(double n) {
double y;
for(float x = 0.1; x <= 1.3; x+=0.1){
y = 0;
n = 0;
while (n <= 20) {
y += (n*pow(x,n-1)) / sin(2*n+x);
n++;
}
cout << "x: " << x << ", y(x): " << y << endl;
}

}

void second(double n) {
double y;
double da = n;
for(float x = 0.1; x <= 1.3; x+=0.1){
y = 0;
n = da;
while (n <= 20) {
y += (pow(x,(n-1))) / (2*n + 1);
n++;
}
cout << "x: " << x << ", y(x): " << y << endl;
}

}

void third(double n) {
double y;
double da = n;
for(float x = 0.1; x <= 1.3; x+=0.1){
y = 0;
n = da;
while (n <= 20) {
y += pow((2*x), n) / (n + 1);
n++;
}
cout << "x: " << x << ", y(x): " << y << endl;
}

}

void fourth(double n) {
double y;
double da = n;
for(float x = 0.1; x <= 1.3; x+=0.1){
y = 0;
n = da;
while (n <= 20) {
y += pow(x, (n-1)) / (sin(n*x));
n++;
}
cout << "x: " << x << ", y(x): " << y << endl;
}

}

void fifth(double n) {
double y;
double da = n;
for(float x = 0.1; x <= 1.3; x+=0.1){
y = 0;
n = da;
while (n <= 20) {
y += ((n*n + 1) / (n)) * pow((x/2), n);
n++;
}
cout << "x: " << x << ", y(x): " << y << endl;
}

}

void sixth(double n) {
double y;
double da = n;
for(float x = 0.1; x <= 1.3; x+=0.1){
y = 0;
n = da;
while (n <= 20) {
y += ((cos(n*(3.141592/4))) / (n+1)) * pow(x, n);
n++;
}
cout << "x: " << x << ", y(x): " << y << endl;
}

}

void seventh(double n) {
double y;
double da = n;
for(float x = 0.1; x <= 1.3; x+=0.1){
y = 0;
n = da;
while (n <= 20) {
y += pow(x, (2*n-2)) / (2*n+1);
n++;
}
cout << "x: " << x << ", y(x): " << y << endl;
}

}

void eighth(double n) {
double y;
double da = n;
for(float x = 0.1; x <= 1.3; x+=0.1){
y = 0;
n = da;
while (n <= 20) {
y += (pow(x, (2*n))) / (cos(n*x));
n++;
}
cout << "x: " << x << ", y(x): " << y << endl;
}

}

void ningth(double n) {
double y;
double da = n;
for(float x = 0.1; x <= 1.3; x+=0.1){
y = 0;
n = da;
while (n <= 20) {
y += (2*n * 2 * n + 1) / (2*n) * pow(x, (2*n -2));
n++;
}
cout << "x: " << x << ", y(x): " << y << endl;
}

}

void tenth(double n) {
double y;
double da = n;
for(float x = 0.1; x <= 1.3; x+=0.1){
y = 0;
n = da;
while (n <= 20) {
y += (2*n+1) / (sin(n*x)) * pow(x, (n-1));
n++;
}
cout << "x: " << x << ", y(x): " << y << endl;
}

}

void eleventh(double n) {
double y;
double da = n;
for(float x = 0.1; x <= 1.3; x+=0.1){
y = 0;
n = da;
while (n <= 20) {
y += pow(cos(x), n) / 2*n + 1;
n++;
}
cout << "x: " << x << ", y(x): " << y << endl;
}

}

void twelfth(double n) {
double y;
double da = n;
for(float x = 0.1; x <= 1.3; x+=0.1){
y = 0;
n = da;
while (n <= 20) {
y += pow((1+x), (n-1)) / fabs(pow(sin(x), n));
n++;
}
cout << "x: " << x << ", y(x): " << y << endl;
}

}

void thirteenth(double n) {
double y;
double da = n;
for(float x = 0.1; x <= 1.3; x+=0.1){
y = 0;
n = da;
while (n <= 20) {
y += pow(x, (2*n-2)) / (4*cos(n*x*x));
n++;
}
cout << "x: " << x << ", y(x): " << y << endl;
}

}

void fourteenth(double n) {
double y;
double da = n;
for(float x = 0.1; x <= 1.3; x+=0.1){
y = 0;
n = da;
while (n <= 20) {
y += ((n*n) / (2*n+1)) * pow(x, (n-1));
n++;
}
cout << "x: " << x << ", y(x): " << y << endl;
}

}

void fifteenth(double n) {
double y;
double da = n;
for(float x = 0.1; x <= 1.3; x+=0.1){
y = 0;
n = da;
while (n <= 20) {
y += (cos(n * (3.1415926535 / 4)) / n*n) * pow(x, n);
n++;
}
cout << "x: " << x << ", y(x): " << y << endl;
}

}

int main()
{
fifteenth(1);
}
