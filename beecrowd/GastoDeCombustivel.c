#include <iostream>
 
using namespace std;
 
int main() {
 
    double h, v, l;
    cin >> h;
    cin >> v;
    l = (v * h)/12;
    
    printf("%0.3lf\n", l);
 
    return 0;
}