#include "Startup.h"
#include "Incubator.h"
#include "TechStartup.h"
#include <iostream>

using namespace std;

int main() {
    

  
    cout << "----- Default Constructor -----" << endl;
    Startup* defaultStartup = new Startup();  
    defaultStartup->operate();
    cout << endl;

    
    cout << "----- Parameterized Constructor -----" << endl;
    Startup* paramStartup = new Startup("HealthPlus", "Healthcare", 30000);  
    paramStartup->operate();
    cout << endl;

 
    cout << "----- Copy Constructor -----" << endl;
    Startup* copyStartup = new Startup(*paramStartup);  
    copyStartup->operate();
    cout << endl;

   
    cout << "----- Array of Startups Using Parameterized Constructor -----" << endl;
    Startup* startups[] = {
        new Startup("TechNova", "Technology", 50000),
        new Startup("EcoSolutions", "Environmental", 45000)
    };

   
    Incubator* i1 = new Incubator("InnovateX");
    i1->operate();

    for (int i = 0; i < 2; ++i) {
        i1->accept_startup(startups[i]);
        startups[i]->operate();
    }

    i1->provide_resources();

    cout << "Total startups accepted: " << Incubator::get_total_startups() << endl;
    cout << "Total funding provided to all startups: $" << Startup::get_total_funding() << endl;
    cout << endl;

    
    cout << "----- TechStartup: Constructor Overloading -----" << endl;
    TechStartup* techStart = new TechStartup("QuantumLeap", "Technology", 75000, "Quantum Computing");  
    techStart->operate();
    cout << "Tech focus of " << techStart->get_name() << ": " << techStart->get_tech_focus() << endl;
    cout << endl;

   
    cout << "----- Incubator Copy Constructor -----" << endl;
    Incubator* copiedIncubator = new Incubator(*i1);  
    copiedIncubator->operate();
    cout << endl;

    
    delete defaultStartup;
    delete paramStartup;
    delete copyStartup;
    // for (int i = 0; i < 2; ++i) {
    //     delete startups[i];
    // }
    delete techStart;
    delete i1;
    delete copiedIncubator;

    return 0;
}
