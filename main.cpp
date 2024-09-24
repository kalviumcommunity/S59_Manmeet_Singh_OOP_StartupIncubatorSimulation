#include "Startup.h"
#include "Incubator.h"
#include <iostream>

using namespace std;

int main() {
    Startup* defaultStartup = new Startup();
    defaultStartup->operate();

    Startup* startups[] = {
        new Startup("TechNova", "Technology", 50000),
        new Startup("HealthPlus", "Healthcare", 30000),
        new Startup("EcoSolutions", "Environmental", 45000)
    };

    Incubator* i1 = new Incubator("InnovateX");

    i1->operate();
    for (int i = 0; i < 3; ++i) {
        i1->accept_startup(startups[i]);
        startups[i]->operate();
    }

    i1->provide_resources();

    cout << "Total startups accepted: " << Incubator::get_total_startups() << endl;
    cout << "Total funding provided to all startups: $" << Startup::get_total_funding() << endl;

    Incubator* copiedIncubator = new Incubator(*i1);
    copiedIncubator->operate();

    delete defaultStartup;
    for (int i = 0; i < 3; ++i) {
        delete startups[i];
    }
    delete i1;
    delete copiedIncubator;

    return 0;
}
