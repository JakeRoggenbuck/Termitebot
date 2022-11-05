#include <iostream>
#include <string>

int main() {
    std::cout << "████████╗███████╗██████╗ ██████╗  ██████╗ ████████╗\n"
              << "╚══██╔══╝██╔════╝██╔══██╗██╔══██╗██╔═══██╗╚══██╔══╝\n"
              << "   ██║   █████╗  ██████╔╝██████╔╝██║   ██║   ██║   \n"
              << "   ██║   ██╔══╝  ██╔══██╗██╔══██╗██║   ██║   ██║   \n"
              << "   ██║   ███████╗██║  ██║██████╔╝╚██████╔╝   ██║   \n"
              << "   ╚═╝   ╚══════╝╚═╝  ╚═╝╚═════╝  ╚═════╝    ╚═╝   \n"
              << "\n";

    std::cout << "Termitebot: choose theme number\n1:Nature 2:Nord: 3:Ashes "
                 "4:Eighties 5:Monokai 6:Zenburn 7:Red 8:90s: ";

    int userin;
    std::cin >> userin;

    std::string names[] = {"configNatureTheme",  "configNordTheme",
                           "configAshesDark",    "configEightiesTheme",
                           "configMonokaiTheme", "configZenburnTheme",
                           "configRedTheme",     "config90s"};

    int names_len = *(&names + 1) - names;
    if (!(userin > 0 && userin <= names_len)) {
        std::cout << "Option not found."
                  << "\n";
        return -1;
    }

    std::string move_cmd = "cp -f $HOME/.config/termite/dots/" +
                           names[userin - 1] + " $HOME/.config/termite/config";

    std::cout << move_cmd << "\n";
    system(move_cmd.c_str());

    return 0;
}
