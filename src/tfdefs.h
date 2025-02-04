#ifndef TFDEFS_H
#define TFDEFS_H

#define svc_updatetimer 55
#define svc_updateicons 56
#define svc_updateflaginfo 57

#define UPDATEFLAGINFO_BROADCAST 0
#define UPDATEFLAGINFO_SINGLE 1

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

#endif