    /*
     * Notice: file generated by MIBMAKE from mibospf.mdf
     * DO NOT EDIT THIS FILE!!!  Edit mibospf.mdf
     */
#line 3 "mibospf.mdf"
/*
 * 	$Id: mibospf.h,v 1.1.1.1 2011/08/17 11:11:56 brwang Exp $
 *
 *      Copyright (c) 1995 UTT Technologies, Inc.
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

#line 25 "mibospf.mdf"

#if (( ! defined( MIBOSPF_H ) ) && ( MDF_OSPF == FYES ))
#define MIBOSPF_H

    /*
     * This file contains the internal representation of the ospf profile
     * (MIB_PROF_OSPF).
     */

#include "mibglob.h"

    /*
     * How to make a default version of an OSPF profile.
     */
extern ConstPtr
mibFactoryOspfProfile( MibProfileType	mibType,
		       Uint32		info );


    /*
     * Our parameter table is made external as the profile is used
     * within other profiles.
     */
extern const MibFieldComplexParams	mibProfOspfParams;

    /*
     * the maximum size of an OSPF authentication key
     */
#define OSPF_MAX_AUTHKEY 8

    /*
     * mibInfoOspfType:
     *
     * Specify the type of OSPF Factory profile desired (WAN or LAN).
     * MIB_OSPF_INFO_LAN gives the LAN profile; MIB_OSPF_INFO_WAN gives
     * the WAN profile.
     *
     *  MIB_INFO_OSPF_LAN
     *
     *  MIB_INFO_OSPF_WAN
     */

typedef enum MibInfoOspfType {
    MIB_INFO_OSPF_LAN	= 0,
    MIB_INFO_OSPF_WAN	= 1
} MibInfoOspfType;

extern const char* const		mibProfOspf;

    /*
     * Field editing params, also used in mibroute.mdf
     */
extern const MibFieldEnumParams		ospfAdvTypeParams;
extern const MibFieldEnumParams		aseTypeParams;
extern const MibFieldEnumParams		ase7Params;
extern const MibFieldNumberParams	costParams;
extern const MibEnumLookup		auTypeValues[];


    /*
     * AreaType:
     *
     * This defines the type of Areas one can have.
     *
     *  EXT_OPT_NORMAL Normal OSPF Area.
     *
     *  EXT_OPT_STUB Stub Area.
     *
     *  EXT_OPT_NSSA Not So Stubby Area.
     */
typedef enum AreaType {
#line 105 "mibospf.mdf"
    EXT_OPT_NORMAL = 0,
#line 108 "mibospf.mdf"
    EXT_OPT_STUB = 1,
#line 111 "mibospf.mdf"
    EXT_OPT_NSSA = 2
} AreaType;


static __inline__ Bool
validAreaType (int x)
{
    switch (x) {
#line 105 "mibospf.mdf"
    case EXT_OPT_NORMAL:
#line 108 "mibospf.mdf"
    case EXT_OPT_STUB:
#line 111 "mibospf.mdf"
    case EXT_OPT_NSSA:
        return TRUE;
    default:
        return FALSE;
    }
}

    /*
     * AseType:
     *
     *
     *  ASE_TYPE_1
     *
     *  ASE_TYPE_2
     */
typedef enum AseType {
#line 118 "mibospf.mdf"
    ASE_TYPE_1 = 0,
#line 119 "mibospf.mdf"
    ASE_TYPE_2 = 1
} AseType;


static __inline__ Bool
validAseType (int x)
{
    switch (x) {
#line 118 "mibospf.mdf"
    case ASE_TYPE_1:
#line 119 "mibospf.mdf"
    case ASE_TYPE_2:
        return TRUE;
    default:
        return FALSE;
    }
}

    /*
     * AdvType:
     *
     *
     *  ADV_TYPE_1
     *
     *  ADV_TYPE_2
     *
     *  ADV_INTERNAL
     */
