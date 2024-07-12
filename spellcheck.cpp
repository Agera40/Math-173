#include "spellcheck.h"
#include "levenshtein.h"
#include <algorithm>

struct WordDistance {
    std::string word;
    int distance;
};

bool operator<(const WordDistance& a, const WordDistance& b) {
    if (a.distance != b.distance) return a.distance < b.distance;
    return a.word < b.word;
}

std::vector<std::string> suggested_corrections(const std::string& word, const std::vector<std::string>& words, int n) {
    std::vector<WordDistance> distances;

    for (const std::string& dict_word : words) {
        int distance = levenshtein(word, dict_word);
        distances.push_back({ dict_word, distance });
    }

    std::sort(distances.begin(), distances.end());

    std::vector<std::string> suggestions;
    for (int i = 0; i < n && i < distances.size(); i++) {
        suggestions.push_back(distances[i].word);
    }

    return suggestions;
}