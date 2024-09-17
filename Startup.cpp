#include "Startup.h"
#include <iostream>


int Startup::totalFunding = 0;

Startup::Startup(std::string name, std::string industry, int funding)
    : name(name), industry(industry), funding(funding) {}

std::string Startup::get_name() const {
    return this->name;
}

void Startup::pitch_idea() {
    std::cout << "Pitching idea for " << this->name << " in the " << this->industry << " industry." << std::endl;
}

Startup& Startup::get_funding(int amount) {
    this->funding += amount;
    totalFunding += amount; 
    std::cout << this->name << " has received funding. Total funding: $" << this->funding << std::endl;
    return *this;
}


int Startup::get_total_funding() {
    return totalFunding;
}
