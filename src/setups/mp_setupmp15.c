//
// Grid (MP)
//

#include "stagesetup.h"

extern s32 intro[];
extern u32 props[];
extern struct path paths[];
extern struct ailist ailists[];

struct stagesetup setup = {
	NULL,
	NULL,
	NULL,
	intro,
	props,
	paths,
	NULL,
	NULL,
};

u32 props[] = {
	weapon(0x0100, 0x0000, PAD_MP15_00AC, OBJFLAG_00000001, 0, 0, 240)
	ammocratemulti(0x0100, MODEL_MULTI_AMMO_CRATE, PAD_MP15_00B7, OBJFLAG_00000001, 0, 0, 1000)
	ammocratemulti(0x0100, MODEL_MULTI_AMMO_CRATE, PAD_MP15_00B8, OBJFLAG_00000001, 0, 0, 1000)
	weapon(0x0100, 0x0000, PAD_MP15_00AD, OBJFLAG_00000001, 0, 0, 241)
	ammocratemulti(0x0100, MODEL_MULTI_AMMO_CRATE, PAD_MP15_00B9, OBJFLAG_00000001, 0, 0, 1000)
	ammocratemulti(0x0100, MODEL_MULTI_AMMO_CRATE, PAD_MP15_00BA, OBJFLAG_00000001, 0, 0, 1000)
	weapon(0x0100, 0x0000, PAD_MP15_00AE, OBJFLAG_00000001, 0, 0, 242)
	ammocratemulti(0x0100, MODEL_MULTI_AMMO_CRATE, PAD_MP15_00BB, OBJFLAG_00000001, 0, 0, 1000)
	ammocratemulti(0x0100, MODEL_MULTI_AMMO_CRATE, PAD_MP15_00BC, OBJFLAG_00000001, 0, 0, 1000)
	weapon(0x0100, 0x0000, PAD_MP15_00AF, OBJFLAG_00000001, 0, 0, 243)
	ammocratemulti(0x0100, MODEL_MULTI_AMMO_CRATE, PAD_MP15_00BD, OBJFLAG_00000001, 0, 0, 1000)
	ammocratemulti(0x0100, MODEL_MULTI_AMMO_CRATE, PAD_MP15_00BE, OBJFLAG_00000001, 0, 0, 1000)
	weapon(0x0100, 0x0000, PAD_MP15_00B0, OBJFLAG_00000001, 0, 0, 244)
	ammocratemulti(0x0100, MODEL_MULTI_AMMO_CRATE, PAD_MP15_00BF, OBJFLAG_00000001, 0, 0, 1000)
	ammocratemulti(0x0100, MODEL_MULTI_AMMO_CRATE, PAD_MP15_00C0, OBJFLAG_00000001, 0, 0, 1000)
	weapon(0x0100, 0x0000, PAD_MP15_00B1, OBJFLAG_00000001, 0, 0, 245)
	ammocratemulti(0x0100, MODEL_MULTI_AMMO_CRATE, PAD_MP15_00C1, OBJFLAG_00000001, 0, 0, 1000)
	ammocratemulti(0x0100, MODEL_MULTI_AMMO_CRATE, PAD_MP15_00C2, OBJFLAG_00000001, 0, 0, 1000)
	weapon(0x0100, 0x0000, PAD_MP15_00B3, OBJFLAG_00000001, 0, 0, 246)
	ammocratemulti(0x0100, MODEL_MULTI_AMMO_CRATE, PAD_MP15_00C5, OBJFLAG_00000001, 0, 0, 1000)
	ammocratemulti(0x0100, MODEL_MULTI_AMMO_CRATE, PAD_MP15_00C6, OBJFLAG_00000001, 0, 0, 1000)
	weapon(0x0100, 0x0000, PAD_MP15_00B4, OBJFLAG_00000001, 0, 0, 247)
	ammocratemulti(0x0100, MODEL_MULTI_AMMO_CRATE, PAD_MP15_00C7, OBJFLAG_00000001, 0, 0, 1000)
	ammocratemulti(0x0100, MODEL_MULTI_AMMO_CRATE, PAD_MP15_00C8, OBJFLAG_00000001, 0, 0, 1000)
	weapon(0x0100, 0x0000, PAD_MP15_00B5, OBJFLAG_00000001, 0, 0, 248)
	ammocratemulti(0x0100, MODEL_MULTI_AMMO_CRATE, PAD_MP15_00C9, OBJFLAG_00000001, 0, 0, 1000)
	ammocratemulti(0x0100, MODEL_MULTI_AMMO_CRATE, PAD_MP15_00CA, OBJFLAG_00000001, 0, 0, 1000)
	weapon(0x0100, 0x0000, PAD_MP15_00B6, OBJFLAG_00000001, 0, 0, 249)
	ammocratemulti(0x0100, MODEL_MULTI_AMMO_CRATE, PAD_MP15_00CB, OBJFLAG_00000001, 0, 0, 1000)
	ammocratemulti(0x0100, MODEL_MULTI_AMMO_CRATE, PAD_MP15_00CC, OBJFLAG_00000001, 0, 0, 1000)
	glass(0x0100, MODEL_WINDOW, PAD_MP15_00D0, OBJFLAG_00000002 | OBJFLAG_00000020 | OBJFLAG_00000040 | OBJFLAG_00000100 | OBJFLAG_00000200 | OBJFLAG_PATHBLOCKER | OBJFLAG_AISEETHROUGH, 0, 0, 1000)
	glass(0x0100, MODEL_WINDOW, PAD_MP15_00D1, OBJFLAG_00000002 | OBJFLAG_00000020 | OBJFLAG_00000040 | OBJFLAG_00000100 | OBJFLAG_00000200 | OBJFLAG_PATHBLOCKER | OBJFLAG_AISEETHROUGH, 0, 0, 1000)
	glass(0x0100, MODEL_WINDOW, PAD_MP15_00D2, OBJFLAG_00000002 | OBJFLAG_00000020 | OBJFLAG_00000040 | OBJFLAG_00000100 | OBJFLAG_00000200 | OBJFLAG_PATHBLOCKER | OBJFLAG_AISEETHROUGH, 0, 0, 1000)
	glass(0x0100, MODEL_WINDOW, PAD_MP15_00D3, OBJFLAG_00000002 | OBJFLAG_00000020 | OBJFLAG_00000040 | OBJFLAG_00000100 | OBJFLAG_00000200 | OBJFLAG_PATHBLOCKER | OBJFLAG_AISEETHROUGH, 0, 0, 1000)
	glass(0x0100, MODEL_WINDOW, PAD_MP15_00D4, OBJFLAG_00000002 | OBJFLAG_00000020 | OBJFLAG_00000040 | OBJFLAG_00000100 | OBJFLAG_00000200 | OBJFLAG_PATHBLOCKER | OBJFLAG_AISEETHROUGH, 0, 0, 1000)
	glass(0x0100, MODEL_WINDOW, PAD_MP15_00D5, OBJFLAG_00000002 | OBJFLAG_00000020 | OBJFLAG_00000040 | OBJFLAG_00000100 | OBJFLAG_00000200 | OBJFLAG_PATHBLOCKER | OBJFLAG_AISEETHROUGH, 0, 0, 1000)
	glass(0x0100, MODEL_WINDOW, PAD_MP15_00D6, OBJFLAG_00000002 | OBJFLAG_00000020 | OBJFLAG_00000040 | OBJFLAG_00000100 | OBJFLAG_00000200 | OBJFLAG_PATHBLOCKER | OBJFLAG_AISEETHROUGH, 0, 0, 1000)
	glass(0x0100, MODEL_WINDOW, PAD_MP15_00D7, OBJFLAG_00000002 | OBJFLAG_00000020 | OBJFLAG_00000040 | OBJFLAG_00000100 | OBJFLAG_00000200 | OBJFLAG_PATHBLOCKER | OBJFLAG_AISEETHROUGH, 0, 0, 1000)
	glass(0x0100, MODEL_WINDOW, PAD_MP15_00D8, OBJFLAG_00000002 | OBJFLAG_00000020 | OBJFLAG_00000040 | OBJFLAG_00000100 | OBJFLAG_00000200 | OBJFLAG_PATHBLOCKER | OBJFLAG_AISEETHROUGH, 0, 0, 1000)
	glass(0x0100, MODEL_WINDOW, PAD_MP15_00D9, OBJFLAG_00000002 | OBJFLAG_00000020 | OBJFLAG_00000040 | OBJFLAG_00000100 | OBJFLAG_00000200 | OBJFLAG_PATHBLOCKER | OBJFLAG_AISEETHROUGH, 0, 0, 1000)
	glass(0x0100, MODEL_GLASS_FLOOR, PAD_MP15_0000, OBJFLAG_00000008 | OBJFLAG_00000020 | OBJFLAG_00000040 | OBJFLAG_AISEETHROUGH, 0, 0, 1000)
	glass(0x0100, MODEL_GLASS_FLOOR, PAD_MP15_0001, OBJFLAG_00000008 | OBJFLAG_00000020 | OBJFLAG_00000040 | OBJFLAG_AISEETHROUGH, 0, 0, 1000)
	glass(0x0100, MODEL_GLASS_FLOOR, PAD_MP15_0002, OBJFLAG_00000008 | OBJFLAG_00000020 | OBJFLAG_00000040 | OBJFLAG_AISEETHROUGH, 0, 0, 1000)
	glass(0x0100, MODEL_GLASS_FLOOR, PAD_MP15_0003, OBJFLAG_00000008 | OBJFLAG_00000020 | OBJFLAG_00000040 | OBJFLAG_AISEETHROUGH, 0, 0, 1000)
	glass(0x0100, MODEL_GLASS_FLOOR, PAD_MP15_0004, OBJFLAG_00000008 | OBJFLAG_00000020 | OBJFLAG_00000040 | OBJFLAG_AISEETHROUGH, 0, 0, 1000)
	glass(0x0100, MODEL_GLASS_FLOOR, PAD_MP15_0005, OBJFLAG_00000008 | OBJFLAG_00000020 | OBJFLAG_00000040 | OBJFLAG_AISEETHROUGH, 0, 0, 1000)
	glass(0x0100, MODEL_GLASS_FLOOR, PAD_MP15_0006, OBJFLAG_00000008 | OBJFLAG_00000020 | OBJFLAG_00000040 | OBJFLAG_AISEETHROUGH, 0, 0, 1000)
	glass(0x0100, MODEL_GLASS_FLOOR, PAD_MP15_0007, OBJFLAG_00000008 | OBJFLAG_00000020 | OBJFLAG_00000040 | OBJFLAG_AISEETHROUGH, 0, 0, 1000)
	glass(0x0100, MODEL_GLASS_FLOOR, PAD_MP15_0008, OBJFLAG_00000008 | OBJFLAG_00000020 | OBJFLAG_00000040 | OBJFLAG_AISEETHROUGH, 0, 0, 1000)

#if VERSION >= VERSION_NTSC_1_0
	door(0x0100, MODEL_DOOR2A_G5, PAD_MP15_0080, 0, 0, 0, 1000, 0x0000e666, 0x00010000, 0x0001aaaa, 0x0001aaaa, 0x00000ccc, DOORFLAG_0004, DOORTYPE_SLIDING, 0x00000020, 0x00000258, 0x00000000, 0x00000001, 0x00000000)
#else
	door(0x0100, MODEL_DOOR2A_G5, PAD_MP15_0080, 0, 0, 0, 1000, 0x0000e666, 0x00010000, 0x0001aaaa, 0x0001aaaa, 0x00000ccc, DOORFLAG_0004, DOORTYPE_SLIDING, 0x00000000, 0x00000258, 0x00000000, 0x00000001, 0x00000300)
#endif

	door(0x0100, MODEL_DOOR2A_G5, PAD_MP15_0081, 0, 0, 0, 1000, 0x0000e666, 0x00010000, 0x0001aaaa, 0x0001aaaa, 0x00000ccc, DOORFLAG_0004, DOORTYPE_SLIDING, 0x00000020, 0x00000258, 0x00000000, 0xffffffff, 0x00000000)
	door(0x0100, MODEL_DOOR2A_G5, PAD_MP15_0082, 0, 0, 0, 1000, 0x0000e666, 0x00010000, 0x0001aaaa, 0x0001aaaa, 0x00000ccc, DOORFLAG_0004, DOORTYPE_SLIDING, 0x00000000, 0x00000258, 0x00000000, 0x00000000, 0x00000300)
	door(0x0100, MODEL_DOOR2A_G5, PAD_MP15_0083, 0, 0, 0, 1000, 0x0000e666, 0x00010000, 0x0001aaaa, 0x0001aaaa, 0x00000ccc, DOORFLAG_0004, DOORTYPE_SLIDING, 0x00000000, 0x00000258, 0x00000000, 0x00000000, 0x00000300)
	door(0x0100, MODEL_DOOR2A_G5, PAD_MP15_0084, 0, 0, 0, 1000, 0x0000e666, 0x00010000, 0x0001aaaa, 0x0001aaaa, 0x00000ccc, DOORFLAG_0004, DOORTYPE_SLIDING, 0x00000000, 0x00000258, 0x00000000, 0x00000000, 0x00000300)
	door(0x0100, MODEL_DOOR2A_G5, PAD_MP15_0085, 0, 0, 0, 1000, 0x0000e666, 0x00010000, 0x0001aaaa, 0x0001aaaa, 0x00000ccc, DOORFLAG_0004, DOORTYPE_SLIDING, 0x00000000, 0x00000258, 0x00000000, 0x00000000, 0x00000300)
	tag(0x01, 1)
	lift(0x0100, MODEL_MATRIX_LIFT, PAD_MP15_00CE, OBJFLAG_00000008 | OBJFLAG_00000020 | OBJFLAG_00000040 | OBJFLAG_00000080 | OBJFLAG_IGNOREFLOORCOLOUR | OBJFLAG_INVINCIBLE | OBJFLAG_UNCOLLECTABLE | OBJFLAG_00400000 | OBJFLAG_01000000 | OBJFLAG_CANNOT_ACTIVATE, OBJFLAG2_00000100 | OBJFLAG2_00000200 | OBJFLAG2_IMMUNETOGUNFIRE | OBJFLAG2_BULLETPROOF | OBJFLAG2_00200000, 0, 1000, 0x00ce, 0x00cf, -1, -1, 0x00000001, 0x00000003, 0x00000000, 0x00000000, 0x0000071c, 0x0010aaaa, 0x16000000)
	door(0x0100, MODEL_DOOR2A_G5, PAD_MP15_007C, OBJFLAG_IGNOREFLOORCOLOUR | OBJFLAG_AISEETHROUGH, 0, 0, 1000, 0x0000e666, 0x00010000, 0x0001aaaa, 0x0001aaaa, 0x00000ccc, DOORFLAG_0004, DOORTYPE_SLIDING, 0x00000000, 0x0000012c, 0x00000000, 0x00000001, 0x00001200)
	door(0x0100, MODEL_DOOR2A_G5, PAD_MP15_007D, OBJFLAG_IGNOREFLOORCOLOUR | OBJFLAG_AISEETHROUGH, 0, 0, 1000, 0x0000e666, 0x00010000, 0x0001aaaa, 0x0001aaaa, 0x00000ccc, DOORFLAG_0004, DOORTYPE_SLIDING, 0x00000000, 0x0000012c, 0x00000000, 0xffffffff, 0x00000000)
	door(0x0100, MODEL_DOOR2A_G5, PAD_MP15_007E, OBJFLAG_IGNOREFLOORCOLOUR | OBJFLAG_AISEETHROUGH, 0, 0, 1000, 0x0000e666, 0x00010000, 0x0001aaaa, 0x0001aaaa, 0x00000ccc, DOORFLAG_0004, DOORTYPE_SLIDING, 0x00000000, 0x0000012c, 0x00000000, 0x00000001, 0x00001200)
	door(0x0100, MODEL_DOOR2A_G5, PAD_MP15_007F, OBJFLAG_IGNOREFLOORCOLOUR | OBJFLAG_AISEETHROUGH, 0, 0, 1000, 0x0000e666, 0x00010000, 0x0001aaaa, 0x0001aaaa, 0x00000ccc, DOORFLAG_0004, DOORTYPE_SLIDING, 0x00000000, 0x0000012c, 0x00000000, 0xffffffff, 0x00000000)
	lift_door(-4, -5, 0)
	lift_door(-4, -6, 0)
	lift_door(-4, -7, 1)
	lift_door(-4, -8, 1)
	endprops
};

