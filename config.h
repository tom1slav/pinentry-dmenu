/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int bottom = 0;
static int embedded = 0;
static int minpwlen = 32;
static int mon = -1;
static int lineheight = 35;
static int min_lineheight = 35;

static const char *asterisk = "*";
static const char *fonts[] = {
	"JetBrains Mono:size=14"
};
static const char *prompt = NULL;
static const char *colors[SchemeLast][4] = {
	[SchemePrompt] = { "#bbbbbb", "#222222" },
	[SchemeNormal] = { "#e0def4", "#232136" },
	[SchemeSelect] = { "#232136", "#c4a7e7" },
	[SchemeDesc]   = { "#000000", "#00ffff" },
};
