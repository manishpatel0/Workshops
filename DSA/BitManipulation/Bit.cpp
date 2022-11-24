#include <iostream>
using namespace std;

int getBit(int n, int pos){
	/* 	n = 01001
	Suppose we need to get bit at position, i = 2;
		1 << i = 0100
		0101 & 0100 = 0100
		if(n & (1 << i) != 0), then bit is 1
	*/
	return ((n & (1<pos) != 0));
}

int setBit(int n, int pos){
	/*
		n = 0101
	Suppost we need to set bit at position, i=1
		1<<i = 0010
		n | 1<<pos , then bit is 0111
		*/
	return ((n | 1<<pos));
}


int clearBit(int n, int pos){
	/*
		n = 0101
	Suppose we need to clear bit at position , i = 2;
		1 << i = 0100,
		~0100 = 1011 
		0101 &  = 0001,then bit is 0001
		*/
	int mask = ~(1<<pos);
	return (n & mask);
}


int updateBit(int n, int pos, int value){
	/*
		n = 0101
	Suppose wn need to update bit at position, i = 1 to 1
		1<< i = 0010
		~0010 = 1101
		0101 & 1101 = 0101
		1 << i = 0010
		0101 | 0010 = 0111, then bit is 0111
		*/
	int mask = ~(1<<pos);
	n = n & mask;
	return (n | (value << pos));
}


int main(int argc, char const *argv[])
{
	cout << getBit(5,2) << endl;
	cout << setBit(5,1) << endl;
	cout << clearBit(5,2) << endl;
	cout << updateBit(5,1,1)<< endl;
	
	 
	return 0;
}