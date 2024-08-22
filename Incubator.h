#include <string>
#include <vector>
#include "Startup.h"

class Incubator {
private:
    std::string name;
    std::vector<Startup*> startups;

public:
    Incubator(std::string name);

    Incubator& accept_startup(Startup* startup);
    void provide_resources();
    ~Incubator();
};
