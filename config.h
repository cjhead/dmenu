/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
static int centered = 1;                    /* -c option; centers dmenu on screen */
static int min_width = 500;                    /* minimum width when centered */

/* -fn option overrides fonts[0]; default X11 font or font set */
static char font[]          = "Hack Nerd Font:size=12:antialias=true:autohint=true";
static const char *fonts[]  = {
    "Hack Nerd Font:size=12:antialias=true:autohint=true",
    "JoyPixels:pixelsize=12:antialias=true:autohint=true" };

static char *prompt       = NULL;   /* -p  option; prompt to the left of input field */

static char col0[]        = "#ffffff";
static char col1[]        = "#ffffff";
static char col2[]        = "#ffffff";
static char col3[]        = "#ffffff";
static char col4[]        = "#ffffff";
static char col5[]        = "#ffffff";
static char col6[]        = "#ffffff";
static char col7[]        = "#ffffff";
static char col8[]        = "#ffffff";
static char col9[]        = "#ffffff";
static char col10[]       = "#ffffff";
static char col11[]       = "#ffffff";
static char col12[]       = "#ffffff";
static char col13[]       = "#ffffff";
static char col14[]       = "#ffffff";
static char col15[]       = "#ffffff";
static char normfgcolor[] = "#bbbbbb";
static char normbgcolor[] = "#222222";
static char selfgcolor[]  = "#eeeeee";
static char selbgcolor[]  = "#005577";
static char *colors[SchemeLast][2] = {
                        	/*     fg         bg       */
	[SchemeNorm]          = { normfgcolor, normbgcolor },
	[SchemeSel]           = { selfgcolor,  selbgcolor  },
	[SchemeSelHighlight]  = { col3,        normbgcolor },
	[SchemeNormHighlight] = { col3,        normbgcolor },
	[SchemeOut]           = { col3,        normbgcolor },
	[SchemeOutHighlight]  = { col3,        normbgcolor },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 20;
/* -h option; minimum height of a menu line */
static unsigned int lineheight = 0;
static unsigned int min_lineheight = 8;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

/* Size of the window border */
static unsigned int border_width = 5;

/*
 * Xresources preferences to load at startup
 */
ResourcePref resources[] = {
	{ "font",        STRING, &font },
    { "foreground",  STRING, &normfgcolor },
    { "background",  STRING, &normbgcolor },
    { "background",  STRING, &selfgcolor },
    { "color0",      STRING, &col0 },
    { "color1",      STRING, &col1 },
    { "color2",      STRING, &col2 },
    { "color3",      STRING, &col3 },
    { "color4",      STRING, &selbgcolor },
    { "color5",      STRING, &col5 },
    { "color6",      STRING, &col6 },
    { "color7",      STRING, &col7 },
    { "color8",      STRING, &col8 },
    { "color9",      STRING, &col9 },
    { "color10",     STRING, &col10 },
    { "color11",     STRING, &col11 },
    { "color12",     STRING, &col12 },
    { "color13",     STRING, &col13 },
    { "color14",     STRING, &col14 },
    { "color15",     STRING, &col15 },
	{ "prompt",      STRING, &prompt },
};
