#include "Broads.h"
#include<iostream>

using namespace std;

void Broads::setSeparation_distance(int i) {				// Set seperation distance
	Separation_Distance = i;
}

int Broads::getSeparation_distance() {						// Get seperation distance	
	return Separation_Distance;
}

void Broads::is_weather_bad(string s) {						// Separation distance is alrtered depnding
	if (s == "snow" || s == "snowy")						// on the weather
	{
		Separation_Distance = Separation_Distance * 8;
	}

	else if (s == "rain" || s == "rainy")
	{
		Separation_Distance = Separation_Distance * 2;
	}

	else if (s == "ice" || s == "black ice")
	{
		Separation_Distance = Separation_Distance * 10;
	}
	else
	{
		Separation_Distance = Separation_Distance;
	}
}