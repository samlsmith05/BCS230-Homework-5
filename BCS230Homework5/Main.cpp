//****************************************************
// File: Main.cpp
//
// Purpose: Utilize all functions in the Classes Static Library
//
// Written By: Samantha Smith
//
// Compiler: Visual Studio C++ 2017
// 
// Update Information
// ------------------
//
// 
//****************************************************
#include "Album.h"
#include "Artist.h"
#include "Song.h"
#include "Time.h"
#include <iostream>
using namespace std;
//****************************************************
// Function: main()
//
// Purpose: entry point for the program
//
// Update Information
// ------------------
// 
//
//****************************************************
int main() {
	Artist a1;						//calls default constructor
	a1.SetName("Bob");				//calls SetName
	a1.SetCountryOfOrigin("USA");	//calls SetCountryOfOrigin
	Artist a2(a1);					//calls copy constructor
	Artist a3;						//calls default constructor
	a3 = a1;						//calls operator= 

	cout << "Artist Test" << endl;

	cout << "a1 = " << a1.GetName() << "   " << a1.GetCountryOfOrigin() << endl;		//calls GetName and GetCountryOfOrigin
	cout << "a2 = " << a2;			//calls operator<<
	cout << "a3 = " << a3;			//calls operator<<

	cout << endl;

	Time t1;						//calls defualt constructor
	t1.SetMinutes(3);				//calls SetMinutes
	t1.SetSeconds(6);				//calls SetSeconds
	Time t3;						//calls default constructor
	Time t2(t1);					//calls copy constructor
	t3 = t1;						//calls operator=

	cout << "Time Test" << endl;

	cout << "t1 = " << t1.GetMinutes() << ":";		//calls GetMinutes
	if (t1.GetSeconds() < 10) {
		cout << "0" << t1.GetSeconds() << endl;		//calls GetSeconds
	}
	else {
		cout << t1.GetSeconds();					//calls GetSeconds
	}
	cout << "t2 = " << t2;			//calls operator<<
	cout << "t3 = " << t3;			//calls operator<<

	cout << endl;

	Song s1;							//calls default constructor
	Song s2;							//calls defualt constructor
	s1.SetTime(t1);						//calls SetTime
	s1.SetTitle("Purple People Eater");	//calls SetTitle
	s2 = s1;							//calls operator=
	Song s3(s1);						//calls copy constructor

	cout << "Song Test" << endl;

	cout << "s1 = " << s1.GetTitle() << "   " << s1.GetTime();		//calls GetTitle and GetTime
	cout << "s2 = " << s2;			//calls operator<<
	cout << "s3 = " << s3;			//calls operator<<

	cout << endl;

	Album al1;						//calls default constructor
	al1.Read("AlbumInfo.txt");		//calls Read
	Album al2(al1);					//calls copy constructor
	Album al3;						//calls default constructor
	al3 = al1;						//calls operator=
	al3.SetTitle("Purple Rain");	//calls SetTitle

	cout << "Album Test" << endl;

	cout << "al1 title = " << al1.GetTitle() << endl;		//calls GetTitle 
	cout << al2;					//calls operator<<
	cout << endl;
	cout << al3;					//calls operator<<
	cout << endl;
	cout << "Display" << endl;
	al1.Display();					//calls Display
	cout << endl;
	al1.Write("Test.txt");			//calls Write
	cout << endl;
	cout << "Total Time = " << al1.CalcTotalTime();			//calls CalcTotalTime
	cout << endl;

	return 0;
}