// Car Class Implementation (Child class of Vehicle)
//
//
// Author: Brian Horner
// Edit History:
// 11/12/2021 Initial Version
// 11/13/2021 Added constructor, get & set functions and destructor
// 11/13/2021 Added virtual function overrides
// 11/13 2021 Fixed templates to accept two types
// 11/13/2021 Added start procedure function implementation
// 11/13/2021 Added window sticker function implementation
// 11/13/2021 Added exception handling for car doors

// Standard Library Includes
#include <iostream>
#include <string>


// User built Includes:
#include "Car.h"

// Template options for the class
template class Car<int, std::string>;
template class Car<unsigned int, std::string>;
template class Car<double, std::string>;

// --- Constructors ---
template <typename T, typename U>
Car<T, U>::Car():Vehicle<T, U>(){
    carColor = "";
    carDoors = 0;
    carType = "";
    std::cout << "Car has been created. Please set the make, model, "
                 "production year, price, color, number of doors and type."
                 <<std::endl;
}

template <typename T, typename U>
Car<T, U>::Car(U carMake, U carModel, T carProdYear, T carPrice, U carTrans,
               U color, T doors, U type):Vehicle<T, U>(carMake, carModel,
                                                carProdYear, carPrice, carTrans) {
    carColor = color;
    if (doors>=0){
        carDoors = doors;
    }else{
        throw std::invalid_argument("Error: Car can not have negative doors. "
                                    "Input ignored, please try again.");
    }

    carType = type;
    std::cout << "Car has been created with the following attributes.\n" <<
                 "Car Color: " <<this->carColor <<std::endl<<
                 "Car Door Count: " <<this->carDoors << std::endl<<
                 "Car Type: " <<this->carType <<std::endl;
}





// --- Set Functions ---
template <typename T, typename U>
void Car<T, U>::setCarColor(U color) {carColor = color;}

template <typename T, typename U>
void Car<T, U>::setCarDoors(T doors) {
    if (doors>=0){
        carDoors = doors;
    }else{
        throw std::invalid_argument("Error: Car can not have negative doors. "
                                    "Input ignored, please try again.");
    }
}


template <typename T, typename U>
void Car<T, U>::setCarType(U type) {carType = type;}


// --- Get Functions ---
template <typename T, typename U>
U Car<T, U>::getCarColor() const {return carColor;}
template <typename T, typename U>
T Car<T, U>::getCarDoors() const {return carDoors;}
template <typename T, typename U>
U Car<T,U>::getCarType() const {return carType;}


// --- Virtual Functions ---
template <typename T, typename U>
void Car<T, U>::start() const {
    std::cout << "\nCar ";
    Vehicle<T, U>::start();
    std::cout <<
    "2. Press in brake pedal.\n" <<
    "3. Turn key over.\n" <<
    "4. Move shifter into drive or reverse according to surroundings.\n" <<
    "5. If reversed move into position to be able to drive forward.\n" <<
    std::endl;
}

template <typename T, typename U>
void Car<T, U>::displayWindowSticker() const {
    std::cout<<"\nCar ";
    Vehicle<T, U>::displayWindowSticker();
    std::cout<<
    "Type of Car: " <<this->carType <<std::endl<<
    "Color: "<<this->carColor<<std::endl<<
    "Number of doors: " <<this->carDoors<<std::endl;
}

// --- Destructor ---
template <typename T, typename U>
Car<T, U>::~Car<T, U>() {}