#include "Startup.h"
#include "Incubator.h"

using namespace IncubatorSim;

int main() {
    Startup s1("TechNova", "Technology", 50000);
    Startup s2("HealthPlus", "Healthcare", 30000);

    Incubator i1("InnovateX");

    s1.pitch_idea();
    s2.get_funding(20000);

    i1.accept_startup(s1);
    i1.provide_resources(s1);

    return 0;
}
