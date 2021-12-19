//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	// {"", "cat ~/.pacupdate | sed /📦0/d",					0,		9},

	{"", "~/bin/dwmblocks/mpd.sh",						3,		0},

	{"", "~/bin/dwmblocks/mem.sh",	30,		0},

	{"", "~/bin/dwmblocks/sensors.sh",				5,		0},

	{"", "~/bin/dwmblocks/clock.sh",						1,		0},

};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim = ' ';
