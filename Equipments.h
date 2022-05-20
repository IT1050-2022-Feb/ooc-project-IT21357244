#pragma once

#include "Inventory.h"  //Inheritance with Inventory

class Equipments : public Inventory {
	protected:
		int equip_count;
	public:
		Equipments();
		Equipments(int equipments_count);
		void displayDetails();
		~ Equipments();
};

