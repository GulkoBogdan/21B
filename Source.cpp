#include <iostream>
using namespace std;
int main(){

    //1

    int digit, i = 0;
    cout << "Vvedite chislo:\n";
    cin >> digit;
    for (; digit > 0; i++) {
        digit /= 10;
    }
    cout << " V dannom chisle " << i << " cifr\n\n";

    

   
    //2

int n1 = 1, k, max = 1;
while (n1 != 0) {
    cin >> n1;
    if (n1 > max) {
        max = n1;
        k = 1;
    }
    else
        if (n1 == max)
            k++;
}
cout << k << "times";

//3

int n, k1, max1 = -2147483648, max2 = -2147483648;
cin >> k1;

while (k1 != 0) {

    if (k1 > max1) {
        max2 = max1;
        max1 = k1;
    }
    else if (k1 > max2 && k1 != max1)
        max2 = k1;
    cin >> k1;
}
cout << "Second max number: " << max2 << endl;
}