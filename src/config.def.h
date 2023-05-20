#ifndef CONFIG_H_
#define  CONFIG_H_

#include "user.h"
#include <stdlib.h>
#include <linux/input-event-codes.h>

static const int bar_top = 1;          /* Boolean value, non-zero is true. If not top then bottom */
static const int status_on_active = 1; /* Display the status on active monitor only. If not then on all. */
static const char *font = "Hack 13";
static const char *terminal[] = { "foot", NULL };

/*
 * Colors:
 * Colors are in rgba format.
 * The color scheming format is the same as dwm.
 * We use an enum as a index for our scheme types.
 *
 * cyan  - used in an active background
 * grey3 - used in active text and urgent background
 * grey1 - used in an inactive background
 * grey2 - used in inactive text
 */
static const int cyan[4] = { 24,   34,  34,  255 };
static const int grey1[4] = { 24,   34,  34,  255 };
static const int grey2[4] = { 187,  187, 187,  255 };
static const int grey3[4] = { 188,  52,  52,  255 };

static const int *schemes[3][2] = {
    /* Scheme Type       fg,    bg */
    [InActive_Scheme] = {grey2, grey1},
    [Active_Scheme]   = {grey3, cyan},
    [Urgent_Scheme]   = {grey1, grey3},
};

/*
 * Tags
 */
static const char *tags[] = { "1", "2", "3", "4", "5", "6", "7", "8", "9" };

/*
 * Buttons
 * See user.h for details on relevant structures.
 */
static const Binding bindings[] = {
    /* Click Location,   button,        callback,     bypass,    arguments */
    { Click_Status,      BTN_MIDDLE,    spawn,        0,         {.v = terminal } },
};

#endif // CONFIG_H_
