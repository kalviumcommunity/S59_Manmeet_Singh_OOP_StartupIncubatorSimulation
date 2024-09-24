#include "Startup.h"
#include <iostream>

int Startup::totalFunding = 0;

Startup::Startup(std::string name, std::string industry, int funding)
    : name(name), industry(industry), funding(funding) {}

// Accessor methods
std::string Startup::get_name() const {
    return this->name;
}

std::string Startup::get_industry() const {
    return this->industry;
}

int Startup::get_funding() const {
    return this->funding;
}

// Mutator methods
void Startup::set_name(const std::string& new_name) {
    this->name = new_name;
}

void Startup::set_industry(const std::string& new_industry) {
    this->industry = new_industry;
}

void Startup::set_funding(int new_funding) {
    this->funding = new_funding;
}

void Startup::pitch_idea() {
    std::cout << "Pitching idea for " << this->name << " in the " << this->industry << " industry." << std::endl;
}

Startup& Startup::receive_funding(int amount) {
    this->funding += amount;
    totalFunding += amount; 
    std::cout << this->name << " has received funding. Total funding: $" << this->funding << std::endl;
    return *this;
}

int Startup::get_total_funding() {
    return totalFunding;
}
