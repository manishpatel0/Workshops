# BIT Manipulation

## Basic over
- setBit
<p color = 'red'>

 	n = 01001
	Suppose we need to get bit at position, i = 2;
		1 << i = 0100
		0101 & 0100 = 0100
		if(n & (1 << i) != 0), then bit is 1
</p>

- getBit
<p color = 'blue'>
n = 0101
	Suppost we need to set bit at position, i=1
		1<<i = 0010
		n | 1<<pos , then bit is 0111
</p>


- clearBit
<p color = 'green'>
	n = 0101
	Suppose we need to clear bit at position , i = 2;
		1 << i = 0100,
		~0100 = 1011 
		0101 &  = 0001,then bit is 0001
</p>

- updateBit
<p color = 'yellow'>
n = 0101
	Suppose wn need to update bit at position, i = 1 to 1
		1<< i = 0010
		~0010 = 1101
		0101 & 1101 = 0101
		1 << i = 0010
		0101 | 0010 = 0111, then bit is 0111
</p>
