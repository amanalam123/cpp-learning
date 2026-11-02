#include<iostream>
using namespace std;
int main() {
    int n;
    cout<< "Enter a number: ";
    cin >> n;

    int original = n;
    int sum = 0;

    while(n > 0){
        int didgit = n % 10;

        int fact = 1;
        for(int i=1; i<=didgit; i++){
            fact = fact * i;
        }
        sum += fact;
        n = n / 10;
    }

    if(sum == original) {
        cout << original << " is a strong number." << endl;
    } else {
        cout << original << " is not a strong number." << endl;
    }

    return 0;   
}