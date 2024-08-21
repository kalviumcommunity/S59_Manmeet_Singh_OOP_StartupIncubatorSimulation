#ifndef INCUBATOR_H
#define INCUBATOR_H

#include "Startup.h"
#include <vector>

namespace IncubatorSim {
    class Incubator {
    private:
        std::string name;
        std::vector<Startup> startups;

    public:
        Incubator(std::string n);
        void accept_startup(Startup startup);
        void provide_resources(Startup &startup);
    };
}

#endif
