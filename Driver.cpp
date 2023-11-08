#include <iostream>
#include "address_t.h"
#include <string>
using namespace std;

void CompareTo(address_t network1, address_t network2);
void printNetwork(address_t network);

int main(void)
{
	address_t first_network(111, 22, 3, 44, "Borneo");
	address_t second_network(555, 66, 7, 88, "Java");
	address_t third_network(111, 22, 5, 66, "Sumatra");
	address_t fourth_network(222, 33, 5, 77, "Jakarta");
	 printNetwork(first_network);
	 printNetwork(second_network);
	 printNetwork(third_network);
	 printNetwork(fourth_network);
	 CompareTo(first_network, third_network);
}

void printNetwork(address_t network)
{
	cout << network.get_xValue() << " " << network.get_yValue() << " " << network.get_zValue() << " " << network.get_mValue() << "\t" << network.get_Name() << "\n";

}

void CompareTo(address_t network1, address_t network2)
{
	if (network1.get_xValue() == network2.get_xValue() &&  network1.get_yValue() == network2.get_yValue())
		cout << "Machine " << network1.get_Name() << " and " << network2.get_Name() << " are on the same local network.";
}