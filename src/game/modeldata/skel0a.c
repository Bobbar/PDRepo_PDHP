#include <ultra64.h>
#include "bss.h"
#include "data.h"
#include "types.h"

u8 g_Skel0AJoints[][2] = {
	{ 0,  0  },
	{ 1,  1  },
	{ 2,  2  },
	{ 3,  4  },
	{ 4,  3  },
	{ 5,  6  },
	{ 6,  5  },
	{ 7,  8  },
	{ 8,  7  },
	{ 9,  10 },
	{ 10, 9  },
	{ 11, 12 },
	{ 12, 11 },
	{ 13, 14 },
	{ 14, 13 },
	{ 15, 15 },
	{ 16, 16 },
	{ 17, 17 },
};

struct skeleton g_Skel0A = {
	SKEL_0A, ARRAYCOUNT(g_Skel0AJoints), g_Skel0AJoints,
};
