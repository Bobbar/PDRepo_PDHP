//
// Felicity (MP)
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
	weapon(0x0100, 0x0000, PAD_MP11_0028, OBJFLAG_00000001, 0, 0, 240)
	ammocratemulti(0x0100, MODEL_MULTI_AMMO_CRATE, PAD_MP11_0032, OBJFLAG_00000001, 0, 0, 1000)
	ammocratemulti(0x0100, MODEL_MULTI_AMMO_CRATE, PAD_MP11_0033, OBJFLAG_00000001, 0, 0, 1000)
	weapon(0x0100, 0x0000, PAD_MP11_0029, OBJFLAG_00000001, 0, 0, 241)
	ammocratemulti(0x0100, MODEL_MULTI_AMMO_CRATE, PAD_MP11_0034, OBJFLAG_00000001, 0, 0, 1000)
	ammocratemulti(0x0100, MODEL_MULTI_AMMO_CRATE, PAD_MP11_0035, OBJFLAG_00000001, 0, 0, 1000)
	weapon(0x0100, 0x0000, PAD_MP11_002A, OBJFLAG_00000001, 0, 0, 242)
	ammocratemulti(0x0100, MODEL_MULTI_AMMO_CRATE, PAD_MP11_0036, OBJFLAG_00000001, 0, 0, 1000)
	ammocratemulti(0x0100, MODEL_MULTI_AMMO_CRATE, PAD_MP11_0037, OBJFLAG_00000001, 0, 0, 1000)
	weapon(0x0100, 0x0000, PAD_MP11_002B, OBJFLAG_00000001, 0, 0, 243)
	ammocratemulti(0x0100, MODEL_MULTI_AMMO_CRATE, PAD_MP11_0038, OBJFLAG_00000001, 0, 0, 1000)
	ammocratemulti(0x0100, MODEL_MULTI_AMMO_CRATE, PAD_MP11_0039, OBJFLAG_00000001, 0, 0, 1000)
	weapon(0x0100, 0x0000, PAD_MP11_002C, OBJFLAG_00000001, 0, 0, 244)
	ammocratemulti(0x0100, MODEL_MULTI_AMMO_CRATE, PAD_MP11_003A, OBJFLAG_00000001, 0, 0, 1000)
	ammocratemulti(0x0100, MODEL_MULTI_AMMO_CRATE, PAD_MP11_003B, OBJFLAG_00000001, 0, 0, 1000)
	weapon(0x0100, 0x0000, PAD_MP11_002D, OBJFLAG_00000001, 0, 0, 245)
	ammocratemulti(0x0100, MODEL_MULTI_AMMO_CRATE, PAD_MP11_003C, OBJFLAG_00000001, 0, 0, 1000)
	ammocratemulti(0x0100, MODEL_MULTI_AMMO_CRATE, PAD_MP11_003D, OBJFLAG_00000001, 0, 0, 1000)
	weapon(0x0100, 0x0000, PAD_MP11_002E, OBJFLAG_00000001, 0, 0, 246)
	ammocratemulti(0x0100, MODEL_MULTI_AMMO_CRATE, PAD_MP11_003E, OBJFLAG_00000001, 0, 0, 1000)
	ammocratemulti(0x0100, MODEL_MULTI_AMMO_CRATE, PAD_MP11_003F, OBJFLAG_00000001, 0, 0, 1000)
	weapon(0x0100, 0x0000, PAD_MP11_002F, OBJFLAG_00000001, 0, 0, 247)
	ammocratemulti(0x0100, MODEL_MULTI_AMMO_CRATE, PAD_MP11_0040, OBJFLAG_00000001, 0, 0, 1000)
	ammocratemulti(0x0100, MODEL_MULTI_AMMO_CRATE, PAD_MP11_0041, OBJFLAG_00000001, 0, 0, 1000)
	weapon(0x0100, 0x0000, PAD_MP11_0030, OBJFLAG_00000001, 0, 0, 248)
	ammocratemulti(0x0100, MODEL_MULTI_AMMO_CRATE, PAD_MP11_0043, OBJFLAG_00000001, 0, 0, 1000)
	ammocratemulti(0x0100, MODEL_MULTI_AMMO_CRATE, PAD_MP11_0042, OBJFLAG_00000001, 0, 0, 1000)
	weapon(0x0100, 0x0000, PAD_MP11_0031, OBJFLAG_00000001, 0, 0, 249)
	ammocratemulti(0x0100, MODEL_MULTI_AMMO_CRATE, PAD_MP11_0044, OBJFLAG_00000001, 0, 0, 1000)
	ammocratemulti(0x0100, MODEL_MULTI_AMMO_CRATE, PAD_MP11_0045, OBJFLAG_00000001, 0, 0, 1000)
	door(0x0100, MODEL_DD_DR_NONREF, PAD_MP11_0046, OBJFLAG_IGNOREFLOORCOLOUR | OBJFLAG_DEACTIVATED, 0, 0, 1000, 0x0000f333, 0x00010000, 0x00002aaa, 0x00002aaa, 0x000002c5, DOORFLAG_0004, DOORTYPE_SLIDING, 0x00000000, 0x00000384, 0x00000000, 0x00000000, 0x00000800)
	door(0x0100, MODEL_DD_DR_NONREF, PAD_MP11_0047, OBJFLAG_IGNOREFLOORCOLOUR | OBJFLAG_DEACTIVATED, 0, 0, 1000, 0x0000f333, 0x00010000, 0x00002aaa, 0x00002aaa, 0x000002c5, DOORFLAG_0004, DOORTYPE_SLIDING, 0x00000000, 0x00000384, 0x00000000, 0x00000000, 0x00000800)
	door(0x0100, MODEL_DD_DR_NONREF, PAD_MP11_0048, OBJFLAG_IGNOREFLOORCOLOUR | OBJFLAG_DEACTIVATED, 0, 0, 1000, 0x0000f333, 0x00010000, 0x00002aaa, 0x00002aaa, 0x000002c5, DOORFLAG_0004, DOORTYPE_SLIDING, 0x00000000, 0x00000384, 0x00000000, 0x00000000, 0x00000800)
	door(0x0100, MODEL_DD_DR_NONREF, PAD_MP11_0049, OBJFLAG_IGNOREFLOORCOLOUR | OBJFLAG_DEACTIVATED, 0, 0, 1000, 0x0000f333, 0x00010000, 0x00002aaa, 0x00002aaa, 0x000002c5, DOORFLAG_0004, DOORTYPE_SLIDING, 0x00000000, 0x00000384, 0x00000000, 0x00000000, 0x00000800)
	door(0x0100, MODEL_DD_DR_NONREF, PAD_MP11_004A, OBJFLAG_IGNOREFLOORCOLOUR | OBJFLAG_DEACTIVATED, 0, 0, 1000, 0x0000f333, 0x00010000, 0x00002aaa, 0x00002aaa, 0x000002c5, DOORFLAG_0004, DOORTYPE_SLIDING, 0x00000000, 0x00000384, 0x00000000, 0x00000000, 0x00000800)
	door(0x0100, MODEL_DD_DR_NONREF, PAD_MP11_004B, OBJFLAG_IGNOREFLOORCOLOUR | OBJFLAG_DEACTIVATED, 0, 0, 1000, 0x0000f333, 0x00010000, 0x00002aaa, 0x00002aaa, 0x000002c5, DOORFLAG_0004, DOORTYPE_SLIDING, 0x00000000, 0x00000384, 0x00000000, 0x00000000, 0x00000800)
	door(0x0100, MODEL_DD_DR_NONREF, PAD_MP11_004C, OBJFLAG_IGNOREFLOORCOLOUR | OBJFLAG_DEACTIVATED, 0, 0, 1000, 0x0000f333, 0x00010000, 0x00002aaa, 0x00002aaa, 0x000002c5, DOORFLAG_0004, DOORTYPE_SLIDING, 0x00000000, 0x00000384, 0x00000000, 0x00000000, 0x00000800)

