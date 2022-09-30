#pragma once
#include<string>

//left triming
inline std::string ltrim(std::string s)
	{
		s.erase(s.begin(), std::find_if(s.begin(), s.end(), [](unsigned char ch) {
			return !std::isspace(ch);
			}));
		return s;
	}
//right triming
inline std::string& rtrim(std::string& s)
	{
		s.erase(std::find_if(s.rbegin(), s.rend(), [](unsigned char ch) {
			return !std::isspace(ch);
			}).base(), s.end());
		return s;
	}
//both trim
inline std::string trim(std::string& s)
	{
		return ltrim(rtrim(s));
	}