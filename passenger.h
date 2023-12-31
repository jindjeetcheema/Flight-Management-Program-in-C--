#ifndef PASSENGER_H
#define PASSENGER_H

#include <iostream>
#include <string>
#include <iomanip>
#include <cassert>
#include "seat.h"

using namespace std;

class Passenger {
private:
    string first_name;
    string last_name;
    string phone_number;
    Seat* seat;
    int id, row;
    char col;  
public:
    // Constructor
    Passenger(string fname, string lname, string phone, int pass_row, char pass_col, int pass_id);
    // Destructor
    ~Passenger();
    // Copy Constructor
    Passenger(const Passenger& src);
    //Copy Assignment Operator
    Passenger& operator = (const Passenger& rhs);
    
    // Getter functions
    string get_first_name()const { return first_name; }
    string get_last_name()const { return last_name; }
    string get_phone_number()const { return phone_number; }
    Seat * get_seat()const { return seat; }
    int get_id()const { return id; }
    
    //Setter functions
    void set_first_name(string val) {first_name = val;}
    void set_last_name(string val) {last_name = val; }
    void set_phone_num(string val) {phone_number = val; }
    void set_seat(int row, char col);
    void set_id(int val) {id = val; }

    // Display a single passenger information
    void display_information();
};

#endif