#if VERSION >= VERSION_NTSC_1_0
	tinted_glass(0x0100, MODEL_DD_WINDOW, PAD_MP11_0062, OBJFLAG_00000002 | OBJFLAG_00000020 | OBJFLAG_00000040 | OBJFLAG_00000100 | OBJFLAG_00000200 | OBJFLAG_PATHBLOCKER | OBJFLAG_INVINCIBLE | OBJFLAG_AISEETHROUGH, OBJFLAG2_IMMUNETOGUNFIRE | OBJFLAG2_BULLETPROOF | OBJFLAG2_00200000, 0, 1000, 0x012c0258)
#else
	tinted_glass(0x0100, MODEL_DD_WINDOW, PAD_MP11_0062, OBJFLAG_00000002 | OBJFLAG_00000020 | OBJFLAG_00000040 | OBJFLAG_00000100 | OBJFLAG_00000200 | OBJFLAG_PATHBLOCKER | OBJFLAG_AISEETHROUGH, OBJFLAG2_IMMUNETOGUNFIRE, 0, 1000, 0x012c0258)
#endif

	tinted_glass(0x0100, MODEL_DD_WINDOW, PAD_MP11_0063, OBJFLAG_00000002 | OBJFLAG_00000020 | OBJFLAG_00000040 | OBJFLAG_00000100 | OBJFLAG_00000200 | OBJFLAG_PATHBLOCKER | OBJFLAG_INVINCIBLE | OBJFLAG_AISEETHROUGH, OBJFLAG2_IMMUNETOGUNFIRE | OBJFLAG2_BULLETPROOF | OBJFLAG2_00200000, 0, 1000, 0x012c0258)
	tinted_glass(0x0100, MODEL_DD_WINDOW, PAD_MP11_0064, OBJFLAG_00000002 | OBJFLAG_00000020 | OBJFLAG_00000040 | OBJFLAG_00000100 | OBJFLAG_00000200 | OBJFLAG_PATHBLOCKER | OBJFLAG_INVINCIBLE | OBJFLAG_AISEETHROUGH, OBJFLAG2_IMMUNETOGUNFIRE | OBJFLAG2_BULLETPROOF | OBJFLAG2_00200000, 0, 1000, 0x012c0258)
	tinted_glass(0x0100, MODEL_DD_WINDOW, PAD_MP11_0065, OBJFLAG_00000002 | OBJFLAG_00000020 | OBJFLAG_00000040 | OBJFLAG_00000100 | OBJFLAG_00000200 | OBJFLAG_PATHBLOCKER | OBJFLAG_INVINCIBLE | OBJFLAG_AISEETHROUGH, OBJFLAG2_IMMUNETOGUNFIRE | OBJFLAG2_BULLETPROOF | OBJFLAG2_00200000, 0, 1000, 0x012c0258)
	tinted_glass(0x0100, MODEL_DD_WINDOW, PAD_MP11_0066, OBJFLAG_00000002 | OBJFLAG_00000020 | OBJFLAG_00000040 | OBJFLAG_00000100 | OBJFLAG_00000200 | OBJFLAG_PATHBLOCKER | OBJFLAG_INVINCIBLE | OBJFLAG_AISEETHROUGH, OBJFLAG2_IMMUNETOGUNFIRE | OBJFLAG2_BULLETPROOF | OBJFLAG2_00200000, 0, 1000, 0x012c0258)
	tinted_glass(0x0100, MODEL_DD_WINDOW, PAD_MP11_0067, OBJFLAG_00000002 | OBJFLAG_00000020 | OBJFLAG_00000040 | OBJFLAG_00000100 | OBJFLAG_00000200 | OBJFLAG_PATHBLOCKER | OBJFLAG_INVINCIBLE | OBJFLAG_AISEETHROUGH, OBJFLAG2_IMMUNETOGUNFIRE | OBJFLAG2_BULLETPROOF | OBJFLAG2_00200000, 0, 1000, 0x012c0258)
	tinted_glass(0x0100, MODEL_DD_WINDOW, PAD_MP11_0068, OBJFLAG_00000002 | OBJFLAG_00000020 | OBJFLAG_00000040 | OBJFLAG_00000100 | OBJFLAG_00000200 | OBJFLAG_PATHBLOCKER | OBJFLAG_INVINCIBLE | OBJFLAG_AISEETHROUGH, OBJFLAG2_IMMUNETOGUNFIRE | OBJFLAG2_BULLETPROOF | OBJFLAG2_00200000, 0, 1000, 0x012c0258)
	tinted_glass(0x0100, MODEL_DD_WINDOW, PAD_MP11_0069, OBJFLAG_00000002 | OBJFLAG_00000020 | OBJFLAG_00000040 | OBJFLAG_00000100 | OBJFLAG_00000200 | OBJFLAG_PATHBLOCKER | OBJFLAG_INVINCIBLE | OBJFLAG_AISEETHROUGH, OBJFLAG2_IMMUNETOGUNFIRE | OBJFLAG2_BULLETPROOF | OBJFLAG2_00200000, 0, 1000, 0x012c0258)
	door(0x0100, MODEL_DD_DR_NONREF, PAD_MP11_004D, OBJFLAG_DEACTIVATED | OBJFLAG_80000000, 0, 0, 1000, 0x00640000, 0x03e80000, 0x01f40000, 0x01f40000, 0x00030000, 0, DOORTYPE_SWINGING, 0x00000000, 0x000005dc, 0x00000000, 0x00000000, 0x00000800)
	door(0x0100, MODEL_DD_DR_NONREF, PAD_MP11_004E, OBJFLAG_DEACTIVATED | OBJFLAG_80000000, 0, 0, 1000, 0x00640000, 0x03e80000, 0x01f40000, 0x01f40000, 0x00030000, 0, DOORTYPE_SWINGING, 0x00000000, 0x000005dc, 0x00000000, 0x00000000, 0x00000800)
	door(0x0100, MODEL_DD_DR_NONREF, PAD_MP11_004F, OBJFLAG_DEACTIVATED | OBJFLAG_80000000, OBJFLAG2_INTERACTCHECKLOS, 0, 1000, 0x00640000, 0x03e80000, 0x01f40000, 0x01f40000, 0x00030000, 0, DOORTYPE_SWINGING, 0x00000000, 0x000005dc, 0x00000000, 0x00000001, 0x00000800)
	door(0x0100, MODEL_DD_DR_NONREF, PAD_MP11_0050, OBJFLAG_DEACTIVATED | OBJFLAG_20000000 | OBJFLAG_80000000, OBJFLAG2_INTERACTCHECKLOS, 0, 1000, 0x00640000, 0x03e80000, 0x01f40000, 0x01f40000, 0x00030000, 0, DOORTYPE_SWINGING, 0x00000000, 0x000005dc, 0x00000000, 0xffffffff, 0x00000000)
	door(0x0100, MODEL_DD_DR_NONREF, PAD_MP11_0051, OBJFLAG_DEACTIVATED | OBJFLAG_80000000, 0, 0, 1000, 0x00640000, 0x03e80000, 0x01f40000, 0x01f40000, 0x00030000, 0, DOORTYPE_SWINGING, 0x00000000, 0x000005dc, 0x00000000, 0x00000001, 0x00000800)
	door(0x0100, MODEL_DD_DR_NONREF, PAD_MP11_0052, OBJFLAG_DEACTIVATED | OBJFLAG_20000000 | OBJFLAG_80000000, 0, 0, 1000, 0x00640000, 0x03e80000, 0x01f40000, 0x01f40000, 0x00030000, 0, DOORTYPE_SWINGING, 0x00000000, 0x000005dc, 0x00000000, 0xffffffff, 0x00000000)
	door(0x0100, MODEL_DD_DR_NONREF, PAD_MP11_0053, OBJFLAG_DEACTIVATED | OBJFLAG_80000000, 0, 0, 1000, 0x00640000, 0x03e80000, 0x01f40000, 0x01f40000, 0x00030000, 0, DOORTYPE_SWINGING, 0x00000000, 0x000005dc, 0x00000000, 0x00000001, 0x00000800)
	door(0x0100, MODEL_DD_DR_NONREF, PAD_MP11_0054, OBJFLAG_DEACTIVATED | OBJFLAG_20000000 | OBJFLAG_80000000, 0, 0, 1000, 0x00640000, 0x03e80000, 0x01f40000, 0x01f40000, 0x00030000, 0, DOORTYPE_SWINGING, 0x00000000, 0x000005dc, 0x00000000, 0xffffffff, 0x00000000)
	door(0x0100, MODEL_DD_DR_NONREF, PAD_MP11_0055, OBJFLAG_DEACTIVATED | OBJFLAG_80000000, OBJFLAG2_INTERACTCHECKLOS, 0, 1000, 0x00640000, 0x03e80000, 0x01f40000, 0x01f40000, 0x00030000, 0, DOORTYPE_SWINGING, 0x00000000, 0x000005dc, 0x00000000, 0x00000001, 0x00000800)
	door(0x0100, MODEL_DD_DR_NONREF, PAD_MP11_0056, OBJFLAG_DEACTIVATED | OBJFLAG_20000000 | OBJFLAG_80000000, OBJFLAG2_INTERACTCHECKLOS, 0, 1000, 0x00640000, 0x03e80000, 0x01f40000, 0x01f40000, 0x00030000, 0, DOORTYPE_SWINGING, 0x00000000, 0x000005dc, 0x00000000, 0xffffffff, 0x00000000)
	door(0x0100, MODEL_DD_DR_NONREF, PAD_MP11_0058, OBJFLAG_DEACTIVATED | OBJFLAG_20000000 | OBJFLAG_80000000, 0, 0, 1000, 0x00640000, 0x03e80000, 0x01f40000, 0x01f40000, 0x00030000, 0, DOORTYPE_SWINGING, 0x00000000, 0x000005dc, 0x00000000, 0x00000000, 0x00000800)
	door(0x0100, MODEL_DD_DR_NONREF, PAD_MP11_0057, OBJFLAG_DEACTIVATED | OBJFLAG_20000000 | OBJFLAG_80000000, 0, 0, 1000, 0x00640000, 0x03e80000, 0x01f40000, 0x01f40000, 0x00030000, 0, DOORTYPE_SWINGING, 0x00000000, 0x000005dc, 0x00000000, 0x00000000, 0x00000800)
	endprops
};

