#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
vector<string> items = {};
string x;

cout << "Start entering your items. (Enter 'quit' to stop.) >>";

while (x != "quit")
{
  cin >> x;
  if (std::find(items.begin(), items.end(), x) != items.end())
  {
    std::cout << "This item already exists." << std::endl;
  }
  else
  {
    items.push_back(x);
  }
}

for (string item : items)
{
  if (item == "quit")
  {
    break;
  }
  else
  {
    cout << item << "\n";
  }
  
}

return 0;
}
