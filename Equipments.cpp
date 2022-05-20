#include "Equipments.h"

#include <iostream>

using namespace std;

Equipments::Equipments() {
  equip_count=0;
}

Equipments::Equipments(int equipments_count) {
	equip_count=equipments_count;
}

void Equipments::displayDetails() {	
}

Equipments::~Equipments() {
	cout << "Destructor runs" << endl;
}


