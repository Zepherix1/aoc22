#include <set>
#include <string>
#include <fstream>
#include <iostream>
    int main()
{
    std::ifstream opentext("packet.txt");
    std::string data;
    std::getline(opentext, data);
    int i{};
    for( i =0; i < data.length()- 3; i++)
    {
      std::string substring = data.substr(i, 4);
        std::set<char> temp(begin(substring), end(substring));
        if(temp.size() == 4)
          break;
    } 
    std::cout << i +4;
}
