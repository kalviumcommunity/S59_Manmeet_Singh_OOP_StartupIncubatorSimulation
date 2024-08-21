#ifndef STARTUP_H
#define STARTUP_H

#include <string>

namespace IncubatorSim {
    class Startup {
    private:
        std::string name;
        std::string industry;
        double funding;

    public:
        Startup(std::string n, std::string ind, double fund);
        void pitch_idea();
        void get_funding(double amount);
        std::string get_name() const;
    };
}

#endif
    