#include "Startup.h"
#include <iostream>

int Startup::totalFunding = 0;

Startup::Startup() : Organization(), funding(0) {
    std::cout << "Default constructor called for Startup." << std::endl;
}

Startup::Startup(std::string name, std::string industry, int funding)
    : Organization(name, industry), funding(funding) {}

Startup::Startup(const Startup& other)
    : Organization(other.name, other.industry), funding(other.funding) {
    std::cout << "Copy constructor called for Startup: " << name << std::endl;
}

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
    this->funding += amount;
    totalFunding += amount;
    std::cout << this->name << " has received funding. Total funding: $" << this->funding << std::endl;
    return *this;
}

int Startup::get_total_funding() {
    return totalFunding;
}

Startup::~Startup() {
    std::cout << "Startup " << name << " is being destroyed." << std::endl;
}
