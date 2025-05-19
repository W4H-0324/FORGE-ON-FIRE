#pragma once
#include <string>
using namespace std;

class Material {
public:
    virtual ~Material() = default;
    virtual string matName() const = 0;
    virtual int matDmg() const = 0;
    virtual int matDur() const = 0;
};

class Diamond : public Material {
public:
    string matName() const override;
    int matDmg() const override;
    int matDur() const override;
};

class Gold : public Material {
public:
    string matName() const override;
    int matDmg() const override;
    int matDur() const override;
};

class Iron : public Material {
public:
    string matName() const override;
    int matDmg() const override;
    int matDur() const override;
};

class Wood : public Material {
public:
    string matName() const override;
    int matDmg() const override;
    int matDur() const override;
};
