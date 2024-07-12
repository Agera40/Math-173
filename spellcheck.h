#pragma once
#include <string>
#include <vector>

std::vector<std::string> suggested_corrections(const std::string& word, const std::vector<std::string>& dictionary_words, int n = 3);