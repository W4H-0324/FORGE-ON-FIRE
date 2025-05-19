#include "Weapons.h"

Weapon::Weapon(unique_ptr<Material> mat, double basedmg) : material(move(mat)), wepDmg(basedmg) {}

double Weapon::totalDmg() const {
	return material->matDmg() * wepDmg;
}

int Weapon::totalDur() const {
	return material->matDur();
}
string Weapon::matName() const {
	return material->matName();
}

Sword::Sword(unique_ptr<Material> mat) : Weapon(move(mat), 1.4) {}
string Sword::wepName() const {
	return "Sword";
}

Spear::Spear(unique_ptr<Material> mat) : Weapon(move(mat), 1.2) {}
string Spear::wepName() const {
	return "Spear";
}

Axe::Axe(unique_ptr<Material> mat) : Weapon(move(mat), 1.1) {}
string Axe::wepName() const {
	return "Axe";
}

Claymore::Claymore(unique_ptr<Material> mat) : Weapon(move(mat), 1.8) {}
string Claymore::wepName() const {
	return "Claymore";
}

Ninjato::Ninjato(unique_ptr<Material> mat) : Weapon(move(mat), 1.6) {}
string Ninjato::wepName() const {
	return "Ninjato";
}

Katana::Katana(unique_ptr<Material> mat) : Weapon(move(mat), 1.4) {}
string Katana::wepName() const {
	return "Katana";
}
