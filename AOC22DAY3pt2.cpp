#include <string>
#include <vector>
#include <set>
#include <fstream>
#include <bits/stdc++.h>
#include <iostream>
    int main()
{
    std::string line{};
    std::string buffer{};
    std::ifstream openfile;
    openfile.open("sack.txt");
    int i{};
    std::vector<std::string> input;
    while(std::getline(openfile, line))
          {
            input.push_back(line);
          }
  std::vector<char> characters;
    for(int i = 0; i < input.size(); i +=3)
          {

              std::set<char> temp1(input[i].begin(), input[i].end());
              std::set<char> temp2(input[i+1].begin(), input[i+1].end());
              std::set<char> temp3(input[i+2].begin(), input[i+2].end());

            std::vector<char> tempcompare{};
            std::set_intersection(temp1.begin(), temp1.end(), temp2.begin(), temp2.end(), std::back_inserter(tempcompare));
            for(const auto& a: tempcompare)
            std::set<char> compare(tempcompare.begin(), tempcompare.end());
            std::set_intersection(tempcompare.begin(), tempcompare.end(), temp3.begin(), temp3.end(), std::back_inserter(characters));
          } 
  int result{};
  for (const auto& c : characters) {
    if(isupper(c))
      result = result + c - 38;
    else
      result = result + c - 96;
  }
  std::cout << result;
}
