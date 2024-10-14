#include "TechStartup.h"
#include <iostream>

TechStartup::TechStartup() : Startup(), techFocus("Unknown") {
    std::cout << "Default constructor called for TechStartup." << std::endl;
}

TechStartup::TechStartup(std::string name, std::string industry, int funding, std::string techFocus)
    : Startup(name, industry, funding), techFocus(techFocus) {}

TechStartup::TechStartup(const TechStartup& other)
    : Startup(other), techFocus(other.techFocus) {
    std::cout << "Copy constructor called for TechStartup: " << name << std::endl;
}

void TechStartup::operate() const {
    std::cout << "Operating tech startup: " << name << " with a focus on " << techFocus << "." << std::endl;
}

std::string TechStartup::get_tech_focus() const {
    return this->techFocus;
}

void TechStartup::set_tech_focus(const std::string& new_tech_focus) {
    this->techFocus = new_tech_focus;
}

TechStartup::~TechStartup() {
    std::cout << "TechStartup " << name << " is being destroyed." << std::endl;
}
