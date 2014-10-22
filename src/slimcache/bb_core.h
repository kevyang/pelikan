#ifndef _BB_CORE_H_
#define _BB_CORE_H_

/* NOTE(yao): the core file should be where everything related to the
 * event driven stuff is handled, it is not a replacement of main()
 */
#include <cc_define.h>
#include <cc_stream.h>

#include <netdb.h>

/*          name                type            description */
#define CORE_METRIC(ACTION)                                         \
    ACTION( core_event,     METRIC_COUNTER, "# events returned"    )\
    ACTION( core_read,      METRIC_COUNTER, "# core_read invoked"  )\
    ACTION( core_write,     METRIC_COUNTER, "# core_write invoked" )\
    ACTION( core_close,     METRIC_COUNTER, "# core_close invoked" )

rstatus_t core_setup(struct addrinfo *ai);
void core_teardown(void);
rstatus_t core_evwait(void);

#endif /* _BB_CORE_H_ */