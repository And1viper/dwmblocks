//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"", "volume",						0,		10},
	{"", "brightness",                                          0,              13},	
	{"", "battery",                                          5,              2},
	{"", "clock",                                          60,             1},
	{"", "internet",                                          5,             3},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim = '|';
