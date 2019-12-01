// Copyright (c) 2019 Wajd Mariam All rights reserved.
//
// Created by: Wajd Mariam
// Created on: December 2019
// This program formats the mailing address using given input.

#include <iostream>
#include <string>


std::string format_address(std::string first_name,
                         std::string last_name,
                         std::string street_add,
                         std::string city,
                         std::string province,
                         std::string PostalCode,
                         std::string apt_number = "") {
    // returns formatted mailing address

    // variables
    std::string mail;

    // process
    if (apt_number.size() != 0) {
        mail = first_name + " " + last_name + "\n"
               + apt_number + "-" + street_add + "\n"
               + city + " " + province + " " + PostalCode;
    } else {
        mail = first_name + " " + last_name + "\n"
               + street_add + "\n"
               + city + " " + province + " " + PostalCode;
    }
    return mail;
}


main() {
    // this function gets user input and fromats it into mailing address.
    // welcome statement
    std::cout << "" << std::endl;
    std::cout << "This program formats your mailing address using given input";
    std::cout << "" << std::endl;

    // variables
    std::string first_name;
    std::string last_name;
    std::string question;
    std::string apt_number = "";
    std::string street_add;
    std::string city;
    std::string province;
    std::string PostalCode;
    std::string address;

    // input
    std::cout << "Enter the first name: ";
    std::getline(std::cin, first_name);
    std::cout << "Enter the last name: ";
    std::getline(std::cin, last_name);
    std::cout << "Does your receiver have an apartment number? (y/n): ";
    std::getline(std::cin, question);
    if (question == "y" || question == "yes") {
        std::cout << "Enter the apartment number: ";
        std::getline(std::cin, apt_number);
    }
    std::cout << "Enter the street address: ";
    std::getline(std::cin, street_add);
    std::cout << "Enter the city: ";
    std::getline(std::cin, city);
    std::cout << "Enter the province: ";
    std::getline(std::cin, province);
    std::cout << "Enter the postal code: ";
    std::getline(std::cin, PostalCode);

    // call function
    if (apt_number != "") {
        address = format_address(first_name, last_name, street_add, city,
                                 province, PostalCode, apt_number);
    } else {
        address = format_address(first_name, last_name, street_add, city,
                                 province, PostalCode);
    }

    // output
    std::cout << "" << std::endl;
    std::cout << address;
}
