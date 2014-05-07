// Coint_Flip_cpp.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>
#include <stdio.h>
#include <random>
#include <time.h>
#include <string>
using namespace std;
void flipCoin(bool what);
int _tmain(int argc, _TCHAR* argv[])
{
	int t,t1;
	string whatcoint;
	bool whatnub;
	cout << "----------------------------------------------------------" << endl;
	cout << R"( __      __       .__                                     
/  \    /  \ ____ |  |   ____  ____   _____   ____        
\   \/\/   // __ \|  | _/ ___\/  _ \ /     \_/ __ \       
 \        /\  ___/|  |_\  \__(  <_> )  Y Y  \  ___/       
  \__/\  /  \___  >____/\___  >____/|__|_|  /\___  >      
       \/       \/          \/            \/     \/       
                     ___________                          
                     \__    ___/___                       
                       |    | /  _ \                      
                       |    |(  <_> )                     
                       |____| \____/                      
                                                          
_________        .__         ___________                  
\_   ___ \  ____ |__| ____   \__    ___/___  ______ ______
/    \  \/ /  _ \|  |/    \    |    | /  _ \/  ___//  ___/
\     \___(  <_> )  |   |  \   |    |(  <_> )___ \ \___ \ 
 \______  /\____/|__|___|  /   |____| \____/____  >____  >
        \/               \/                     \/     \/ )" << endl;
	cout << "----------------------------------------------------------" << endl;
	cout << "Autors/Author: Kristaps Stalidzans" << endl;
	cout << "Start the game? (1.Yes 2.No)" << endl;
	cin >> t1;
	start:
	whats:
	cout << "Heads or Tails?" << endl;
	cin >> whatcoint;
	if (whatcoint == "Heads") whatnub = false; else if (whatcoint == "Tails") whatnub = true; else goto whats;
	if (t1 == 1) goto game; else goto ending;
	game:
	flipCoin(whatnub);
	cout << endl;
	cout << "There were " << times << " flips with " << whatcoint << endl;
	cout << "Continue? (1.Yes 2.No)" << endl;
	cin >> t;
	if (t == 1) goto start; else goto ending;
	ending:
	cin.ignore();
	return 0;
}
void flipCoin(bool what){
	int flip;
	int* times;
	times = 0;
	srand(time(NULL));
	if (what == true) {
	do {
		flip = rand() % 2 + 1;
		if (flip == 1){
			cout << "H ";
			times*++;
		}
		else if (flip == 2) {
			cout << "T ";
			times*++;
		}
	} while (flip <= 1);
	}
	else {
	do {
		flip = rand() % 2 + 1;
		if (flip == 1){
			cout << "H ";
			times*++;
		}
		else if (flip == 2) {
			cout << "T ";
			times*++;
		}
	} while (flip >= 2);
	return times*;
	}
}
