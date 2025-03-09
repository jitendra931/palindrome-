// convert celcius to  Fahrenheit

// #include<iostream>
// using namespace std;

// double convertcelcius(double celcius){
//     return (celcius*9/5) + 32;
// }

// int main(){
//     double celcius;
//     cout<<"enter temperature in celcius : ";
//     cin>>celcius;

//     cout<<"temperature in fehrenheit : "<<convertcelcius(celcius);
//     return 0;
// }


// convert Fahrenheit to celcius

#include<iostream>
using namespace std;

double convertfehrenheit(double fehrenheit){
    return (fehrenheit - 32)*5/9;
}

int main(){
    double fehrenheit;
    cout<<"enter temperature in fehrenheit : ";
    cin>>fehrenheit;

    cout<<"temperature in celcius : "<<convertfehrenheit(fehrenheit);

    return 0;
}