#include "Startup.h"
#include "Incubator.h"
#include "TechStartup.h"
#include <iostream>

using namespace std;

int main() {
    cout << "Abstract Class" << endl;
    
    Organization* org1 = new Startup("HealthPlus", "Healthcare", 30000);  
    org1->operate();
    cout << endl;

    Organization* org2 = new TechStartup("QuantumLeap", "Technology", 75000, "Quantum Computing");
    org2->operate();
    cout << "Tech focus of " << org2->get_name() << ": " << static_cast<TechStartup*>(org2)->get_tech_focus() << endl;
    cout << endl;

   
    Organization* startups[] = {
        new Startup("TechNova", "Technology", 50000),
        new Startup("EcoSolutions", "Environmental", 45000)
    };

    Incubator* i1 = new Incubator("InnovateX");
    i1->operate();

    for (int i = 0; i < 2; ++i) {
        i1->accept_startup(static_cast<Startup*>(startups[i]));
        startups[i]->operate();
    }

    i1->provide_resources();

    cout << "Total startups accepted: " << Incubator::get_total_startups() << endl;
    cout << "Total funding provided to all startups: $" << Startup::get_total_funding() << endl;
    cout << endl;

   
    Incubator* copiedIncubator = new Incubator(*i1);  
    copiedIncubator->operate();
    cout << endl;

    delete org1;
    delete org2;
    for (int i = 0; i < 2; ++i) {
        delete startups[i];
    }
    delete i1;
    delete copiedIncubator;

    return 0;
}
