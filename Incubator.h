#ifndef INCUBATOR_H
#define INCUBATOR_H

#include <vector>
#include "Organization.h"
#include "Startup.h"

class Incubator : public Organization {
private:
    std::vector<Startup*> startups;
    static int totalStartups;

public:
    Incubator(std::string name);

   
    void operate() const override;
    std::string get_name() const override;

   
    static int get_total_startups();

    Incubator& accept_startup(Startup* startup);
    void provide_resources();

    ~Incubator();
};

#endif
