#include "Startup.h"
#include "Incubator.h"
#include <iostream>

using namespace std;

int main() {
  
    Startup startups[] = {
        Startup("TechNova", "Technology", 50000),
        Startup("HealthPlus", "Healthcare", 30000),
        Startup("EcoSolutions", "Environmental", 45000)
    };


    Incubator i1("InnovateX");

  
    for (int i = 0; i < 3; ++i) {
        i1.accept_startup(startups[i]);
    }

    return 0;
}
