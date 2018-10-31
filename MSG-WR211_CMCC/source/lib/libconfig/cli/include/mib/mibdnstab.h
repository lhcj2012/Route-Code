    /*
     * Notice: file generated by MIBMAKE from mibdnstab.mdf
     * DO NOT EDIT THIS FILE!!!  Edit mibdnstab.mdf
     */
#line 3 "mibdnstab.mdf"
/*
 * $Id: mibdnstab.h,v 1.1.1.1 2011/08/17 11:11:56 brwang Exp $
 *
 *      Copyright (c) 1997 UTT Technologies, Inc.
 *      All rights reserved.
 *      Use of copyright notice does not imply publication.
 *
 *
 *                      CONFIDENTIAL INFORMATION
 *                      ------------------------
 *      This Document contains Confidential Information or Trade Secrets,
 *      or both, which are the property of UTT Technologies, Inc.
 *      This document may not be copied, reproduced, reduced to any
 *      electronic medium or machine readable form or otherwise duplicated
 *      and the information herein may not be used, disseminated or
 *      otherwise disclosed, except with the prior written consent of
 *      UTT Technologies, Inc.
 */

    /*
     * Contains the DnstabProfile
     */
#line 28 "mibdnstab.mdf"

#if ( ! defined( MIBDNSTAB_H ) )
# define MIBDNSTAB_H

# include "mibglob.h"	/* for MAX_DOMAIN_NAME_LEN_RFC */

    /*
     * User interface info exported by this module.
     */
extern const MibFieldComplexParams	mibProfDnsFallbackTabParams;
#if ( USERIF & CLI )
extern const MibFieldComplexParams	mibProfDnsFallbackCfgParams;
#endif /* USERIF & CLI */

    /*
     * Maximum number of DNS fallback table entries.
     */
#define MAX_DNS_LOCAL_TAB 	80



    /*
     * MibProfDnsFallbackTab:
     *
     * A profile to store DNS fallback table host names and associated initial
     * IP address. A single instance of this profile is stored in the global IP
     * profile for TNT platforms only. At startup and whenever the profile
     * changes the information containted is copied to the local dns table in
     * ram if the table is enabled. Host names in the local dns table are
     * compared with the hostnames in the profile (if exist) and if host names
     * are not identical then the hostname from the profile (and its IP
     * address) are copied to the local table. The number-of-reads and
     * last-time-read fields for local table entries that are overwritten are
     * cleared.
     *
     *  hostName Host name.
     *
     *  ipAddress IP address of host.
     */

#if ( MDF_DNS_FALLBACK_TABLE == FYES )

typedef struct mibProfDnsFallbackTab {
#line 84 "mibdnstab.mdf"
    char                                hostName[ MAX_DOMAIN_NAME_LENGTH + 1 ];
#line 88 "mibdnstab.mdf"
    IpAddress                           ipAddress;
}
#if ( USERIF & CLI )
__PACK__
#endif
MibProfDnsFallbackTab;

#endif /* ( MDF_DNS_FALLBACK_TABLE == FYES ) */

    /*
     * MibProfDnsFallbackCfg:
     *
     * A profile to store DNS fallback table (see separate description above)
     * associated flags. The `enabled' flag controls using the table (reading)
     * and the `auto-update' flag controls updating (writing) the table.
     *
     *  enabled Use the DNS Fallback Table in case a regular DNS lookup fails
     *
     *  autoUpdate Update the DNS Fallback Table from a successful DNS lookup
     *
     *  dnsTab Local DNS table profile, stores host names & initial IP address
     */

//#if ( Q_TNT ) && ( MDF_DNS_FALLBACK_TABLE == FYES )
#if ( MDF_DNS_FALLBACK_TABLE == FYES )

typedef struct mibProfDnsFallbackCfg {
#line 206 "mibdnstab.mdf"
    Boolean                             enabled;
#line 210 "mibdnstab.mdf"
    Boolean                             autoUpdate;
#line 214 "mibdnstab.mdf"
    MibProfDnsFallbackTab               dnsTab[ MAX_DNS_LOCAL_TAB ];
}
#if ( USERIF & CLI )
__PACK__
#endif
MibProfDnsFallbackCfg;

//#endif /* ( Q_TNT ) && ( MDF_DNS_FALLBACK_TABLE == FYES ) */
#endif /* ( MDF_DNS_FALLBACK_TABLE == FYES ) */
#line 270 "mibdnstab.mdf"

#endif /* (! defined( MIBDNSTAB_H ) ) */
