#include <iostream>

using namespace std;

double height, weight, bmi;

void getData(double & w, double & h)
{std::cout<<"Enter your weight: ";
std::cin>>weight;
std::cout<<"Enter your height: ";
std::cin>>height;

}
void CalcBMI(double & w, double & h)
{bmi=(weight*weight)/height;
return bmi;

}
void displayfittnessResults(double & bb)
{std::cout<<"Your results: \n";
std:::cout<<"Your bmi is : "<<bmi<<"\n";

}


int main()
{
    cout << "Welcome to the BMI program: " << endl;
    getData()
    return 0;
}
