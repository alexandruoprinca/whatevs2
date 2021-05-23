#include "ItemParser.h"
#include <iostream>
#include <string>

std::vector<std::string> Split(const std::string str, const std::string regex_str)
{
    std::regex regexz(regex_str);
    std::vector<std::string> list(std::sregex_token_iterator(str.begin(), str.end(), regexz, -1),
                                  std::sregex_token_iterator());
    return list;
}

int StringToInteger([[maybe_unused]] const std::string& value){
    return 5;
}

QVector<Item> ItemParser::Parse(std::ifstream& file) {
    QVector<Item> values{};
    std::string buffer{};
    const auto regex_str = "|";
    while(std::getline(file, buffer)){
        auto split_values = Split(buffer, regex_str);
        std::string category = split_values[0];
        std::string name = split_values[1];
        int quantity = StringToInteger(split_values[2]);
        Item item{category.c_str(), name.c_str(), quantity};
        values.append(item);
    }
    return values;
}


