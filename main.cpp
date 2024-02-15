#include <iostream>
#include "Graph.h"


int main()
{
	std::string Oleg = "Oleg";
	std::string Nikita = "Nikita";
	std::string Nastya = "Nastya";
	std::string Vanya = "Vanya";
	std::string Jenya = "Jenya";
	
	Graph name;

	name.addUser(Oleg);
	name.addUser(Nikita);
	name.addUser(Nastya);
	name.addUser(Vanya);
	name.addUser(Jenya);
	
	name.addEdge(Oleg, Nikita, 1);
	name.addEdge(Nikita, Nastya, 1);
	name.addEdge(Nastya, Vanya, 1);
	name.addEdge(Vanya, Jenya, 1);
	
	name.print(3);

	return 0;
}