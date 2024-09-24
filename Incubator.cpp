#include "Incubator.h"
#include <iostream>

int Incubator::totalStartups = 0;

Incubator::Incubator() : Organization() {
    std::cout << "Default constructor called for Incubator." << std::endl;
}

Incubator::Incubator(std::string name)
    : Organization(name, "Incubation") {}

Incubator::Incubator(const Incubator& other)
    : Organization(other.name, other.industry), startups(other.startups) {
    std::cout << "Copy constructor called for Incubator: " << name << std::endl;
}

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
    std::cout << "Incubator " << name << " is being destroyed." << std::endl;
    for (Startup* startup : this->startups) {
        delete startup;
    }
}
