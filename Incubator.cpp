#include "Incubator.h"
#include <iostream>

int Incubator::totalStartups = 0;

Incubator::Incubator(std::string name)
    : Organization(name, "Incubation") {}

void Incubator::operate() const {
    std::cout << "Operating incubator: " << name << std::endl;
}

std::string Incubator::get_name() const {
    return this->name;
}

int Incubator::get_total_startups() {
    return totalStartups;
}

Incubator& Incubator::accept_startup(Startup* startup) {
    this->startups.push_back(startup);
    totalStartups++;
    std::cout << "Startup " << startup->get_name() << " has been accepted into " << this->name << " incubator." << std::endl;
    return *this;
}

void Incubator::provide_resources() {
    std::cout << "Providing resources to startups in the " << this->name << " incubator." << std::endl;
    for (Startup* startup : this->startups) {
        startup->receive_funding(10000);
    }
}

Incubator::~Incubator() {
    for (Startup* startup : this->startups) {
        delete startup;
    }
}
