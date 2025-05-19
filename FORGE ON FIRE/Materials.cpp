#include "Materials.h"

string Diamond::matName() const {
	return "Diamond";
}
int Diamond::matDmg() const {
	return 90;
}
int Diamond::matDur() const {
	return 100;
}

string Gold::matName() const {
	return "Gold";
}
int Gold::matDmg() const {
	return 80;
}
int Gold::matDur() const {
	return 40;
}

string Iron::matName() const {
	return "Iron";
}
int Iron::matDmg() const {
	return 50;
}
int Iron::matDur() const {
	return 80;
}

string Wood::matName() const {
	return "Wood";
}
int Wood::matDmg() const {
	return 20;
}
int Wood::matDur() const {
	return 30;
}
