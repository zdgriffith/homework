#include <iostream>
#include <fstream>

int main()
{
   std::string line;
   std::fstream mm("matrix_market.txt");
   while (std::getline(mm,line))
   {
       if (line[0] != '%' )
       {
        std::cout << line << std::endl;
        break;
       }
   }
}