s32 intro[] = {
	spawn(PAD_MP11_001C)
	spawn(PAD_MP11_001D)
	spawn(PAD_MP11_001E)
	spawn(PAD_MP11_001F)
	spawn(PAD_MP11_0020)
	spawn(PAD_MP11_0021)
	spawn(PAD_MP11_0022)
	spawn(PAD_MP11_0023)
	spawn(PAD_MP11_0024)
	spawn(PAD_MP11_0025)
	spawn(PAD_MP11_0026)
	spawn(PAD_MP11_0027)
	case(0, 0x0006)
	case_respawn(0, 0x0000)
	case_respawn(0, 0x0001)
	case_respawn(0, 0x0002)
	case_respawn(0, 0x0003)
	case_respawn(0, 0x0004)
	case_respawn(0, 0x0005)
	case(1, 0x000d)
	case_respawn(1, 0x0007)
	case_respawn(1, 0x0008)
	case_respawn(1, 0x0009)
	case_respawn(1, 0x000a)
	case_respawn(1, 0x000b)
	case_respawn(1, 0x000c)
	case(2, 0x0014)
	case_respawn(2, 0x000e)
	case_respawn(2, 0x000f)
	case_respawn(2, 0x0010)
	case_respawn(2, 0x0011)
	case_respawn(2, 0x0012)
	case_respawn(2, 0x0013)
	case(3, 0x001b)
	case_respawn(3, 0x0015)
	case_respawn(3, 0x0016)
	case_respawn(3, 0x0017)
	case_respawn(3, 0x0018)
	case_respawn(3, 0x0019)
	case_respawn(3, 0x001a)
	hill(0x0091)
	hill(0x008b)
	hill(0x0071)
	hill(0x009f)
	outfit(OUTFIT_DEFAULT)
	endintro
};

struct path paths[] = {
	{ NULL, 0, 0 },
};
