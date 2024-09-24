#include "Startup.h"
#include <iostream>

int Startup::totalFunding = 0;

Startup::Startup(std::string name, std::string industry, int funding)
    : Organization(name, industry), funding(funding) {}

void Startup::operate() const {
    std::cout << "Pitching idea for startup: " << name << " in the " << industry << " industry." << std::endl;
}

std::string Startup::get_name() const {
    return this->name;
}


std::string Startup::get_industry() const {
    return this->industry;
}

int Startup::get_funding() const {
    return this->funding;
}


void Startup::set_name(const std::string& new_name) {
    this->name = new_name;
}

void Startup::set_industry(const std::string& new_industry) {
    this->industry = new_industry;
}

void Startup::set_funding(int new_funding) {
    this->funding = new_funding;
}

Startup& Startup::receive_funding(int amount) {
