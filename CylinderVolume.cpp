#include<iostream>
#include<cmath>
using namespace std;
#define PI 3.142

//Function to calculate the volume of the cylinder
double Volume(double radius, double height){
return radius*radius*height*PI;
}

int main (){
    double radius, height;

   //Ask the user to input radius and height
   cout<<"Please enter the radius of the cylinder: \n";
   cin>>radius;

   cout<<"Please enter the height of the cylinder: \n";
   cin>>height;

   //Calculate and display the volume of the cylinder
   double CylinderVolume=Volume(radius, height); //Call the Volume function

    cout<<"Volume of the cylinder is:"<<CylinderVolume<<endl;

return 0;
}
