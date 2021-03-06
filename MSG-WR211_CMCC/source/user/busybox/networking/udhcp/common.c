/* vi: set sw=4 ts=4: */
/* common.c
 *
 * Licensed under GPLv2 or later, see file LICENSE in this tarball for details.
 */

#include "common.h"
#include "libbb.h"

const uint8_t MAC_BCAST_ADDR[6] ALIGN2 = {
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff
};

time_t utt_getSysUpTime()
{
	struct sysinfo info;
	sysinfo(&info);
    return (time_t)(info.uptime);
}
