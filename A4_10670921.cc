#include <iostream>
using namespace std;
int GCD(int a, int b){
    if (b==0){
        return a;
    }else{
        return (GCD(b, a%b));
    }
}
int main(){
    int a, b;
    char choice;
    do{
        cout <<"Enter your first number : ";
        cin >> a;
        cout << "Enter your second number : ";
        cin >> b;
        cout << "GCD is : "<<GCD(a, b)<<endl;
        cout << "Do you wish to continue(press y). if not press N : ";
        cin >> choice;
    }while(choice=='y' or choice=='Y');
}
