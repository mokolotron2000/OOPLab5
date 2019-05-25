#include "Boat.h"



Boat::Boat()
{
	speed = 0;
	weight = 0;
	capacity = 0;
	cargo_capacity = 0;
}

float Boat::get_speed(){return speed;}
float Boat::get_weight(){return weight;}
float Boat::get_capacity(){return capacity;}
float Boat::get_cargo_capacity(){return cargo_capacity;}

void Boat::set_speed(float _speed) {
	if (_speed>0) speed = _speed;
}

void Boat::set_weight(float _weight) {
	if (_weight > 0) weight = _weight;
}

void Boat::set_capacity(float _capacity)
{
	if (_capacity > 0) capacity = _capacity;
}

void Boat::set_cargo_capacity(float _cargo_capacity)
{
	if (_cargo_capacity > 0) cargo_capacity = _cargo_capacity;
}


Boat::~Boat()
{
}
