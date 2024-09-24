#ifndef ORGANIZATION_H
#define ORGANIZATION_H

#include <string>

class Organization {
protected:
    std::string name;
    std::string industry;

public:
    Organization();
    Organization(std::string name, std::string industry);

    virtual void operate() const = 0;
    virtual std::string get_name() const = 0;

    virtual ~Organization();
};

#endif
