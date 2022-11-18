#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

int intArray[10];
int size;

bool isEmpty(){
	return size == 0;
}

int getMinimun(){
	return intArray[0];
}

int getLeftChildIndex(int nodeIndex){
	return 2*nodeIndex + 1;
}

int getRightChildIndex(int nodeIndex) {
	return 2*nodeIndex + 2;
}

int getParentIndex(int nodeIndex) {
	return (nodeIndex - 1)/2;
}

bool isFull(){
	return size == 10;
}

/** 
 * Heep up the new element,until heep property is broken,
 * Steps:
 * 1. Compare node's value with parent's value.
 * 2. Swap them, if they are in wrong order.
**/

void heapUp(int nodeIndex){
	int parentIndex, tmp;
	if(nodeIndex != 0){
		parentIndex = getParentIndex(nodeIndex);
		tmp = intArray[parentIndex];
		intArray[parentIndex] = intArray[nodeIndex];
		intArray[nodeIndex] = tmp;
		heapUp(parentIndex);
	}
}

/**
 * Heep down the root element being least in value, untile heap property is broken.
 * Steps:
 * 1. if current node has no children, done.
 * 2. if current node has one children and heep property is broken,
 * 2. Swap the current node and children and heap down,
 * 4. if current node has one children and heap property is broken, fine smaller one 
 * 5. Swap the current node and child node and heep down.
 * */

void heapDown(int nodeIndex){
	int leftChildIndex, rightChildIndex, minIndex, tmp;
	leftChildIndex = getLeftChildIndex(nodeIndex);
	rightChildIndex = getRightChildIndex(nodeIndex);
	if (rightChildIndex >= size)
	{
		if(leftChildIndex >= size){
			return;
		} else {
			minIndex = leftChildIndex;
		}
	} else {
		if(intArray[leftChildIndex] <= intArray[rightChildIndex])
			minIndex = leftChildIndex;
		else 
			minIndex = rightChildIndex;
	}

	if( intArray[nodeIndex] > intArray[minIndex]){
		tmp = intArray[minIndex];
		intArray[minIndex] = intArray[nodeIndex];
		intArray[nodeIndex] = tmp;
		heapDown(minIndex);
	}
}

void insert(int value){
	size++;
	intArray[size -1] = value;
	heapUp(size -1);
}

void removeMin(){
	intArray[0] = intArray[size -1 ];
	size--;
	if(size >0)
		heapDown(0);
}


int main(int argc, char const *argv[])
{
	 //Heap
	/* 			5
	*
	*/
	insert(5);
	/**
	 * 				1
	 * 				|
	 * 			5---|
	 * */
	insert(1);
	/**
	 * 				1
	 * 				|
	 * 			5---|----3
	 * */
	insert(3);
	/**				1
	 * 				|
	 * 			5---|---3
	 * 			|
	 * 		8---|
	 * */
	insert(8);
	/**				1
	 * 				|
	 * 			5---|---3
	 * 			|
	 * 		8---|--9
	 * */
	insert(9);

	/**				1
	 * 				|
	 * 			5---|---3
	 * 			|		|
	 * 		8---|--9 6--| 				
	 * */
	insert(6);

	/**				1
	 * 				|
	 * 			5---|---3
	 * 			|		|
	 * 		8---|--9 6--|--2
	 * */
	insert(2);

	printf( "%d ", getMinimun());

	removeMin();

	/**				2
	 * 				|
	 * 			5---|---3
	 * 			|		|
	 * 		8---|--9 6--|
	 * */
	printf("%d", getMinimun());
	return 0;
}