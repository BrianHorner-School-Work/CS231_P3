// Plane Class Implementation (Child class of Vehicle)
//
//
// Author: Brian Horner
// Edit History:
// 11/12/2021 Initial Version
// 11/13/2021 Added constructor, destructor, set, get and virtual functions
// 11/13/2021 Added start procedure function implementation

// Standard Library Includes
#include <iostream>
#include <string>

// User built Includes:
#include "Plane.h"

// Template options for the class
template class Plane<int, std::string>;
template class Plane<unsigned int, std::string>;
template class Plane<double, std::string>;

// --- Constructors ---
template <typename T, typename U>
Plane<T, U>::Plane():Vehicle<T, U>(){
    numOfPassengers = 0;
    numOfEngines = 0;
    totalSeats = 0;
    avaliableSeats = 0;
    planeCallSign = "";
    std::cout << "Plane has been created. Please set the make, model, "
                 "production year, price, number of passengers, number of "
                 "engines, total seats, avaliable seats, and plane call sign"
                 "." <<std::endl;
}

template <typename T, typename U>
Plane<T, U>::Plane(U planeMake, U planeModel,T planeProdYear, T planePrice,
                   T nPassengers, T nEngines,T totSeats, T availSeats,
                   U callSign):Vehicle<T, U>(planeMake, planeModel,
                                             planeProdYear, planePrice) {
                       numOfPassengers = nPassengers;
                       numOfEngines = nEngines;
                       totalSeats = totSeats;
                       avaliableSeats = availSeats;
                       planeCallSign = callSign;

                       std::cout << "Plane has been created with the "
                                    "following attributes.\n" <<
                                    "Plane Call Sign: " <<planeCallSign <<
                                    "\nNumber of Passengers "
                                    <<numOfPassengers <<
                                    "\nAvaliable Seats: "<<avaliableSeats <<
                                    "\nTotal Seats: " <<totalSeats <<
                                    "\nNumber of Engines " <<numOfEngines
                                    <<std::endl;

                   }


// --- Set Functions ---
template <typename T, typename U>
void Plane<T, U>::setNumOfPassengers(T n) {numOfPassengers=n;}

template <typename T, typename U>
void Plane<T, U>::setNumOfEngines(T n) {numOfEngines=n;}

template<typename T, typename U>
void Plane<T, U>::setTotalSeats(T n) {totalSeats=n;}

template<typename T, typename U>
void Plane<T, U>::setAvaliableSeats(T n) {avaliableSeats=n;}

template<typename T, typename U>
void Plane<T, U>::setPlaneCallSign(U s) {planeCallSign=s;}

// --- Get Functions ---
template <typename T, typename U>
T Plane<T, U>::getNumOfPassengers() const {return numOfPassengers;}

template <typename T, typename U>
T Plane<T, U>::getNumOfEngines() const {return numOfEngines;}

template <typename T, typename U>
T Plane<T, U>::getTotalSeats() const {return totalSeats;}

template<typename T, typename U>
T Plane<T, U>::getAvailableSeats() const {return avaliableSeats;}

template<typename T, typename U>
U Plane<T, U>::getPlaneCallSign() const {return planeCallSign;}


// --- Virtual Functions ---
template <typename T, typename U>
void Plane<T, U>::start() const {
    Vehicle<T, U>::start();
    std::cout << "..." <<std::endl;
}

template <typename T, typename U>
void Plane<T, U>::displayWindowSticker() const {
    Vehicle<T, U>::displayWindowSticker();
    std::cout<<
    "2. Press ignition button.\n" <<
    "3. Release brakes from planes landing gear.\n" <<
    "4. Allow plane to be backed up onto runway by tow.\n" <<
    "5. Initiation takeoff procedure.\n" <<
    "6. Accelerate to ideal velocity with acceleration lever.\n" <<
    "7. Once at ideal acceleration. Pull down on steering yolk to take off"
    ".\n" <<
    "8. Continue to fly as normal. See paper manual for landing instructions"
    "." <<
    std::endl;
}
// --- Destructor --
template <typename T, typename U>
Plane<T, U>::~Plane<T, U>() {}

