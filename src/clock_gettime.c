#include <errno.h>
#include <time.h>

#include "nuclei_sdk_soc.h"
#include "clock_gettime.h"

int clock_gettime(clockid_t clock_id, struct timespec *tp)
{
    if (tp == NULL) {
        errno = EINVAL;
        return -1;
    }

    struct timeval tv;
    uint64_t monotonic_time_s = 0;

    switch (clock_id) {
        case CLOCK_MONOTONIC:
            monotonic_time_s = SysTimer_GetLoadValue() / SOC_TIMER_FREQ;
            tp->tv_sec = monotonic_time_s;
            tp->tv_nsec = 0; //monotonic_time_s * 1000000000LL;
            break;
        default:
            errno = EINVAL;
            return -1;
    }
    return 0;
}