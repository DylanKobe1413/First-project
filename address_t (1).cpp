#include "address_t.h"

void address_t::set_xValue(int x_Value)
{
	x = x_Value;
}

void address_t::set_yValue(int y_Value)
{
	y = y_Value;
}

void address_t::set_zValue(int z_Value)
{
	z = z_Value;
}

void address_t::set_mValue(int m_Value)
{
	m = m_Value;
}

void address_t::set_Name(string n)
{
	n = nickname;
}

int address_t::get_xValue()
{
	return x;
}

int address_t::get_yValue()
{
	return y;
}

int address_t::get_zValue()
{
	return z;
}

int address_t::get_mValue()
{
	return m;
}

string address_t::get_Name()
{
	return nickname;
}

address_t::address_t()
{
	x = 0;
	y = 0;
	z = 0;
	m = 0;
	nickname = "None";
}

address_t::address_t(int xV, int yV, int zV, int mV, string name)
{
	x = xV;
	y = yV;
	z = zV;
	m = mV;
	nickname = name;
}


