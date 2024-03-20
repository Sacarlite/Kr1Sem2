#pragma once
#include <vector>//Библеотека подключения вектора
#include "Apartment.h"//Подключение HeaderFile с классом Apartment
std::vector<Apartment> SamplingApartmentsByRoomCount(std::vector<Apartment> apartments);//Выборка по кол-ву квартир
std::vector<Apartment> SamplingApartmentsByRoomCountAndFloorGap(std::vector<Apartment> apartments);//Выборка по кол-ву квартир и положения на этаже в заданом промежутке
std::vector<Apartment> SamplingApartmentsByArea(std::vector<Apartment> apartments);//Выборка по площади