s32 intro[] = {
	spawn(PAD_MP15_00A2)
	spawn(PAD_MP15_00A3)
	spawn(PAD_MP15_00A4)
	spawn(PAD_MP15_00A5)
	spawn(PAD_MP15_00A6)
	spawn(PAD_MP15_00A7)
	spawn(PAD_MP15_00A8)
	spawn(PAD_MP15_00A9)
	spawn(PAD_MP15_00AA)
	spawn(PAD_MP15_00AB)
	case(0, 0x0086)
	case_respawn(0, 0x0087)
	case_respawn(0, 0x0088)
	case_respawn(0, 0x0089)
	case_respawn(0, 0x008a)
	case_respawn(0, 0x008b)
	case_respawn(0, 0x008c)
	case(1, 0x0093)
	case_respawn(1, 0x008d)
	case_respawn(1, 0x008e)
	case_respawn(1, 0x008f)
	case_respawn(1, 0x0090)
	case_respawn(1, 0x0091)
	case_respawn(1, 0x0092)
	case(2, 0x009a)
	case_respawn(2, 0x0094)
	case_respawn(2, 0x0095)
	case_respawn(2, 0x0096)
	case_respawn(2, 0x0097)
	case_respawn(2, 0x0098)
	case_respawn(2, 0x0099)
	case(3, 0x00a1)
	case_respawn(3, 0x009b)
	case_respawn(3, 0x009c)
	case_respawn(3, 0x009d)
	case_respawn(3, 0x009e)
	case_respawn(3, 0x009f)
	case_respawn(3, 0x00a0)
	hill(0x0073)
	hill(0x0013)
	hill(0x006b)
	hill(0x0060)
	endintro
};

struct path paths[] = {
	{ NULL, 0, 0 },
};
