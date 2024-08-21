#include "Incubator.h"
#include <iostream>

Incubator::Incubator(std::string name) : name(name) {
}

Incubator& Incubator::accept_startup(const Startup& startup) {
    this->startups.push_back(startup);
    std::cout << "Startup " << startup.get_name() << " has been accepted into " << this->name << " incubator." << std::endl;
    return *this;
}

void Incubator::provide_resources() {
    std::cout << "Providing resources to startups in the " << this->name << " incubator." << std::endl;
    for (Startup& startup : this->startups) {
        startup.get_funding(10000);
    }
}
