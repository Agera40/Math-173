#include <vector>
#include <string>
#include "levenshtein.h"

int min(int a, int b, int c){
	if (a < b) {
		if (a < c) return a;
		else return c;
	}
	else {
		if (b < c) return b;
		else return c;
	}
}

int levenshtein(const std::string& a, const std::string& b){
	if (b.size() == 0) return a.size();
	else if (a.size() == 0) return b.size();
	else if (a[0] == b[0])
		return levenshtein(a.substr(1, a.size() - 1), b.substr(1, b.size() - 1));
	else {
		std::string ap = a.substr(1, a.size() - 1), bp = b.substr(1, b.size() - 1);
		return 1 + min(levenshtein(ap, b), levenshtein(a, bp), levenshtein(ap, bp));
	}
}