#include <iostream>

int main (){
    
    int n;
    int t1 {0};
    int t2 {1};
    int nextTerm {0};

    std :: cout << "Enter the number of Fibonacci digits you want to see: \n";
    std :: cin >> n;

    std :: cout << t1 << " , "; //prints the 0 th digit
    std :: cout << t2; //print the 1st digit

    for (int i = 2; i < n; i ++){ // i = 2, as the first two digits are already printed
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
        std :: cout << " , " << t2;
    }

    std :: cout << '\n';
    // if n = 5, output will be 0, 1, 1, 2, 3
    return 0;
}
