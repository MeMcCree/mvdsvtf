#ifndef TFDEFS_H
#define TFDEFS_H

#define svc_updatetimer 55
#define svc_updateicons 56
#define svc_updateflaginfo 57
#define svc_updatetfinfo 58

#define UPDATEFLAGINFO_BROADCAST 0
#define UPDATEFLAGINFO_SINGLE 1

#define UPDATETFINFO_BROADCAST 0
#define UPDATETFINFO_SINGLE 1

typedef enum {
	FLAGINFO_NOTINIT,
	FLAG_ON_BASE,
	FLAG_ON_GROUND,
	FLAG_CARRIED,
} flagstate_e;

typedef struct {
	flagstate_e state;
	union {
		int end;
		char nickname[64];
	};
} flaginfo_t;

#define TFINFO_ALL 			0
#define TFINFO_TEAM 		1
#define TFINFO_PLAYERCLASS 	2

#endif