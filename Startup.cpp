#include "Startup.h"
#include <iostream>

using namespace std;

namespace IncubatorSim {
    Startup::Startup(string n, string ind, double fund) : name(n), industry(ind), funding(fund) {}

    void Startup::pitch_idea() {
        cout << name << " is pitching their innovative idea in the " << industry << " industry." << endl;
    }

    void Startup::get_funding(double amount) {
        funding += amount;
        cout << name << " has received funding of $" << amount << ". Total funding is now $" << funding << "." << endl;
    }

    string Startup::get_name() const {
        return name;
    }
}
