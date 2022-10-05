#include<ranges>
#include<vector>
#include<iostream>

int main()
{
    std::vector<int> v{1,2,3,4,5,6,7,8,9,10};
    for(const auto itm : v | std::ranges::views::drop(2))
    {
        std::cout << itm << std::endl;
    }
    return 0;
}