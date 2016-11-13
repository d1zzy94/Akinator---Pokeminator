#include <iostream>
#include "Pokemon.h"
#include <fstream>
#include <vector>

using namespace std;

int main() {

	fstream file;
	string tempS;
	int licznik = 0;
	Pokemon tempP;
	vector<Pokemon> tab;

	file.open("db.txt");


	while (!file.eof())
	{
		getline(file, tempP.nazwa);
		getline(file, tempP.typ);
		getline(file, tempP.kolor);
		getline(file, tempP.level);
		getline(file, tempS);
		tab.push_back(tempP);
	}

	for (int i = 0; i < tab.size(); i++)
	{
		cout << tab[i].nazwa << " " << tab[i].typ << " " << tab[i].kolor << " " << tab[i].level << endl;
	}

	file.close();


	cout << "\nWitaj w Pokeminatorze!\n\n"
		<< "Moim zadaniem bedzie odgadniecie o Pokemonie o ktorym myslisz.\n";

	string str1 = "Czy ten Pokemon ";


	return 0;
}