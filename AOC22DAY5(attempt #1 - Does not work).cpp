#include <iostream>
#include <fstream>
#include <string>
#include <string.h>
#include <vector>
#include <stack>

void debugstack(std::stack<std::string> stack)
{
  while(!stack.empty())
  {
    std::cout << stack.top() << "\n";
    stack.pop();
  }
}
void from1to2(std::stack<std::string>& stack1, std::stack<std::string>& stack2, int amt)
{
  for(int i = 1;i <= amt; ++i)
    {
      stack2.push(stack1.top());
      stack1.pop();
    }

}

int main() {
  //Maintask:Input the crate data
  std::ifstream crateinitial;
  crateinitial.open("crates.txt");
  //Maintask:Interpret the data into each column.
  std::string cratex{};
  int i{};
  int length{};
  std::vector<std::string> column1{11};
  std::vector<std::string> column2{11};
  std::vector<std::string> column3{11};
  std::vector<std::string> column4{11};
  std::vector<std::string> column5{11};
  std::vector<std::string> column6{11};
  std::vector<std::string> column7{11};
  std::vector<std::string> column8{11};
  std::vector<std::string> column9{11};
  while(std::getline(crateinitial, cratex))
    ++length;
  int z = length -1;
  crateinitial.close();
  crateinitial.open("crates.txt");
  while(std::getline(crateinitial, cratex))
    {
      if(z == 0)
        break;
     std::string cratelastplace = cratex.substr(i, i + 3);
      if(cratelastplace.empty() == 0)
        {
         //Subtask: Temporarily store the data into vectors
         std::string middle = cratelastplace.substr(1, 1);
         column1[z] = middle;
        }
        i+=4;
     cratelastplace = cratex.substr(i, i + 3);
      if(cratelastplace.empty() == 0)
        {
        //Subtask: Temporarily store the data into vectors
        std::string middle = cratelastplace.substr(1, 1);
        column2[z] = middle;
        }
        i+=4;
     cratelastplace = cratex.substr(i, i + 3);
      if(cratelastplace.empty() == 0)
        {
        //Subtask: Temporarily store the data into vectors
        std::string middle = cratelastplace.substr(1, 1);
        column3[z] = middle;
        } 
        i +=4;
      cratelastplace = cratex.substr(i, i + 3);
      if(cratelastplace.empty() == 0)
        {
         //Subtask: Temporarily store the data into vectors
         std::string middle = cratelastplace.substr(1, 1);
         column4[z] = middle;
        }
        i+=4;
      cratelastplace = cratex.substr(i, i + 3);
      if(cratelastplace.empty() == 0)
        {
         //Subtask: Temporarily store the data into vectors
         std::string middle = cratelastplace.substr(1, 1);
         column5[z] = middle;
        }
        i+=4;
      cratelastplace = cratex.substr(i, i + 3);
      if(cratelastplace.empty() == 0)
        {
         //Subtask: Temporarily store the data into vectors
         std::string middle = cratelastplace.substr(1, 1);
         column6[z] = middle;
        }
        i+=4;
      cratelastplace = cratex.substr(i, i + 3);
      if(cratelastplace.empty() == 0)
        {
         //Subtask: Temporarily store the data into vectors
         std::string middle = cratelastplace.substr(1, 1);
         column7[z] = middle;
        }
        i+=4;
      cratelastplace = cratex.substr(i, i + 3);
      if(cratelastplace.empty() == 0)
        {
         //Subtask: Temporarily store the data into vectors
         std::string middle = cratelastplace.substr(1, 1);
         column8[z] = middle;
        }
        i+=4;
      cratelastplace = cratex.substr(i, i + 3);
      if(cratelastplace.empty() == 0)
        {
         //Subtask: Temporarily store the data into vectors
         std::string middle = cratelastplace.substr(1, 1);
         column9[z] = middle;
        }
        i = 0;
      --z;
    }
crateinitial.close();
  //Maintask:Enter the data of each column into a STL stack
  //Subtask:translate from vector to stack.
  std::stack<std::string> column1translated;

  for(const auto& a: column1)
    {
      if(a != " ")
        column1translated.push(a);
    }
  //Subtask:translate from vector to stack.
  std::stack<std::string> column2translated;
  for(const auto& a: column2)
    {
      if(a != " ")
        column2translated.push(a);
    }
  //Subtask:translate from vector to stack.
  std::stack<std::string> column3translated;
  for(const auto& a: column3)
    {
      if(a != " ")
        column3translated.push(a);
    }
    //Subtask:translate from vector to stack.
  std::stack<std::string> column4translated;
  for(const auto& a: column4)
    {
      if(a != " ")
        column4translated.push(a);
    }
    //Subtask:translate from vector to stack.
  std::stack<std::string> column5translated;
  for(const auto& a: column5)
    {
      if(a != " ")
        column5translated.push(a);
    }
    //Subtask:translate from vector to stack.
  std::stack<std::string> column6translated;
  for(const auto& a: column6)
    {
      if(a != " ")
        column6translated.push(a);
    }
    //Subtask:translate from vector to stack.
  std::stack<std::string> column7translated;
  for(const auto& a: column7)
    {
      if(a != " ")
        column7translated.push(a);
    }
    //Subtask:translate from vector to stack.
  std::stack<std::string> column8translated;
  for(const auto& a: column8)
    {
      if(a != " ")
        column8translated.push(a);
    }
    //Subtask:translate from vector to stack.
  std::stack<std::string> column9translated;
  for(const auto& a: column9)
    {
      if(a != " ")
        column9translated.push(a);
    }
  
  //Maintask:Interpret the given instructions from a different file.
  std::vector<std::string> instructionset{502};
  std::string inputinstructions{};
  int g = 0;
  std::vector<int> moveamt{};
  std::vector<int> initialpos{};
  std::vector<int> finalpos{};
  moveamt.resize(503);
  initialpos.resize(503);
  finalpos.resize(503);
  std::ifstream instructions;
  instructions.open("instructions.txt");
  while(std::getline(instructions, inputinstructions))
    {
     if(inputinstructions.length() == 18)
      {
        moveamt[i] = stoi(inputinstructions.substr(5, 1));
        initialpos[i] = stoi(inputinstructions.substr(12, 1));
        finalpos[i] = stoi(inputinstructions.substr(17,1));

      }
      else if(inputinstructions.length() == 19)
      {
        moveamt[i] = stoi(inputinstructions.substr(5, 2));
        initialpos[i] = stoi(inputinstructions.substr(13, 1));
        finalpos[i] = stoi(inputinstructions.substr(18,1));
        }
      ++i;
    } 
  //Maintask:Use the instructions to move the data from one stack to another.
//area of interest:    
      for(i = 0; i < 502; ++i)
        {
          if(initialpos[i] == 1 && finalpos[i] == 2)
            from1to2(column1translated, column2translated, moveamt[i]);
          if(initialpos[i] == 1 && finalpos[i] == 3)
            from1to2(column1translated, column3translated, moveamt[i]);
          if(initialpos[i] == 1 && finalpos[i] == 4)
            from1to2(column1translated, column4translated, moveamt[i]);
          if(initialpos[i] == 1 && finalpos[i] == 5)
              from1to2(column1translated, column5translated, moveamt[i]);
          if(initialpos[i] == 1 && finalpos[i] == 6)
              from1to2(column1translated, column6translated, moveamt[i]);
          if(initialpos[i] == 1 && finalpos[i] == 7)
              from1to2(column1translated, column7translated, moveamt[i]);
          if(initialpos[i] == 1 && finalpos[i] == 8)
              from1to2(column1translated, column8translated, moveamt[i]);
          if(initialpos[i] == 1 && finalpos[i] == 9)
              from1to2(column1translated, column9translated, moveamt[i]);
          
          if(initialpos[i] == 2 && finalpos[i] == 1)
            from1to2(column2translated, column1translated, moveamt[i]);
          if(initialpos[i] == 2 && finalpos[i] == 3)
            from1to2(column2translated, column3translated, moveamt[i]);
          if(initialpos[i] == 2 && finalpos[i] == 4)
            from1to2(column2translated, column4translated, moveamt[i]);
          if(initialpos[i] == 2 && finalpos[i] == 5)
              from1to2(column2translated, column5translated, moveamt[i]);
          if(initialpos[i] == 2 && finalpos[i] == 6)
              from1to2(column1translated, column6translated, moveamt[i]);
          if(initialpos[i] == 2 && finalpos[i] == 7)
              from1to2(column2translated, column7translated, moveamt[i]);
          if(initialpos[i] == 2 && finalpos[i] == 8)
              from1to2(column2translated, column8translated, moveamt[i]);
          if(initialpos[i] == 2 && finalpos[i] == 9)
              from1to2(column2translated, column9translated, moveamt[i]);
          
          if(initialpos[i] == 3 && finalpos[i] == 2)
            from1to2(column3translated, column2translated, moveamt[i]);
          if(initialpos[i] == 3 && finalpos[i] == 1)
            from1to2(column3translated, column1translated, moveamt[i]);
          if(initialpos[i] == 3 && finalpos[i] == 4)
            from1to2(column3translated, column4translated, moveamt[i]);
          if(initialpos[i] == 3 && finalpos[i] == 5)
              from1to2(column3translated, column5translated, moveamt[i]);
          if(initialpos[i] == 3 && finalpos[i] == 6)
              from1to2(column3translated, column6translated, moveamt[i]);
          if(initialpos[i] == 3 && finalpos[i] == 7)
              from1to2(column3translated, column7translated, moveamt[i]);
          if(initialpos[i] == 3 && finalpos[i] == 8)
              from1to2(column3translated, column8translated, moveamt[i]);
          if(initialpos[i] == 3 && finalpos[i] == 9)
              from1to2(column3translated, column9translated, moveamt[i]);

          if(initialpos[i] == 4 && finalpos[i] == 2)
            from1to2(column4translated, column2translated, moveamt[i]);
          if(initialpos[i] == 4 && finalpos[i] == 3)
            from1to2(column4translated, column3translated, moveamt[i]);
          if(initialpos[i] == 4 && finalpos[i] == 1)
            from1to2(column4translated, column1translated, moveamt[i]);
          if(initialpos[i] == 4 && finalpos[i] == 5)
              from1to2(column4translated, column5translated, moveamt[i]);
          if(initialpos[i] == 4 && finalpos[i] == 6)
              from1to2(column4translated, column6translated, moveamt[i]);
          if(initialpos[i] == 4 && finalpos[i] == 7)
              from1to2(column4translated, column7translated, moveamt[i]);
          if(initialpos[i] == 4 && finalpos[i] == 8)
              from1to2(column4translated, column8translated, moveamt[i]);
          if(initialpos[i] == 4 && finalpos[i] == 9)
              from1to2(column4translated, column9translated, moveamt[i]);
          
          if(initialpos[i] == 5 && finalpos[i] == 1)
            from1to2(column5translated, column1translated, moveamt[i]);
          if(initialpos[i] == 5 && finalpos[i] == 3)
            from1to2(column5translated, column3translated, moveamt[i]);
          if(initialpos[i] == 5 && finalpos[i] == 4)
            from1to2(column5translated, column4translated, moveamt[i]);
          if(initialpos[i] == 5 && finalpos[i] == 2)
              from1to2(column5translated, column2translated, moveamt[i]);
          if(initialpos[i] == 5 && finalpos[i] == 6)
              from1to2(column5translated, column6translated, moveamt[i]);
          if(initialpos[i] == 5 && finalpos[i] == 7)
              from1to2(column5translated, column7translated, moveamt[i]);
          if(initialpos[i] == 5 && finalpos[i] == 8)
              from1to2(column5translated, column8translated, moveamt[i]);
          if(initialpos[i] == 5 && finalpos[i] == 9)
              from1to2(column5translated, column9translated, moveamt[i]);
          
          if(initialpos[i] == 6 && finalpos[i] == 2)
            from1to2(column6translated, column2translated, moveamt[i]);
          if(initialpos[i] == 6 && finalpos[i] == 1)
            from1to2(column6translated, column1translated, moveamt[i]);
          if(initialpos[i] == 6 && finalpos[i] == 4)
            from1to2(column6translated, column4translated, moveamt[i]);
          if(initialpos[i] == 6 && finalpos[i] == 5)
              from1to2(column6translated, column5translated, moveamt[i]);
          if(initialpos[i] == 6 && finalpos[i] == 3)
              from1to2(column6translated, column3translated, moveamt[i]);
          if(initialpos[i] == 6 && finalpos[i] == 7)
              from1to2(column6translated, column7translated, moveamt[i]);
          if(initialpos[i] == 6 && finalpos[i] == 8)
              from1to2(column6translated, column8translated, moveamt[i]);
          if(initialpos[i] == 6 && finalpos[i] == 9)
              from1to2(column6translated, column9translated, moveamt[i]);

          if(initialpos[i] == 7 && finalpos[i] == 1)
            from1to2(column7translated, column1translated, moveamt[i]);
          if(initialpos[i] == 7 && finalpos[i] == 2)
            from1to2(column7translated, column2translated, moveamt[i]);
          if(initialpos[i] == 7 && finalpos[i] == 3)
            from1to2(column7translated, column3translated, moveamt[i]);
          if(initialpos[i] == 7 && finalpos[i] == 4)
            from1to2(column7translated, column4translated, moveamt[i]);
          if(initialpos[i] == 7 && finalpos[i] == 5)
              from1to2(column7translated, column5translated, moveamt[i]);
          if(initialpos[i] == 7 && finalpos[i] == 6)
              from1to2(column7translated, column6translated, moveamt[i]);
          if(initialpos[i] == 7 && finalpos[i] == 8)
              from1to2(column7translated, column8translated, moveamt[i]);
          if(initialpos[i] == 7 && finalpos[i] == 9)
              from1to2(column7translated, column9translated, moveamt[i]);
          
          if(initialpos[i] == 8 && finalpos[i] == 1)
            from1to2(column8translated, column1translated, moveamt[i]);
          if(initialpos[i] == 8 && finalpos[i] == 2)
            from1to2(column8translated, column2translated, moveamt[i]);
          if(initialpos[i] == 8 && finalpos[i] == 3)
            from1to2(column8translated, column3translated, moveamt[i]);
          if(initialpos[i] == 8 && finalpos[i] == 4)
            from1to2(column8translated, column4translated, moveamt[i]);
          if(initialpos[i] == 8 && finalpos[i] == 5)
              from1to2(column8translated, column5translated, moveamt[i]);
          if(initialpos[i] == 8 && finalpos[i] == 6)
              from1to2(column8translated, column6translated, moveamt[i]);
          if(initialpos[i] == 8 && finalpos[i] == 7)
              from1to2(column8translated, column7translated, moveamt[i]);
          if(initialpos[i] == 8 && finalpos[i] == 9)
              from1to2(column8translated, column9translated, moveamt[i]);
          
          if(initialpos[i] == 9 && finalpos[i] == 1)
            from1to2(column9translated, column1translated, moveamt[i]);
          if(initialpos[i] == 9 && finalpos[i] == 2)
            from1to2(column9translated, column2translated, moveamt[i]);
          if(initialpos[i] == 9 && finalpos[i] == 3)
            from1to2(column9translated, column3translated, moveamt[i]);
          if(initialpos[i] == 9 && finalpos[i] == 4)
            from1to2(column9translated, column4translated, moveamt[i]);
          if(initialpos[i] == 9 && finalpos[i] == 5)
              from1to2(column9translated, column5translated, moveamt[i]);
          if(initialpos[i] == 9 && finalpos[i] == 6)
              from1to2(column9translated, column6translated, moveamt[i]);
          if(initialpos[i] == 9 && finalpos[i] == 7)
              from1to2(column9translated, column7translated, moveamt[i]);
          if(initialpos[i] == 9 && finalpos[i] == 8)
              from1to2(column9translated, column8translated, moveamt[i]); 
        } 
  //Maintask:Output the top of each column.
  std::cout << column1translated.top();
  std::cout << column2translated.top();
  std::cout << column3translated.top(); 
  std::cout << column4translated.top();
  std::cout << column5translated.top();
  std::cout << column6translated.top(); 
  std::cout << column7translated.top();
  std::cout << column8translated.top();
  std::cout << column9translated.top(); 
}
