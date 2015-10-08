#include "parsing.h"

std::vector<std::string> divide_by_words(const std::string & sentence)
{
	std::string word;
	std::vector< std::string > ret;
	for (int i = 0; i < sentence.size(); ++i)
	{
		if (sentence[i] == ' ' && word.size() > 0) // Don't let an unempty word appear in the sentence
		{
			ret.push_back(word);
			word = "";
		}
		else
		{
			word += sentence[i];
		}
	}
	return ret;
}

