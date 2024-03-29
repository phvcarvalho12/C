#include <iostream>
 
using namespace std;
 
int main() {
	int  Cv, Ce, Cs, Fv, Fe, Fs;
	
	scanf("%d %d %d %d %d %d", &Cv, &Ce, &Cs, &Fv, &Fe, &Fs);
	
	int Cpontos = (Cv * 3) + Ce;
	int Fpontos = (Fv * 3) + Fe;
	
	 if (Cpontos == Fpontos) {
        if (Cs > Fs)
            printf("C\n");
        else if (Fs > Cs)
            printf("F\n");
        else
            printf("=\n");
    } else {
        if (Cpontos > Fpontos) {
            printf("C\n");
        } else {
            printf("F\n");
        }
    }
	return 0;
}