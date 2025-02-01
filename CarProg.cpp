/*
C++ program to display car details
Author: IAN WABWIRE 
ADM NO: BSCIT-05-0069/2024
Date: 01/02/2025
*/

#include<iostream>
#include <string>
using namespace std;

class Car{
    public:
    
        string brand;
        string model;
        float price;
        int mileage;

    //Public member function to display car details
    void Display(){
       cout<<" Brand is: "<<brand<<endl; 
       cout<<"\n Model is: "<<model<<endl;
       cout<<"\n Price is: "<<"Kshs. "<<price<<endl;
       cout<<"\n Mileage is: "<<mileage<<endl;
    }

    //Public member function to represent distance driven  
    int drive(int Distance){
        if (Distance>0){
            mileage += Distance;

            cout<<"\n You distance is: "<<Distance<<" miles."<<endl;
            cout<<"\n Updated mileage: "<<mileage<<" miles."<<endl;

        } else {

             cout<<"Distance must be a positive number."<<endl;
            
        }
        return 0;
    }

};

int main(){

  //Initializing car details
   Car Car1;
   Car1.brand="Toyota";
   Car1.model="Corolla";
   Car1.price=20000;
   Car1.mileage=5000;

   //Displaying the car's details
   Car1.Display();
    
    //Simulating driving the car for 150 miles and display updated mileage
    Car1.drive(150);

    //Simulating driving the car for 300 miles and display updated mileage
    Car1.drive(300);

return 0;
}