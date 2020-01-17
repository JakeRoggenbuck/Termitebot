#include <iostream>
using namespace std;

int main() {
	cout << "████████╗███████╗██████╗ ██████╗  ██████╗ ████████╗\n"
		 <<	"╚══██╔══╝██╔════╝██╔══██╗██╔══██╗██╔═══██╗╚══██╔══╝\n"
		 <<	"   ██║   █████╗  ██████╔╝██████╔╝██║   ██║   ██║   \n"
		 <<	"   ██║   ██╔══╝  ██╔══██╗██╔══██╗██║   ██║   ██║   \n"
		 <<	"   ██║   ███████╗██║  ██║██████╔╝╚██████╔╝   ██║   \n"
		 <<	"   ╚═╝   ╚══════╝╚═╝  ╚═╝╚═════╝  ╚═════╝    ╚═╝   \n" << endl;
                                                   

	cout << "Termitebot: choose theme number\n1:Nature 2:Nord: 3:Ashes 4:Eighties 5:Monokai 6:Zenburn 7:Red 8:90s: ";
	int userin;
	cin >> userin;	
	
	switch(userin) {
		case 1 : system("cp -f $HOME/.config/termite/dots/configNatureTheme $HOME/.config/termite/config"); 
			break;
		case 2 : system("cp -f $HOME/.config/termite/dots/configNordTheme $HOME/.config/termite/config");
			break;
		case 3 : system("cp -f $HOME/.config/termite/dots/configAshesDark $HOME/.config/termite/config");
			break;
		case 4 : system("cp -f $HOME/.config/termite/dots/configEightiesTheme $HOME/.config/termite/config");
			break;
		case 5 : system("cp -f $HOME/.config/termite/dots/configMonokaiTheme $HOME/.config/termite/config");
			break;
		case 6 : system("cp -f $HOME/.config/termite/dots/configZenburnTheme $HOME/.config/termite/config");
			break;
		case 7 : system("cp -f $HOME/.config/termite/dots/configRedTheme $HOME/.config/termite/config");
			break;
		case 8 : system("cp -f $HOME/.config/termite/dots/config90sTheme $HOME/.config/termite/config");
			break;
				
	}
  	return 0;
}

