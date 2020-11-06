/* user and group to drop privileges to */
static const char *user  = "andreas";
static const char *group = "andreas";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "#002b36",     /* after initialization */
	[INPUT] =  "#005577",   /* during input */
	[FAILED] = "#991c1c",   /* wrong password */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;

/* time in seconds to cancel lock with mouse movement */
static const int timetocancel = 3;
