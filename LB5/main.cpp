#include <iostream>
#include "Commander.h"
#include "Batalion.h"

int main() {
    //std::cout << "Hello, World!" << std::endl;
    Batalion *batalion = new Batalion(300);
    batalion->setData("jan", "private", 0);
    batalion->getData(0);
    Commander commander;
    commander.Promote(*batalion->getSoldier(0), "lieutenant");
    batalion->getSoldier(1)->patrol();
    batalion->getSoldier(1)->defendArea();
    delete batalion;
    return 0;
}
