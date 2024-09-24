#include "Organization.h"
#include <iostream>

Organization::Organization() : name("Unnamed"), industry("Unknown") {}

Organization::Organization(std::string name, std::string industry)
    : name(name), industry(industry) {}

Organization::~Organization() {
    std::cout << "Organization " << name << " is being destroyed." << std::endl;
}
