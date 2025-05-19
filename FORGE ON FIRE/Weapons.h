#pragma once
#include "Materials.h"
#include <memory>
#include <string>
using namespace std;

class Weapon {
protected:
    unique_ptr<Material> material;
    double wepDmg;
public:
    Weapon(unique_ptr<Material> mat, double basedmg);
    virtual string wepName() const = 0;
    virtual double totalDmg() const;
    virtual int totalDur() const;
    virtual string matName() const;
};

class Sword : public Weapon {
public:
    Sword(unique_ptr<Material> mat);
    string wepName() const override;
};

class Spear : public Weapon {
public:
    Spear(unique_ptr<Material> mat);
    string wepName() const override;
};

class Axe : public Weapon {
public:
    Axe(unique_ptr<Material> mat);
    string wepName() const override;
};

class Claymore : public Weapon {
public:
    Claymore(unique_ptr<Material> mat);
    string wepName() const override;
};

class Ninjato : public Weapon {
public:
    Ninjato(unique_ptr<Material> mat);
    string wepName() const override;
};

class Katana : public Weapon {
public:
    Katana(unique_ptr<Material> mat);
    string wepName() const override;
};
