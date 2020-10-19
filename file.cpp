#include <iostream>
#include <cmath>

using namespace std;

void yeleven(double n) {
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

void yone(double n) {
double y;
double mem = n;
for(float x = 0.1; x <= 1.3; x+=0.1){
y = 0;
n = mem;
while (n <= 20) {
y += (pow(x,(n-1))) / (2*n + 1);
n++;
}
cout << "x: " << x << ", y(x): " << y << endl;
}

}

void ytwo(double n) {
double y;
double mem = n;
for(float x = 0.1; x <= 1.3; x+=0.1){
y = 0;
n = mem;
while (n <= 20) {
y += pow((2*x), n) / (n + 1);
n++;
}
cout << "x: " << x << ", y(x): " << y << endl;
}

}

void ythree(double n) {
double y;
double mem = n;
for(float x = 0.1; x <= 1.3; x+=0.1){
y = 0;
n = mem;
while (n <= 20) {
y += pow(x, (n-1)) / (sin(n*x));
n++;
}
cout << "x: " << x << ", y(x): " << y << endl;
}

}

void yfour(double n) {
double y;
double mem = n;
for(float x = 0.1; x <= 1.3; x+=0.1){
y = 0;
n = mem;
while (n <= 20) {
y += ((n*n + 1) / (n)) * pow((x/2), n);
n++;
}
cout << "x: " << x << ", y(x): " << y << endl;
}

}

void yfive(double n) {
double y;
double mem = n;
for(float x = 0.1; x <= 1.3; x+=0.1){
y = 0;
n = mem;
while (n <= 20) {
y += ((cos(n*(3.141592/4))) / (n+1)) * pow(x, n);
n++;
}
cout << "x: " << x << ", y(x): " << y << endl;
}

}

void ysix(double n) {
double y;
double mem = n;
for(float x = 0.1; x <= 1.3; x+=0.1){
y = 0;
n = mem;
while (n <= 20) {
y += pow(x, (2*n-2)) / (2*n+1);
n++;
}
cout << "x: " << x << ", y(x): " << y << endl;
}

}

void yseven(double n) {
double y;
double mem = n;
for(float x = 0.1; x <= 1.3; x+=0.1){
y = 0;
n = mem;
while (n <= 20) {
y += (pow(x, (2*n))) / (cos(n*x));
n++;
}
cout << "x: " << x << ", y(x): " << y << endl;
}

}

void yeight(double n) {
double y;
double mem = n;
for(float x = 0.1; x <= 1.3; x+=0.1){
y = 0;
n = mem;
while (n <= 20) {
y += (2*n * 2 * n + 1) / (2*n) * pow(x, (2*n -2));
n++;
}
cout << "x: " << x << ", y(x): " << y << endl;
}

}

void ynine(double n) {
double y;
double mem = n;
for(float x = 0.1; x <= 1.3; x+=0.1){
y = 0;
n = mem;
while (n <= 20) {
y += (2*n+1) / (sin(n*x)) * pow(x, (n-1));
n++;
}
cout << "x: " << x << ", y(x): " << y << endl;
}

}

void yten(double n) {
double y;
double mem = n;
for(float x = 0.1; x <= 1.3; x+=0.1){
y = 0;
n = mem;
while (n <= 20) {
y += pow(cos(x), n) / 2*n + 1;
n++;
}
cout << "x: " << x << ", y(x): " << y << endl;
}

}

void ytwelve(double n) {
double y;
double mem = n;
for(float x = 0.1; x <= 1.3; x+=0.1){
y = 0;
n = mem;
while (n <= 20) {
y += pow((1+x), (n-1)) / fabs(pow(sin(x), n));
n++;
}
cout << "x: " << x << ", y(x): " << y << endl;
}

}

void ythirteen(double n) {
double y;
double mem = n;
for(float x = 0.1; x <= 1.3; x+=0.1){
y = 0;
n = mem;
while (n <= 20) {
y += pow(x, (2*n-2)) / (4*cos(n*x*x));
n++;
}
cout << "x: " << x << ", y(x): " << y << endl;
}

}

void fourteen(double n) {
double y;
double mem = n;
for(float x = 0.1; x <= 1.3; x+=0.1){
y = 0;
n = mem;
while (n <= 20) {
y += ((n*n) / (2*n+1)) * pow(x, (n-1));
n++;
}
cout << "x: " << x << ", y(x): " << y << endl;
}

}

void fifteen(double n) {
double y;
double mem = n;
for(float x = 0.1; x <= 1.3; x+=0.1){
y = 0;
n = mem;
while (n <= 20) {
y += (cos(n * (3.1415926535 / 4)) / n*n) * pow(x, n);
n++;
}
cout << "x: " << x << ", y(x): " << y << endl;
}

}

int main()
{
fifteen(1);
}
