//Juwon Hong
//CIS 25
//09/10/2024

#include <iostream>
using namespace std;

int main() {
    
    int numbers[] = {10, 20, 30};
    int* ptr = numbers;

    
    for (int i = 2; i >= 0; i--) {
        cout << *(ptr + i) << " ";
    }

    return 0;
}

