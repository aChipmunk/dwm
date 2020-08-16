//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Color */	/*Command*/		/*Update Interval*/	/*Update Signal*/
	
	{"^c#393939^^b#99cc99^", "internet",			60,		0},
	
        {"^b#ffcc66^", "backlight",			0,		10},

	{"^b#f99157^", "volume",				0,		11},
	
	{"^b#6699cc^", "barday",				120,		0},

	{"^b#cc99cc^", "bartime",				30,		0},

	{"^b#f2777a^", "battery",		                20,		0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim = '\0';
