#pragma once
#include<vector>
#include<string>
#include<algorithm>

//Splits strings based on delimeters given to It (takes a container)

inline std::vector<std::string> split_by_delms(auto Start, auto End, const std::string& delms)
{
    std::vector<std::string> LIST;
    auto flaggedIterStart = Start;
    auto flaggedIterEnd = std::find_first_of(Start, End, delms.begin(), delms.end());
    while (flaggedIterEnd != End)
    {
        std::string tempHolder;
        if (std::distance(flaggedIterStart, flaggedIterEnd) != 0)
        {
            std::for_each(flaggedIterStart, flaggedIterEnd, [&](const char& chr) {
                tempHolder.push_back(chr);
                });
            LIST.emplace_back(tempHolder);
        }
        flaggedIterStart = flaggedIterEnd + 1;
        flaggedIterEnd = std::find_first_of(flaggedIterStart, End, delms.begin(), delms.end());
    }
    if (std::distance(flaggedIterStart, flaggedIterEnd) != 0)
    {
        std::string tmp;
        std::for_each(flaggedIterStart, flaggedIterEnd, [&](const char& chr) {
            tmp.push_back(chr);
            });
        LIST.emplace_back(tmp);
    }
    return LIST;
}