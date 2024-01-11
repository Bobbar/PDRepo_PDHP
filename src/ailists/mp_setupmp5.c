//
// Car Park (MP)
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
	ailists,
	NULL,
};

u32 props[] = {
	weapon(0x0100, 0x0000, PAD_MP5_0116, OBJFLAG_00000001, 0, 0, 240)
	ammocratemulti(0x00cc, MODEL_MULTI_AMMO_CRATE, PAD_MP5_0120, OBJFLAG_00000001, 0, 0, 1000)
	ammocratemulti(0x00cc, MODEL_MULTI_AMMO_CRATE, PAD_MP5_0121, OBJFLAG_00000001, 0, 0, 1000)
	weapon(0x0100, 0x0000, PAD_MP5_0117, OBJFLAG_00000001, 0, 0, 241)
	ammocratemulti(0x00cc, MODEL_MULTI_AMMO_CRATE, PAD_MP5_0122, OBJFLAG_00000001, 0, 0, 1000)
	ammocratemulti(0x00cc, MODEL_MULTI_AMMO_CRATE, PAD_MP5_0123, OBJFLAG_00000001, 0, 0, 1000)
	weapon(0x0100, 0x0000, PAD_MP5_0118, OBJFLAG_00000001, 0, 0, 242)
	ammocratemulti(0x00cc, MODEL_MULTI_AMMO_CRATE, PAD_MP5_0124, OBJFLAG_00000001, 0, 0, 1000)
	ammocratemulti(0x00cc, MODEL_MULTI_AMMO_CRATE, PAD_MP5_0125, OBJFLAG_00000001, 0, 0, 1000)
	weapon(0x0100, 0x0000, PAD_MP5_0119, OBJFLAG_00000001, 0, 0, 243)
	ammocratemulti(0x00cc, MODEL_MULTI_AMMO_CRATE, PAD_MP5_0126, OBJFLAG_00000001, 0, 0, 1000)
	ammocratemulti(0x00cc, MODEL_MULTI_AMMO_CRATE, PAD_MP5_0127, OBJFLAG_00000001, 0, 0, 1000)
	weapon(0x0100, 0x0000, PAD_MP5_011A, OBJFLAG_00000001, 0, 0, 244)
	ammocratemulti(0x00cc, MODEL_MULTI_AMMO_CRATE, PAD_MP5_0128, OBJFLAG_00000001, 0, 0, 1000)
	ammocratemulti(0x00cc, MODEL_MULTI_AMMO_CRATE, PAD_MP5_0129, OBJFLAG_00000001, 0, 0, 1000)
	weapon(0x0100, 0x0000, PAD_MP5_011B, OBJFLAG_00000001, 0, 0, 245)
	ammocratemulti(0x00cc, MODEL_MULTI_AMMO_CRATE, PAD_MP5_012A, OBJFLAG_00000001, 0, 0, 1000)
	ammocratemulti(0x00cc, MODEL_MULTI_AMMO_CRATE, PAD_MP5_012B, OBJFLAG_00000001, 0, 0, 1000)
	weapon(0x0100, 0x0000, PAD_MP5_011C, OBJFLAG_00000001, 0, 0, 246)
	ammocratemulti(0x00cc, MODEL_MULTI_AMMO_CRATE, PAD_MP5_012C, OBJFLAG_00000001, 0, 0, 1000)
	ammocratemulti(0x00cc, MODEL_MULTI_AMMO_CRATE, PAD_MP5_012D, OBJFLAG_00000001, 0, 0, 1000)
	weapon(0x0100, 0x0000, PAD_MP5_011D, OBJFLAG_00000001, 0, 0, 247)
	ammocratemulti(0x00cc, MODEL_MULTI_AMMO_CRATE, PAD_MP5_012E, OBJFLAG_00000001, 0, 0, 1000)
	ammocratemulti(0x00cc, MODEL_MULTI_AMMO_CRATE, PAD_MP5_012F, OBJFLAG_00000001, 0, 0, 1000)
	weapon(0x0100, 0x0000, PAD_MP5_011E, OBJFLAG_00000001, 0, 0, 248)
	ammocratemulti(0x00cc, MODEL_MULTI_AMMO_CRATE, PAD_MP5_0130, OBJFLAG_00000001, 0, 0, 1000)
	ammocratemulti(0x00cc, MODEL_MULTI_AMMO_CRATE, PAD_MP5_0131, OBJFLAG_00000001, 0, 0, 1000)
	weapon(0x0100, 0x0000, PAD_MP5_011F, OBJFLAG_00000001, 0, 0, 249)
	ammocratemulti(0x00cc, MODEL_MULTI_AMMO_CRATE, PAD_MP5_0132, OBJFLAG_00000001, 0, 0, 1000)
	ammocratemulti(0x00cc, MODEL_MULTI_AMMO_CRATE, PAD_MP5_0133, OBJFLAG_00000001, 0, 0, 1000)
	door(0x0100, MODEL_CH_SHUTTER1, PAD_MP5_010A, OBJFLAG_DEACTIVATED, 0, 0, 1000, 0x0000fd70, 0x0000e666, 0x00003333, 0x00014000, 0x00004000, DOORFLAG_0004, DOORTYPE_VERTICAL, 0x00000000, 0x000000f0, 0x00000000, 0x00000000, 0x00000a00)
	door(0x0100, MODEL_CH_SHUTTER1, PAD_MP5_010B, OBJFLAG_DEACTIVATED, 0, 0, 1000, 0x0000fd70, 0x0000e666, 0x00003333, 0x00014000, 0x00004000, DOORFLAG_0004, DOORTYPE_VERTICAL, 0x00000000, 0x000000f0, 0x00000000, 0x00000000, 0x00000a00)
	door(0x0100, MODEL_CH_SHUTTER1, PAD_MP5_010C, OBJFLAG_DEACTIVATED, 0, 0, 1000, 0x0000fd70, 0x0000e666, 0x00003333, 0x00014000, 0x00004000, DOORFLAG_0004, DOORTYPE_VERTICAL, 0x00000000, 0x000000f0, 0x00000000, 0x00000000, 0x00000a00)
	door(0x0100, MODEL_CH_SHUTTER1, PAD_MP5_010D, OBJFLAG_DEACTIVATED, 0, 0, 1000, 0x0000fd70, 0x0000e666, 0x00003333, 0x00014000, 0x00004000, DOORFLAG_0004, DOORTYPE_VERTICAL, 0x00000000, 0x000000f0, 0x00000000, 0x00000000, 0x00000a00)
	door(0x0100, MODEL_CH_SHUTTER1, PAD_MP5_010E, OBJFLAG_DEACTIVATED, 0, 0, 1000, 0x0000fd70, 0x0000e666, 0x00003333, 0x00014000, 0x00004000, DOORFLAG_0004, DOORTYPE_VERTICAL, 0x00000000, 0x000000f0, 0x00000000, 0x00000000, 0x00000a00)
	door(0x0100, MODEL_CH_SHUTTER1, PAD_MP5_010F, OBJFLAG_DEACTIVATED, 0, 0, 1000, 0x0000fd70, 0x0000e666, 0x00003333, 0x00014000, 0x00004000, DOORFLAG_0004, DOORTYPE_VERTICAL, 0x00000000, 0x000000f0, 0x00000000, 0x00000000, 0x00000a00)
	door(0x0100, MODEL_CH_SHUTTER1, PAD_MP5_0110, OBJFLAG_DEACTIVATED, 0, 0, 1000, 0x0000fd70, 0x0000e666, 0x00003333, 0x00014000, 0x00004000, DOORFLAG_0004, DOORTYPE_VERTICAL, 0x00000000, 0x000000f0, 0x00000000, 0x00000000, 0x00000a00)
	door(0x0100, MODEL_CH_SHUTTER1, PAD_MP5_0111, OBJFLAG_DEACTIVATED, 0, 0, 1000, 0x0000fd70, 0x0000e666, 0x00003333, 0x00014000, 0x00004000, DOORFLAG_0004, DOORTYPE_VERTICAL, 0x00000000, 0x000000f0, 0x00000000, 0x00000000, 0x00000a00)
	door(0x0100, MODEL_CH_SHUTTER1, PAD_MP5_0112, OBJFLAG_DEACTIVATED, 0, 0, 1000, 0x0000fd70, 0x0000e666, 0x00003333, 0x00014000, 0x00004000, DOORFLAG_0004, DOORTYPE_VERTICAL, 0x00000000, 0x000000f0, 0x00000000, 0x00000000, 0x00000a00)
	door(0x0100, MODEL_CH_SHUTTER1, PAD_MP5_0113, OBJFLAG_DEACTIVATED, 0, 0, 1000, 0x0000fd70, 0x0000e666, 0x00003333, 0x00014000, 0x00004000, DOORFLAG_0004, DOORTYPE_VERTICAL, 0x00000000, 0x000000f0, 0x00000000, 0x00000000, 0x00000a00)
	door(0x0100, MODEL_CH_SHUTTER1, PAD_MP5_0114, OBJFLAG_DEACTIVATED, 0, 0, 1000, 0x0000fd70, 0x0000e666, 0x00003333, 0x00014000, 0x00004000, DOORFLAG_0004, DOORTYPE_VERTICAL, 0x00000000, 0x000000f0, 0x00000000, 0x00000000, 0x00000a00)
	door(0x0100, MODEL_CH_SHUTTER1, PAD_MP5_0115, OBJFLAG_DEACTIVATED, 0, 0, 1000, 0x0000fd70, 0x0000e666, 0x00003333, 0x00014000, 0x00004000, DOORFLAG_0004, DOORTYPE_VERTICAL, 0x00000000, 0x000000f0, 0x00000000, 0x00000000, 0x00000a00)
	endprops
};

s32 intro[] = {
	outfit(OUTFIT_DEFAULT)
	spawn(PAD_MP5_001C)
	spawn(PAD_MP5_001D)
	spawn(PAD_MP5_001E)
	spawn(PAD_MP5_001F)
	spawn(PAD_MP5_0020)
	spawn(PAD_MP5_0021)
	spawn(PAD_MP5_0022)
	spawn(PAD_MP5_0023)
	spawn(PAD_MP5_0024)
	spawn(PAD_MP5_0025)
	spawn(PAD_MP5_0026)
	spawn(PAD_MP5_0027)
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
	hill(0x00c3)
	hill(0x0075)
	hill(0x00fa)
	hill(0x0089)
	hill(0x0048)
	endintro
};

struct path paths[] = {
	{ NULL, 0, 0 },
};

u8 func1001_1dc0[] = {
	set_wind_speed(8)
	terminate
	endlist
};

u8 func1000_1dcc[] = {
	mp_init_simulants
	rebuild_teams
	rebuild_squadrons
	terminate
	endlist
};

struct ailist ailists[] = {
	{ func1000_1dcc, 0x1000 },
	{ func1001_1dc0, 0x1001 },
	{ NULL, 0 },
};




