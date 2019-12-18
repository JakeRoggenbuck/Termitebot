#include <iostream>
using namespace std;

int main() {
  	cout << "Termitebot: choose theme number\n1:Nature 2:Nord: 3:Ashes 4:Eighties 5:Monokai 6:Zenburn: ";
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
					
	}
  	return 0;
}

