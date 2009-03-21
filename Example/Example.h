/*
Provides: ExampleStructure1, ExampleStructure2, exampleFunction1,
	exampleFunction2, exampleFunction3
Author: Chen Xing
Date: 2009-03-13
Source: Conversation with H�kan and Ulf.
Description: Example structures and functions that doesn't really do
	anything. Latex commands are supported here, though! Like this: $2^2=3$
Time: O(M * N^4) where M = cats, N = mice
Memory: O(2^N) where N = cats
Status: Unknown
Changes:
	2009-03-20 - Minor modifications by Ulf.
*/
#pragma once

#include <iostream> /// Header name will be removed from final list.
#include "Example.h" /// Header name will be kept in final list.

class ExampleStructure1
{
	ll alpha;
	pii nodes;
	vi edges;
};

class ExampleStructure2
{
	int a;
	int b;
	int c;
};

int exampleFunction1(vi mice, int* cats, int catsCount) {
	/// This is a stupid comment that will be removed.
	int sum = 0;

	rep(i, 1, catsCount) {
		// This comment will be kept!
		trav(it, mice) {
			/// This will be removed.
			// And this kept.
			sum = cats[i] * (*it);
		}
	}

	return sum;
}

int exampleFunction2() {
	return rand();
}

int exampleFunction3(int a, int b, int c) {
	return exampleFunction2() * a * b * c;
}
