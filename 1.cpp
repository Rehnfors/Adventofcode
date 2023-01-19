#include <iostream>
#include <list>
#include <fstream>
#include <sstream>
#include <string>

using namespace std;

/*
read input from file
store elfNo and carry total for each elf
find out which elf carries the most calories
*/

class Elf
{
    private:
        int elfNo;
        int carryTotal = 0;
    public:
        int set_elfNo(int) {this->elfNo = elfNo;}
        int get_elfNo() {return this->elfNo;}
        int set_carryTotal(int) {this->carryTotal += carryTotal;}
        int get_carryTotal() {return this->carryTotal;}
};

class ElfList
{
    private:
        list<Elf *> Elves;
    public:
        void readFile(string filename)
        {
            ifstream file(filename);
            string line;
            if(file.is_open())
            {
                while(getline(file, line))
                {
                    stringstream stream(line);
                    Elf *e = new Elf;
                    int food;

                    getline(stream, food, ' ');
                    e->set_carryTotal(food);

                }
            }
            
            
        }

}

int main(int argc, char const *argv[])
{
    
    return 0;
}

