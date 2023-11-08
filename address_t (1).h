#pragma once
#include <string>
#include <string>
using namespace std;
class address_t
{
private: 
		 int x;
		 int y;
		 int z;
		 int m;
		 string nickname = "";


public: //setters
		void set_xValue(int x_Value);

		void set_yValue(int y_Value);

		void set_zValue(int z_Value);
		
		void set_mValue(int m_Value);

		void set_Name(string n);

		//getters
		int get_xValue();

		int get_yValue();

		int get_zValue();

		int get_mValue();

		string get_Name();
		// constructors deafult and parameterized.
		address_t();
		address_t(int, int, int, int, string);

		

};

