#include <iostream>
#include <fstream>
#include <string>
#include <vector>
int main() {
  //Maintask: Interpret data input


  //Subtask: Split the data line into 2
    std::ifstream inputdata;
  inputdata.open("assignment_data.txt");
  std::string datainput;
  std::string comma = ",";
  std::vector<std::string> temp1{1000};
  std::vector<std::string> temp2{1000};
  int i{};
  
  while(std::getline(inputdata, datainput))
    {
      size_t found = datainput.find(comma);
      temp1.at(i) = datainput.substr(0, found);
      temp2.at(i) = datainput.substr(found + 1, datainput.length());
      ++i;
    }
  
  //Subtask: Turn the x-y data into x (x+1) ... y.
  std::string conversion1{};
  std::string conversion2{};
  std::string hyphen = "-";
  int line1lowerbound{};
  int line1upperbound{};
  int line2lowerbound{};
  int line2upperbound{};
  std::string tempstr1{};
  std::string tempstr2{};
  int d{};
  int line1range{};
  int line2range{};
  for(i = 0; i < temp1.size(); ++i)
    {
      conversion1 = temp1.at(i);
      conversion2 = temp2.at(i);
      size_t findfirst = conversion1.find(hyphen);
      size_t findsecond = conversion2.find(hyphen);
      tempstr1 = conversion1.substr(0 , findfirst);
      tempstr2 = conversion1.substr(findfirst + 1, conversion1.length());
      line1lowerbound = stoi(tempstr1);
      line1upperbound = stoi(tempstr2);
      tempstr1 = conversion2.substr(0 , findsecond);
      tempstr2 = conversion2.substr(findsecond + 1, conversion2.length());
      line2lowerbound = stoi(tempstr1);
      line2upperbound = stoi(tempstr2);
      line1range = line1upperbound - line1lowerbound;
      line2range = line2upperbound - line2lowerbound;
      if(line2range < line1range)
      {
        if(line1upperbound >= line2lowerbound && line1lowerbound <=line2lowerbound)
         ++d;
        else if(line1upperbound >= line2upperbound && line2upperbound >= line1lowerbound)
          ++d;
        else if(line1upperbound >= line2lowerbound && line2upperbound >= line1upperbound)
          ++d;
        else if(line1lowerbound < line2upperbound && line1lowerbound < line1lowerbound)
          ++d;
      }
      else if(line2range >= line1range)
      {
        if(line2upperbound >= line1lowerbound && line2lowerbound <=line1lowerbound)
         ++d;
        else if(line2upperbound >= line1upperbound && line1upperbound >= line2lowerbound)
          ++d;
        else if(line2upperbound >= line1lowerbound && line1upperbound >= line2upperbound)
          ++d;
        else if(line2lowerbound < line1upperbound && line1lowerbound < line2lowerbound)
          ++d;
    }
      }
  std::cout << d;
  return 0;
}
