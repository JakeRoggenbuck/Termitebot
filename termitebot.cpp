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
                           "configRedTheme"};

    std::string conf_path = "cp -f $HOME/.config/termite/dots/" +
                            names[userin] + " $HOME/.config/termite/config";

    std::cout << conf_path << "\n";
    system(conf_path.c_str());

    return 0;
}