typedef enum AdvType {
#line 125 "mibospf.mdf"
    ADV_TYPE_1 = 0,
#line 126 "mibospf.mdf"
    ADV_TYPE_2,
#line 127 "mibospf.mdf"
    ADV_INTERNAL
} AdvType;


static __inline__ Bool
validAdvType (int x)
{
    switch (x) {
#line 125 "mibospf.mdf"
    case ADV_TYPE_1:
#line 126 "mibospf.mdf"
    case ADV_TYPE_2:
#line 127 "mibospf.mdf"
    case ADV_INTERNAL:
        return TRUE;
    default:
        return FALSE;
    }
}

    /*
     * Ase7:
     *
     *
     *  N_A
     *
     *  ADVERTISE
     *
     *  DONOTADVERTISE
     */
typedef enum Ase7 {
#line 134 "mibospf.mdf"
    N_A = 0,
#line 135 "mibospf.mdf"
    ADVERTISE,
#line 136 "mibospf.mdf"
    DONOTADVERTISE
} Ase7;


static __inline__ Bool
validAse7 (int x)
{
    switch (x) {
#line 134 "mibospf.mdf"
    case N_A:
#line 135 "mibospf.mdf"
    case ADVERTISE:
#line 136 "mibospf.mdf"
    case DONOTADVERTISE:
        return TRUE;
    default:
        return FALSE;
    }
}

    /*
     * MibProfOspf:
     *
     * The OSPF profile. This defines the user tweekable state.
     *
     *  active Is OSPF active on this interface.
     *
     *  areaId The area that this interface belongs to.
     *
     *  areaType The type of Area. Normal, Stub, NSSA
     *
     *  helloInt The hello interval (seconds).
     *
     *  deadInt The dead interval (seconds).
     *
     *  priority The priority of this router in DR elections.
     *
     *  auType The type of OSPF authentication in effect.
     *
     *  authKey The authentication key.
     *
     *  keyId The key identifier for MD5 authentication.
     *
     *  outputCost The output cost.
     *
     *  downCost The output cost when the link is physically down but virtually
     *                                  up.
     *
     *  aseType The OSPF ASE type of this LSA.
     *
     *  aseTag The OSPF ASE tag of this link.
     *
     *  infTransDelay The estimated transit delay (seconds).
     *
     *  rxmtInterval The retransmit time (seconds).
     *
     *  nonMulticast Use direct addresses instead of multicast addresses.
     */
typedef struct mibProfOspf {
#line 205 "mibospf.mdf"
    Bool                                active;
#line 209 "mibospf.mdf"
    Uint32                              areaId;
#line 213 "mibospf.mdf"
    AreaType                            areaType;
#line 217 "mibospf.mdf"
    Uint32                              helloInt;
#line 221 "mibospf.mdf"
    Uint32                              deadInt;
#line 225 "mibospf.mdf"
    Uint32                              priority;
#line 229 "mibospf.mdf"
    AuType                              auType;
#line 233 "mibospf.mdf"
    unsigned char                       authKey[ OSPF_MAX_AUTHKEY + 1 ];
#line 237 "mibospf.mdf"
    Uint32                              keyId;
#line 241 "mibospf.mdf"
    Uint32                              outputCost;
#line 245 "mibospf.mdf"
    Uint32                              downCost;
#line 249 "mibospf.mdf"
    AseType                             aseType;
#line 253 "mibospf.mdf"
    Uint32                              aseTag;
#line 257 "mibospf.mdf"
    Uint32                              infTransDelay;
#line 261 "mibospf.mdf"
    Uint32                              rxmtInterval;
#line 265 "mibospf.mdf"
    Bool                                nonMulticast;
}
#if ( USERIF & CLI )
__PACK__
#endif
MibProfOspf;
#line 336 "mibospf.mdf"

#endif /* (( ! defined( MIBOSPF_H ) ) && ( MDF_OSPF == FYES )) */
