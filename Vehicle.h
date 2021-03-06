// Vehicle Parent Class Specification
//
// Author: Brian Horner
// Edit History:
// 11/12/2021 Initial Version
// 11/13/2021 Added virtual functions for start and window sticker
// 11/13 2021 Fixed templates to accept two types
// 11/13/2021 Added transmission type attribute with respective methods
// 11/13/2021 Added price manipulating methods

#ifndef VEHICLE_H
#define VEHICLE_H

#include <iostream>
#include <string>

template<typename T, typename U>

class Vehicle{

public:
    // Constructors
    Vehicle(); //Constructor
    Vehicle(U m, U model, T prodYear, T price, U trans);

    // Sale methods
    void giveDiscountPercent(T n);
    void giveDiscountValue(T n);
    void raisePricePercent(T n);
    void raisePriceValue(T n);

    // Set funcs
    void setVehicleMake(U m);
    void setVehicleModel(U m);
    void setVehicleProdYear(T n);
    void setVehiclePrice(T n);
    void setVehicleTransmission(U trans);

    // Get funcs
    U getVehicleMake() const;
    U getVehicleModel() const;
    T getVehicleProdYear() const;
    T getVehiclePrice() const;
    U getVehicleTransmission() const;

    ~Vehicle(); //Destructor

    // Virtual Functions
    virtual void start() const; // Virtual function to display info
    virtual void displayWindowSticker() const; // Virtual function to display windowsticker

private:
    U make;
    U model;
    T productionYear;
    T price;
    U transmission;
};

#endif
