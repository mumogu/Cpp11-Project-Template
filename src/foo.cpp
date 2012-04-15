#include "foo.h"

#include <stdio.h>
#include <vector>
#include <array>
#include <unordered_set>

void Foo::cpp11test() {
	// Auto
	auto x = 42;
	printf("x ist %d.\n", x);

	// Lambdas
	[] () { printf("Das ist eine Lambda-Funcktion!\n"); } ();

	auto func = [] () { printf("Hello World!\n"); };
	func();

	auto func2 = [] (int x) { printf("Argument ist %d.\n", x); };
	func2(42);

	// Foreach
	std::vector<int> v;
	v.push_back(23);
	v.push_back(42);

	for(auto i : v) {
		printf("%d\n", i);
	}

	int a[2] = {23, 42};
	for(auto i : a) {
		printf("%d\n", i);
	}

	std::array<int, 2> b;
	b[0] = 23;
	b[1] = 42;

	for(auto i : b) {
		printf("%d\n", i);
	}

	// Hashtables
	std::unordered_set<int> set;
	set.insert(23);
	set.insert(42);	
}
