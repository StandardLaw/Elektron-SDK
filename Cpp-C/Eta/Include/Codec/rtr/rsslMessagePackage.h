

#ifndef __RSSL_MESSAGE_PACKAGE_H
#define __RSSL_MESSAGE_PACKAGE_H



#ifdef __cplusplus
extern "C"
{
#endif

/* Include all header files necessary to use the RSSL Message Package */
#include "rtr/rsslMsg.h"
#include "rtr/rsslRequestMsg.h"
#include "rtr/rsslRefreshMsg.h"
#include "rtr/rsslStatusMsg.h"
#include "rtr/rsslUpdateMsg.h"
#include "rtr/rsslCloseMsg.h"
#include "rtr/rsslAckMsg.h"
#include "rtr/rsslGenericMsg.h"
#include "rtr/rsslPostMsg.h"

#include "rtr/rsslMsgEncoders.h"
#include "rtr/rsslMsgDecoders.h"

/** 
 *	@addtogroup MsgPkgVersion Message Package Library Version Helper
 *	@{
 */

/** 
 * @brief Programmatically extracts library and product version information that is compiled into this library
 *
 * User can call this function to programmatically extract version information, or <BR>
 * query version information externally (via 'strings' command or something similar<BR>
 * and grep for the following tags:<BR>
 * 'VERSION' - contains internal library version information such as node number (e.g. rssl1.4.F2)<BR>
 * 'PRODUCT' - contains product information such as load/package naming (e.g. upa7.0.0.L1)<BR>
 * @param pVerInfo RsslLibraryVersionInfo structure to populate with library version information
 * @see RsslLibraryVersionInfo
 */
RSSL_API void rsslQueryMessagesLibraryVersion(RsslLibraryVersionInfo *pVerInfo);

/**
 * @}
 */



#ifdef __cplusplus
}
#endif


#endif /* __RSSL_MESSAGES_H */



