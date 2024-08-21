#include "Incubator.h"
#include <iostream>

using namespace std;

namespace IncubatorSim {
    Incubator::Incubator(string n) : name(n) {}

    void Incubator::accept_startup(Startup startup) {
        startups.push_back(startup);
        cout << "The startup " << startup.get_name() << " has been accepted into the incubator " << name << "." << endl;
    }

    void Incubator::provide_resources(Startup &startup) {
        cout << "The incubator " << name << " is providing resources to " << startup.get_name() << "." << endl;
    }
}
