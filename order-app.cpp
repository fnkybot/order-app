#include <iostream>
#include "OrderApp.h";
#include "Products.h";

std::string wd::OrderApp::name = "\n      RESTAURACJA ABC      \n|--------| MENU |---------|\n";
char wd::OrderApp::separator = ';';

int main(int argc, char* argv[])
{
    
    std::string table;
    if (argc > 1 && std::string(argv[1]) == "-h") // '1' bo '0' to sciezka pliku
    {
        std::cout << "\tUzyj\n\t-s [NR_STOLIKA], aby zlozyc zamowienie.\n\n";
        return 0;
    }
    if (argc > 3)
    {
        std::cout << "[ERR] Podano za duzo parametrow startowych.\n\n\tUzyj\n\t-s [NR_STOLIKA], aby zlozyc zamowienie.\n\n";
        return 0;
    }
    if (argc < 3)
    {
        std::cout << "[ERR] Nie podano parametrow startowych.\n\n\tUzyj\n\t-s [NR_STOLIKA], aby zlozyc zamowienie.\n\n";
        return 0;
    }
    for (int i = 1; i < argc; i++)
    {
        if (std::string(argv[i]) == "-s")
        {
            table = std::string(argv[++i]);
        }
    }

    wd::OrderApp orderApp(table);
    orderApp.init();

    return 0;
}
