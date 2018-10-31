    /*
     * Notice: file generated by MIBMAKE from mibsct.mdf
     * DO NOT EDIT THIS FILE!!!  Edit mibsct.mdf
     */
#line 3 "mibsct.mdf"
/*
 * $Id: mibsct.h,v 1.1.1.1 2011/08/17 11:11:56 brwang Exp $
 *
 *      Copyright (c) 1996 UTT Technologies, Inc.
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
     * Define the enumerated type SwitchedCallType and it's CLI lookup
     * tables.
     */
#line 29 "mibsct.mdf"

#if ! defined( MIBSCT_H )
#define MIBSCT_H

#include "mibgen.h"

#if ( USERIF & CLI )

extern const MibFieldEnumParams	switchedCallTypeParams;

#endif /* ( USERIF & CLI ) */


    /*
     * SwitchedCallType:
     *
     * The types of switched services available to the user are enumerated
     * below. Note that they are explicitly numbered, and these numbers match
     * values in the RADIUS dictionary. Adding an entry here and not to the
     * RADIUS dictionary will cause children to laugh at you in public.
     *
     *  SWITCHED_VOICE_BEARER The call should be set up as a voice call, even
     *                                  though we are going to transmit data
     *                                  over the channel. It will be assumed
     *                                  that only 7 of 8 bits (i.e. 56Kbps) is
     *                                  available.
     *
     *  SWITCHED_RESTRICTED_BEARER The call should be set up as a data call
     *                                  with explicit request for 56Kbps
     *                                  restricted data transfer.
     *
     *  SWITCHED_CLEAR_BEARER The call should be set up as a data call that
     *                                  utilizes the full 64Kbps of the data
     *                                  channel.
     *
     *  SWITCHED_RESTRICTED_64 64K, but restricted data.
     *
     *  SWITCHED_CLEAR_56 56K, not restricted.
     *
     *  SWITCHED_RESTRICTED_384 384K, and restricted, believe it or not.
     *
     *  SWITCHED_CLEAR_384 384K, not restricted.
     *
     *  SWITCHED_CLEAR_1536 1536K, not restricted.
     *
     *  SWITCHED_RESTRICTED_1536
     *
     *  SWITCHED_CLEAR_128 128 to 1472 are MultiRate bit rates.
     *
     *  SWITCHED_CLEAR_192
     *
     *  SWITCHED_CLEAR_256
     *
     *  SWITCHED_CLEAR_320
     *
     *  SWITCHED_CLEAR_384_DWS A 384 kbit/s call coded as multirate, not H0.
     *
     *  SWITCHED_CLEAR_448
     *
     *  SWITCHED_CLEAR_512
     *
     *  SWITCHED_CLEAR_576
     *
     *  SWITCHED_CLEAR_640
     *
     *  SWITCHED_CLEAR_704
     *
     *  SWITCHED_CLEAR_768
     *
     *  SWITCHED_CLEAR_832
     *
     *  SWITCHED_CLEAR_896
     *
     *  SWITCHED_CLEAR_960
     *
     *  SWITCHED_CLEAR_1024
     *
     *  SWITCHED_CLEAR_1088
     *
     *  SWITCHED_CLEAR_1152
     *
     *  SWITCHED_CLEAR_1216
     *
     *  SWITCHED_CLEAR_1280
     *
     *  SWITCHED_CLEAR_1344
     *
     *  SWITCHED_CLEAR_1408
     *
     *  SWITCHED_CLEAR_1472
     *
     *  SWITCHED_CLEAR_1600
     *
     *  SWITCHED_CLEAR_1664
     *
     *  SWITCHED_CLEAR_1728
     *
     *  SWITCHED_CLEAR_1792
     *
     *  SWITCHED_CLEAR_1856
     *
     *  SWITCHED_CLEAR_1920
     *
     *  SWITCHED_INHERITED The bearer service is inherited from the incoming
     *                                  call when we are routing from a BRI NT.
     *
     *  SWITCHED_RESTRICTED_BEARER_X30
     *
     *  SWITCHED_CLEAR_BEARER_V110
     *
     *  SWITCHED_RESTRICTED_64_X30
     *
     *  SWITCHED_CLEAR_56_V110
     *
     *  SWITCHED_MODEM The call should be set up as a voice call. When call is
     *                                  up it will be routed internally to a
     *                                  digital modem.
     *
     *  SWITCHED_ATMODEM
     *
     *  SWITCHED_V110_24_56 The call should be set up as a data call with
     *                                  explicit request for 56Kbps
     *                                  unrestricted data transfer with v.110
     *                                  bitrate of 2400
     *
     *  SWITCHED_V110_48_56 The call should be set up as a data call with
     *                                  explicit request for 56Kbps
     *                                  unrestricted data transfer with v.110
     *                                  bitrate of 4800
     *
     *  SWITCHED_V110_96_56 The call should be set up as a data call with
     *                                  explicit request for 56Kbps
     *                                  unrestricted data transfer with v.110
     *                                  bitrate of 9600
     *
     *  SWITCHED_V110_192_56 The call should be set up as a data call with
     *                                  explicit request for 56Kbps
     *                                  unrestricted data transfer with v.110
     *                                  bitrate of 19200
     *
     *  SWITCHED_V110_384_56 The call should be set up as a data call with
     *                                  explicit request for 56Kbps
     *                                  unrestricted data transfer with v.110
     *                                  bitrate of 38400
     *
     *  SWITCHED_V110_24_56R The call should be set up as a data call with
     *                                  explicit request for 56Kbps restricted
     *                                  data transfer with v.110 bitrate of
     *                                  2400
     *
     *  SWITCHED_V110_48_56R The call should be set up as a data call with
     *                                  explicit request for 56Kbps restricted
     *                                  data transfer with v.110 bitrate of
     *                                  4800
     *
     *  SWITCHED_V110_96_56R The call should be set up as a data call with
     *                                  explicit request for 56Kbps restricted
     *                                  data transfer with v.110 bitrate of
     *                                  9600
     *
     *  SWITCHED_V110_192_56R The call should be set up as a data call with
     *                                  explicit request for 56Kbps restricted
     *                                  data transfer with v.110 bitrate of
     *                                  19200
     *
     *  SWITCHED_V110_384_56R The call should be set up as a data call with
     *                                  explicit request for 56Kbps restricted
     *                                  data transfer with v.110 bitrate of
     *                                  38400
     *
     *  SWITCHED_V110_24_64 The call should be set up as a data call with
     *                                  explicit request for 64Kbps
     *                                  unrestricted data transfer with v.110
     *                                  bitrate of 2400
     *
     *  SWITCHED_V110_48_64 The call should be set up as a data call with
     *                                  explicit request for 64Kbps
     *                                  unrestricted data transfer with v.110
     *                                  bitrate of 4800
     *
     *  SWITCHED_V110_96_64 The call should be set up as a data call with
     *                                  explicit request for 64Kbps
     *                                  unrestricted data transfer with v.110
     *                                  bitrate of 9600
     *
     *  SWITCHED_V110_192_64 The call should be set up as a data call with
     *                                  explicit request for 64Kbps
     *                                  unrestricted data transfer with v.110
     *                                  bitrate of 19200
     *
     *  SWITCHED_V110_384_64 The call should be set up as a data call with
     *                                  explicit request for 64Kbps
     *                                  unrestricted data transfer with v.110
     *                                  bitrate of 38400
     *
     *  SWITCHED_V110_24_64R The call should be set up as a data call with
     *                                  explicit request for 64Kbps restricted
     *                                  data transfer with v.110 bitrate of
     *                                  2400
     *
     *  SWITCHED_V110_48_64R The call should be set up as a data call with
     *                                  explicit request for 64Kbps restricted
     *                                  data transfer with v.110 bitrate of
     *                                  4800
     *
     *  SWITCHED_V110_96_64R The call should be set up as a data call with
     *                                  explicit request for 64Kbps restricted
     *                                  data transfer with v.110 bitrate of
     *                                  9600
     *
     *  SWITCHED_V110_192_64R The call should be set up as a data call with
     *                                  explicit request for 64Kbps restricted
     *                                  data transfer with v.110 bitrate of
     *                                  19200
     *
     *  SWITCHED_V110_384_64R The call should be set up as a data call with
     *                                  explicit request for 64Kbps restricted
     *                                  data transfer with v.110 bitrate of
     *                                  38400
     *
     *  SWITCHED_V32 PIAFS call at 32Kbps
     *
     *  SWITCHED_PHS_64 PIAFS call at 64Kbps
     *
     *  SWITCHED_PBX_DSL_0 A connection destined for a PBX trunk on dslID zero.
     *                                  For all DSL-id's of greater than zero,
     *                                  the dslID is added to this value. This
     *                                  is the way in which a PBX trunk is
     *                                  requested through to the lower layers.
     *
     *  SWITCHED_NUMBER_OF_SERVICES The number of service options available.
     *                                  This must simply be the last in the
     *                                  enumeration, and is used for internal
     *                                  array sizing only.
     */
typedef enum SwitchedCallType {
#line 60 "mibsct.mdf"
    SWITCHED_VOICE_BEARER = 0,
#line 65 "mibsct.mdf"
    SWITCHED_RESTRICTED_BEARER = 1,
#line 69 "mibsct.mdf"
    SWITCHED_CLEAR_BEARER = 2,
#line 73 "mibsct.mdf"
    SWITCHED_RESTRICTED_64 = 3,
#line 76 "mibsct.mdf"
    SWITCHED_CLEAR_56 = 4,
#line 79 "mibsct.mdf"
#if ( (NETIF & ( T1 | E1 )) || Q_TNT_HDLC_TYPE_CARD )
    SWITCHED_RESTRICTED_384 = 5,
#endif /* ( (NETIF & ( T1 | E1 )) || Q_TNT_HDLC_TYPE_CARD ) */
#line 83 "mibsct.mdf"
#if ( (NETIF & ( T1 | E1 )) || Q_TNT_HDLC_TYPE_CARD )
    SWITCHED_CLEAR_384 = 6,
#endif /* ( (NETIF & ( T1 | E1 )) || Q_TNT_HDLC_TYPE_CARD ) */
#line 87 "mibsct.mdf"
#if ( (NETIF & ( T1 | E1 )) || Q_TNT_HDLC_TYPE_CARD )
    SWITCHED_CLEAR_1536 = 7,
#endif /* ( (NETIF & ( T1 | E1 )) || Q_TNT_HDLC_TYPE_CARD ) */
#line 91 "mibsct.mdf"
#if ( (NETIF & ( T1 | E1 )) || Q_TNT_HDLC_TYPE_CARD )
    SWITCHED_RESTRICTED_1536 = 8,
#endif /* ( (NETIF & ( T1 | E1 )) || Q_TNT_HDLC_TYPE_CARD ) */
#line 94 "mibsct.mdf"
#if ( (NETIF & ( T1 | E1 )) || Q_TNT_HDLC_TYPE_CARD )
    SWITCHED_CLEAR_128 = 9,
#endif /* ( (NETIF & ( T1 | E1 )) || Q_TNT_HDLC_TYPE_CARD ) */
#line 98 "mibsct.mdf"
#if ( (NETIF & ( T1 | E1 )) || Q_TNT_HDLC_TYPE_CARD )
    SWITCHED_CLEAR_192 = 10,
#endif /* ( (NETIF & ( T1 | E1 )) || Q_TNT_HDLC_TYPE_CARD ) */
#line 101 "mibsct.mdf"
#if ( (NETIF & ( T1 | E1 )) || Q_TNT_HDLC_TYPE_CARD )
    SWITCHED_CLEAR_256 = 11,
#endif /* ( (NETIF & ( T1 | E1 )) || Q_TNT_HDLC_TYPE_CARD ) */
#line 104 "mibsct.mdf"
#if ( (NETIF & ( T1 | E1 )) || Q_TNT_HDLC_TYPE_CARD )
    SWITCHED_CLEAR_320 = 12,
#endif /* ( (NETIF & ( T1 | E1 )) || Q_TNT_HDLC_TYPE_CARD ) */
#line 107 "mibsct.mdf"
#if ( (NETIF & ( T1 | E1 )) || Q_TNT_HDLC_TYPE_CARD )
    SWITCHED_CLEAR_384_DWS = 13,
#endif /* ( (NETIF & ( T1 | E1 )) || Q_TNT_HDLC_TYPE_CARD ) */
#line 111 "mibsct.mdf"
#if ( (NETIF & ( T1 | E1 )) || Q_TNT_HDLC_TYPE_CARD )
    SWITCHED_CLEAR_448 = 14,
#endif /* ( (NETIF & ( T1 | E1 )) || Q_TNT_HDLC_TYPE_CARD ) */
#line 114 "mibsct.mdf"
#if ( (NETIF & ( T1 | E1 )) || Q_TNT_HDLC_TYPE_CARD )
    SWITCHED_CLEAR_512 = 15,
#endif /* ( (NETIF & ( T1 | E1 )) || Q_TNT_HDLC_TYPE_CARD ) */
#line 117 "mibsct.mdf"
#if ( (NETIF & ( T1 | E1 )) || Q_TNT_HDLC_TYPE_CARD )
    SWITCHED_CLEAR_576 = 16,
#endif /* ( (NETIF & ( T1 | E1 )) || Q_TNT_HDLC_TYPE_CARD ) */
#line 120 "mibsct.mdf"
#if ( (NETIF & ( T1 | E1 )) || Q_TNT_HDLC_TYPE_CARD )
    SWITCHED_CLEAR_640 = 17,
#endif /* ( (NETIF & ( T1 | E1 )) || Q_TNT_HDLC_TYPE_CARD ) */
#line 123 "mibsct.mdf"
#if ( (NETIF & ( T1 | E1 )) || Q_TNT_HDLC_TYPE_CARD )
    SWITCHED_CLEAR_704 = 18,
#endif /* ( (NETIF & ( T1 | E1 )) || Q_TNT_HDLC_TYPE_CARD ) */
#line 126 "mibsct.mdf"
#if ( (NETIF & ( T1 | E1 )) || Q_TNT_HDLC_TYPE_CARD )
    SWITCHED_CLEAR_768 = 19,
#endif /* ( (NETIF & ( T1 | E1 )) || Q_TNT_HDLC_TYPE_CARD ) */
#line 129 "mibsct.mdf"
#if ( (NETIF & ( T1 | E1 )) || Q_TNT_HDLC_TYPE_CARD )
    SWITCHED_CLEAR_832 = 20,
#endif /* ( (NETIF & ( T1 | E1 )) || Q_TNT_HDLC_TYPE_CARD ) */
#line 132 "mibsct.mdf"
#if ( (NETIF & ( T1 | E1 )) || Q_TNT_HDLC_TYPE_CARD )
    SWITCHED_CLEAR_896 = 21,
#endif /* ( (NETIF & ( T1 | E1 )) || Q_TNT_HDLC_TYPE_CARD ) */
#line 135 "mibsct.mdf"
#if ( (NETIF & ( T1 | E1 )) || Q_TNT_HDLC_TYPE_CARD )
    SWITCHED_CLEAR_960 = 22,
#endif /* ( (NETIF & ( T1 | E1 )) || Q_TNT_HDLC_TYPE_CARD ) */
#line 138 "mibsct.mdf"
#if ( (NETIF & ( T1 | E1 )) || Q_TNT_HDLC_TYPE_CARD )
    SWITCHED_CLEAR_1024 = 23,
#endif /* ( (NETIF & ( T1 | E1 )) || Q_TNT_HDLC_TYPE_CARD ) */
#line 141 "mibsct.mdf"
#if ( (NETIF & ( T1 | E1 )) || Q_TNT_HDLC_TYPE_CARD )
    SWITCHED_CLEAR_1088 = 24,
#endif /* ( (NETIF & ( T1 | E1 )) || Q_TNT_HDLC_TYPE_CARD ) */
#line 144 "mibsct.mdf"
#if ( (NETIF & ( T1 | E1 )) || Q_TNT_HDLC_TYPE_CARD )
    SWITCHED_CLEAR_1152 = 25,
#endif /* ( (NETIF & ( T1 | E1 )) || Q_TNT_HDLC_TYPE_CARD ) */
#line 147 "mibsct.mdf"
#if ( (NETIF & ( T1 | E1 )) || Q_TNT_HDLC_TYPE_CARD )
    SWITCHED_CLEAR_1216 = 26,
#endif /* ( (NETIF & ( T1 | E1 )) || Q_TNT_HDLC_TYPE_CARD ) */
#line 150 "mibsct.mdf"
#if ( (NETIF & ( T1 | E1 )) || Q_TNT_HDLC_TYPE_CARD )
    SWITCHED_CLEAR_1280 = 27,
#endif /* ( (NETIF & ( T1 | E1 )) || Q_TNT_HDLC_TYPE_CARD ) */
#line 153 "mibsct.mdf"
#if ( (NETIF & ( T1 | E1 )) || Q_TNT_HDLC_TYPE_CARD )
    SWITCHED_CLEAR_1344 = 28,
#endif /* ( (NETIF & ( T1 | E1 )) || Q_TNT_HDLC_TYPE_CARD ) */
#line 156 "mibsct.mdf"
#if ( (NETIF & ( T1 | E1 )) || Q_TNT_HDLC_TYPE_CARD )
    SWITCHED_CLEAR_1408 = 29,
#endif /* ( (NETIF & ( T1 | E1 )) || Q_TNT_HDLC_TYPE_CARD ) */
#line 159 "mibsct.mdf"
#if ( (NETIF & ( T1 | E1 )) || Q_TNT_HDLC_TYPE_CARD )
    SWITCHED_CLEAR_1472 = 30,
#endif /* ( (NETIF & ( T1 | E1 )) || Q_TNT_HDLC_TYPE_CARD ) */
#line 162 "mibsct.mdf"
#if ( (NETIF & E1 ) || Q_TNT_HDLC_TYPE_CARD )
    SWITCHED_CLEAR_1600 = 31,
#endif /* ( (NETIF & E1 ) || Q_TNT_HDLC_TYPE_CARD ) */
#line 165 "mibsct.mdf"
#if ( (NETIF & E1 ) || Q_TNT_HDLC_TYPE_CARD )
    SWITCHED_CLEAR_1664 = 32,
#endif /* ( (NETIF & E1 ) || Q_TNT_HDLC_TYPE_CARD ) */
#line 168 "mibsct.mdf"
#if ( (NETIF & E1 ) || Q_TNT_HDLC_TYPE_CARD )
    SWITCHED_CLEAR_1728 = 33,
#endif /* ( (NETIF & E1 ) || Q_TNT_HDLC_TYPE_CARD ) */
#line 171 "mibsct.mdf"
#if ( (NETIF & E1 ) || Q_TNT_HDLC_TYPE_CARD )
    SWITCHED_CLEAR_1792 = 34,
#endif /* ( (NETIF & E1 ) || Q_TNT_HDLC_TYPE_CARD ) */
#line 174 "mibsct.mdf"
#if ( (NETIF & E1 ) || Q_TNT_HDLC_TYPE_CARD )
    SWITCHED_CLEAR_1856 = 35,
#endif /* ( (NETIF & E1 ) || Q_TNT_HDLC_TYPE_CARD ) */
#line 177 "mibsct.mdf"
#if ( (NETIF & E1 ) || Q_TNT_HDLC_TYPE_CARD )
    SWITCHED_CLEAR_1920 = 36,
#endif /* ( (NETIF & E1 ) || Q_TNT_HDLC_TYPE_CARD ) */
#line 180 "mibsct.mdf"
    SWITCHED_INHERITED = 37,
#line 185 "mibsct.mdf"
#if ( MDF_DPNSS_SIGNALING == FYES )
    SWITCHED_RESTRICTED_BEARER_X30 = 38,
#endif /* ( MDF_DPNSS_SIGNALING == FYES ) */
#line 188 "mibsct.mdf"
#if ( MDF_DPNSS_SIGNALING == FYES )
    SWITCHED_CLEAR_BEARER_V110 = 39,
#endif /* ( MDF_DPNSS_SIGNALING == FYES ) */
#line 191 "mibsct.mdf"
#if ( MDF_DPNSS_SIGNALING == FYES )
    SWITCHED_RESTRICTED_64_X30 = 40,
#endif /* ( MDF_DPNSS_SIGNALING == FYES ) */
#line 194 "mibsct.mdf"
#if ( MDF_DPNSS_SIGNALING == FYES )
    SWITCHED_CLEAR_56_V110 = 41,
#endif /* ( MDF_DPNSS_SIGNALING == FYES ) */
#line 197 "mibsct.mdf"
#if ( MDF_LMODEM_DIALOUT == FYES )
    SWITCHED_MODEM = 42,
#endif /* ( MDF_LMODEM_DIALOUT == FYES ) */
#line 202 "mibsct.mdf"
#if ( PLATFORM & ( M200 ))
    SWITCHED_ATMODEM = 43,
#endif /* ( PLATFORM & ( M200 )) */
#line 205 "mibsct.mdf"
#if ( V110_PPP_OUTDIAL == FYES )
    SWITCHED_V110_24_56 = 45,
#endif /* ( V110_PPP_OUTDIAL == FYES ) */
#line 210 "mibsct.mdf"
#if ( V110_PPP_OUTDIAL == FYES )
    SWITCHED_V110_48_56 = 46,
#endif /* ( V110_PPP_OUTDIAL == FYES ) */
#line 215 "mibsct.mdf"
#if ( V110_PPP_OUTDIAL == FYES )
    SWITCHED_V110_96_56 = 47,
#endif /* ( V110_PPP_OUTDIAL == FYES ) */
#line 220 "mibsct.mdf"
#if ( V110_PPP_OUTDIAL == FYES )
    SWITCHED_V110_192_56 = 48,
#endif /* ( V110_PPP_OUTDIAL == FYES ) */
#line 225 "mibsct.mdf"
#if ( V110_PPP_OUTDIAL == FYES )
    SWITCHED_V110_384_56 = 49,
#endif /* ( V110_PPP_OUTDIAL == FYES ) */
#line 230 "mibsct.mdf"
#if ( V110_PPP_OUTDIAL == FYES )
    SWITCHED_V110_24_56R = 50,
#endif /* ( V110_PPP_OUTDIAL == FYES ) */
#line 235 "mibsct.mdf"
#if ( V110_PPP_OUTDIAL == FYES )
    SWITCHED_V110_48_56R = 51,
#endif /* ( V110_PPP_OUTDIAL == FYES ) */
#line 240 "mibsct.mdf"
#if ( V110_PPP_OUTDIAL == FYES )
    SWITCHED_V110_96_56R = 52,
#endif /* ( V110_PPP_OUTDIAL == FYES ) */
#line 245 "mibsct.mdf"
#if ( V110_PPP_OUTDIAL == FYES )
    SWITCHED_V110_192_56R = 53,
#endif /* ( V110_PPP_OUTDIAL == FYES ) */
#line 250 "mibsct.mdf"
#if ( V110_PPP_OUTDIAL == FYES )
    SWITCHED_V110_384_56R = 54,
#endif /* ( V110_PPP_OUTDIAL == FYES ) */
#line 255 "mibsct.mdf"
#if ( V110_PPP_OUTDIAL == FYES )
    SWITCHED_V110_24_64 = 55,
#endif /* ( V110_PPP_OUTDIAL == FYES ) */
#line 260 "mibsct.mdf"
#if ( V110_PPP_OUTDIAL == FYES )
    SWITCHED_V110_48_64 = 56,
#endif /* ( V110_PPP_OUTDIAL == FYES ) */
#line 265 "mibsct.mdf"
#if ( V110_PPP_OUTDIAL == FYES )
    SWITCHED_V110_96_64 = 57,
#endif /* ( V110_PPP_OUTDIAL == FYES ) */
#line 270 "mibsct.mdf"
#if ( V110_PPP_OUTDIAL == FYES )
    SWITCHED_V110_192_64 = 58,
#endif /* ( V110_PPP_OUTDIAL == FYES ) */
#line 275 "mibsct.mdf"
#if ( V110_PPP_OUTDIAL == FYES )
    SWITCHED_V110_384_64 = 59,
#endif /* ( V110_PPP_OUTDIAL == FYES ) */
#line 280 "mibsct.mdf"
#if ( V110_PPP_OUTDIAL == FYES )
    SWITCHED_V110_24_64R = 60,
#endif /* ( V110_PPP_OUTDIAL == FYES ) */
#line 285 "mibsct.mdf"
#if ( V110_PPP_OUTDIAL == FYES )
    SWITCHED_V110_48_64R = 61,
#endif /* ( V110_PPP_OUTDIAL == FYES ) */
#line 290 "mibsct.mdf"
#if ( V110_PPP_OUTDIAL == FYES )
    SWITCHED_V110_96_64R = 62,
#endif /* ( V110_PPP_OUTDIAL == FYES ) */
#line 295 "mibsct.mdf"
#if ( V110_PPP_OUTDIAL == FYES )
    SWITCHED_V110_192_64R = 63,
#endif /* ( V110_PPP_OUTDIAL == FYES ) */
#line 300 "mibsct.mdf"
#if ( V110_PPP_OUTDIAL == FYES )
    SWITCHED_V110_384_64R = 64,
#endif /* ( V110_PPP_OUTDIAL == FYES ) */
#line 305 "mibsct.mdf"
#if ( MDF_V32_PHS == FYES )
    SWITCHED_V32 = 65,
#endif /* ( MDF_V32_PHS == FYES ) */
#line 309 "mibsct.mdf"
#if (( MDF_V32_PHS == FYES ) && ( MDF_V64_PHS == FYES ))
    SWITCHED_PHS_64 = 66,
#endif /* (( MDF_V32_PHS == FYES ) && ( MDF_V64_PHS == FYES )) */
#line 313 "mibsct.mdf"
#if ( MDF_NET_2_NET_PBX == FYES )
    SWITCHED_PBX_DSL_0 = 200,
#endif /* ( MDF_NET_2_NET_PBX == FYES ) */
#line 321 "mibsct.mdf"
    SWITCHED_NUMBER_OF_SERVICES
} SwitchedCallType;


static __inline__ Bool
validSwitchedCallType (int x)
{
    switch (x) {
#line 60 "mibsct.mdf"
    case SWITCHED_VOICE_BEARER:
#line 65 "mibsct.mdf"
    case SWITCHED_RESTRICTED_BEARER:
#line 69 "mibsct.mdf"
    case SWITCHED_CLEAR_BEARER:
#line 73 "mibsct.mdf"
    case SWITCHED_RESTRICTED_64:
#line 76 "mibsct.mdf"
    case SWITCHED_CLEAR_56:
#line 79 "mibsct.mdf"
#if ( (NETIF & ( T1 | E1 )) || Q_TNT_HDLC_TYPE_CARD )
    case SWITCHED_RESTRICTED_384:
#endif /* ( (NETIF & ( T1 | E1 )) || Q_TNT_HDLC_TYPE_CARD ) */
#line 83 "mibsct.mdf"
#if ( (NETIF & ( T1 | E1 )) || Q_TNT_HDLC_TYPE_CARD )
    case SWITCHED_CLEAR_384:
#endif /* ( (NETIF & ( T1 | E1 )) || Q_TNT_HDLC_TYPE_CARD ) */
#line 87 "mibsct.mdf"
#if ( (NETIF & ( T1 | E1 )) || Q_TNT_HDLC_TYPE_CARD )
    case SWITCHED_CLEAR_1536:
#endif /* ( (NETIF & ( T1 | E1 )) || Q_TNT_HDLC_TYPE_CARD ) */
#line 91 "mibsct.mdf"
#if ( (NETIF & ( T1 | E1 )) || Q_TNT_HDLC_TYPE_CARD )
    case SWITCHED_RESTRICTED_1536:
#endif /* ( (NETIF & ( T1 | E1 )) || Q_TNT_HDLC_TYPE_CARD ) */
#line 94 "mibsct.mdf"
#if ( (NETIF & ( T1 | E1 )) || Q_TNT_HDLC_TYPE_CARD )
    case SWITCHED_CLEAR_128:
#endif /* ( (NETIF & ( T1 | E1 )) || Q_TNT_HDLC_TYPE_CARD ) */
#line 98 "mibsct.mdf"
#if ( (NETIF & ( T1 | E1 )) || Q_TNT_HDLC_TYPE_CARD )
    case SWITCHED_CLEAR_192:
#endif /* ( (NETIF & ( T1 | E1 )) || Q_TNT_HDLC_TYPE_CARD ) */
#line 101 "mibsct.mdf"
#if ( (NETIF & ( T1 | E1 )) || Q_TNT_HDLC_TYPE_CARD )
    case SWITCHED_CLEAR_256:
#endif /* ( (NETIF & ( T1 | E1 )) || Q_TNT_HDLC_TYPE_CARD ) */
#line 104 "mibsct.mdf"
#if ( (NETIF & ( T1 | E1 )) || Q_TNT_HDLC_TYPE_CARD )
    case SWITCHED_CLEAR_320:
#endif /* ( (NETIF & ( T1 | E1 )) || Q_TNT_HDLC_TYPE_CARD ) */
#line 107 "mibsct.mdf"
#if ( (NETIF & ( T1 | E1 )) || Q_TNT_HDLC_TYPE_CARD )
    case SWITCHED_CLEAR_384_DWS:
#endif /* ( (NETIF & ( T1 | E1 )) || Q_TNT_HDLC_TYPE_CARD ) */
#line 111 "mibsct.mdf"
#if ( (NETIF & ( T1 | E1 )) || Q_TNT_HDLC_TYPE_CARD )
    case SWITCHED_CLEAR_448:
#endif /* ( (NETIF & ( T1 | E1 )) || Q_TNT_HDLC_TYPE_CARD ) */
#line 114 "mibsct.mdf"
#if ( (NETIF & ( T1 | E1 )) || Q_TNT_HDLC_TYPE_CARD )
    case SWITCHED_CLEAR_512:
#endif /* ( (NETIF & ( T1 | E1 )) || Q_TNT_HDLC_TYPE_CARD ) */
#line 117 "mibsct.mdf"
#if ( (NETIF & ( T1 | E1 )) || Q_TNT_HDLC_TYPE_CARD )
    case SWITCHED_CLEAR_576:
#endif /* ( (NETIF & ( T1 | E1 )) || Q_TNT_HDLC_TYPE_CARD ) */
#line 120 "mibsct.mdf"
#if ( (NETIF & ( T1 | E1 )) || Q_TNT_HDLC_TYPE_CARD )
    case SWITCHED_CLEAR_640:
#endif /* ( (NETIF & ( T1 | E1 )) || Q_TNT_HDLC_TYPE_CARD ) */
#line 123 "mibsct.mdf"
#if ( (NETIF & ( T1 | E1 )) || Q_TNT_HDLC_TYPE_CARD )
    case SWITCHED_CLEAR_704:
#endif /* ( (NETIF & ( T1 | E1 )) || Q_TNT_HDLC_TYPE_CARD ) */
#line 126 "mibsct.mdf"
#if ( (NETIF & ( T1 | E1 )) || Q_TNT_HDLC_TYPE_CARD )
    case SWITCHED_CLEAR_768:
#endif /* ( (NETIF & ( T1 | E1 )) || Q_TNT_HDLC_TYPE_CARD ) */
#line 129 "mibsct.mdf"
#if ( (NETIF & ( T1 | E1 )) || Q_TNT_HDLC_TYPE_CARD )
    case SWITCHED_CLEAR_832:
#endif /* ( (NETIF & ( T1 | E1 )) || Q_TNT_HDLC_TYPE_CARD ) */
#line 132 "mibsct.mdf"
#if ( (NETIF & ( T1 | E1 )) || Q_TNT_HDLC_TYPE_CARD )
    case SWITCHED_CLEAR_896:
#endif /* ( (NETIF & ( T1 | E1 )) || Q_TNT_HDLC_TYPE_CARD ) */
#line 135 "mibsct.mdf"
#if ( (NETIF & ( T1 | E1 )) || Q_TNT_HDLC_TYPE_CARD )
    case SWITCHED_CLEAR_960:
#endif /* ( (NETIF & ( T1 | E1 )) || Q_TNT_HDLC_TYPE_CARD ) */
#line 138 "mibsct.mdf"
#if ( (NETIF & ( T1 | E1 )) || Q_TNT_HDLC_TYPE_CARD )
    case SWITCHED_CLEAR_1024:
#endif /* ( (NETIF & ( T1 | E1 )) || Q_TNT_HDLC_TYPE_CARD ) */
#line 141 "mibsct.mdf"
#if ( (NETIF & ( T1 | E1 )) || Q_TNT_HDLC_TYPE_CARD )
    case SWITCHED_CLEAR_1088:
#endif /* ( (NETIF & ( T1 | E1 )) || Q_TNT_HDLC_TYPE_CARD ) */
#line 144 "mibsct.mdf"
#if ( (NETIF & ( T1 | E1 )) || Q_TNT_HDLC_TYPE_CARD )
    case SWITCHED_CLEAR_1152:
#endif /* ( (NETIF & ( T1 | E1 )) || Q_TNT_HDLC_TYPE_CARD ) */
#line 147 "mibsct.mdf"
#if ( (NETIF & ( T1 | E1 )) || Q_TNT_HDLC_TYPE_CARD )
    case SWITCHED_CLEAR_1216:
#endif /* ( (NETIF & ( T1 | E1 )) || Q_TNT_HDLC_TYPE_CARD ) */
#line 150 "mibsct.mdf"
#if ( (NETIF & ( T1 | E1 )) || Q_TNT_HDLC_TYPE_CARD )
    case SWITCHED_CLEAR_1280:
#endif /* ( (NETIF & ( T1 | E1 )) || Q_TNT_HDLC_TYPE_CARD ) */
#line 153 "mibsct.mdf"
#if ( (NETIF & ( T1 | E1 )) || Q_TNT_HDLC_TYPE_CARD )
    case SWITCHED_CLEAR_1344:
#endif /* ( (NETIF & ( T1 | E1 )) || Q_TNT_HDLC_TYPE_CARD ) */
#line 156 "mibsct.mdf"
#if ( (NETIF & ( T1 | E1 )) || Q_TNT_HDLC_TYPE_CARD )
    case SWITCHED_CLEAR_1408:
#endif /* ( (NETIF & ( T1 | E1 )) || Q_TNT_HDLC_TYPE_CARD ) */
#line 159 "mibsct.mdf"
#if ( (NETIF & ( T1 | E1 )) || Q_TNT_HDLC_TYPE_CARD )
    case SWITCHED_CLEAR_1472:
#endif /* ( (NETIF & ( T1 | E1 )) || Q_TNT_HDLC_TYPE_CARD ) */
#line 162 "mibsct.mdf"
#if ( (NETIF & E1 ) || Q_TNT_HDLC_TYPE_CARD )
    case SWITCHED_CLEAR_1600:
#endif /* ( (NETIF & E1 ) || Q_TNT_HDLC_TYPE_CARD ) */
#line 165 "mibsct.mdf"
#if ( (NETIF & E1 ) || Q_TNT_HDLC_TYPE_CARD )
    case SWITCHED_CLEAR_1664:
#endif /* ( (NETIF & E1 ) || Q_TNT_HDLC_TYPE_CARD ) */
#line 168 "mibsct.mdf"
#if ( (NETIF & E1 ) || Q_TNT_HDLC_TYPE_CARD )
    case SWITCHED_CLEAR_1728:
#endif /* ( (NETIF & E1 ) || Q_TNT_HDLC_TYPE_CARD ) */
#line 171 "mibsct.mdf"
#if ( (NETIF & E1 ) || Q_TNT_HDLC_TYPE_CARD )
    case SWITCHED_CLEAR_1792:
#endif /* ( (NETIF & E1 ) || Q_TNT_HDLC_TYPE_CARD ) */
#line 174 "mibsct.mdf"
#if ( (NETIF & E1 ) || Q_TNT_HDLC_TYPE_CARD )
    case SWITCHED_CLEAR_1856:
#endif /* ( (NETIF & E1 ) || Q_TNT_HDLC_TYPE_CARD ) */
#line 177 "mibsct.mdf"
#if ( (NETIF & E1 ) || Q_TNT_HDLC_TYPE_CARD )
    case SWITCHED_CLEAR_1920:
#endif /* ( (NETIF & E1 ) || Q_TNT_HDLC_TYPE_CARD ) */
#line 180 "mibsct.mdf"
    case SWITCHED_INHERITED:
#line 185 "mibsct.mdf"
#if ( MDF_DPNSS_SIGNALING == FYES )
    case SWITCHED_RESTRICTED_BEARER_X30:
#endif /* ( MDF_DPNSS_SIGNALING == FYES ) */
#line 188 "mibsct.mdf"
#if ( MDF_DPNSS_SIGNALING == FYES )
    case SWITCHED_CLEAR_BEARER_V110:
#endif /* ( MDF_DPNSS_SIGNALING == FYES ) */
#line 191 "mibsct.mdf"
#if ( MDF_DPNSS_SIGNALING == FYES )
    case SWITCHED_RESTRICTED_64_X30:
#endif /* ( MDF_DPNSS_SIGNALING == FYES ) */
#line 194 "mibsct.mdf"
#if ( MDF_DPNSS_SIGNALING == FYES )
    case SWITCHED_CLEAR_56_V110:
#endif /* ( MDF_DPNSS_SIGNALING == FYES ) */
#line 197 "mibsct.mdf"
#if ( MDF_LMODEM_DIALOUT == FYES )
    case SWITCHED_MODEM:
#endif /* ( MDF_LMODEM_DIALOUT == FYES ) */
#line 202 "mibsct.mdf"
#if ( PLATFORM & ( M200 ))
    case SWITCHED_ATMODEM:
#endif /* ( PLATFORM & ( M200 )) */
#line 205 "mibsct.mdf"
#if ( V110_PPP_OUTDIAL == FYES )
    case SWITCHED_V110_24_56:
#endif /* ( V110_PPP_OUTDIAL == FYES ) */
#line 210 "mibsct.mdf"
#if ( V110_PPP_OUTDIAL == FYES )
    case SWITCHED_V110_48_56:
#endif /* ( V110_PPP_OUTDIAL == FYES ) */
#line 215 "mibsct.mdf"
#if ( V110_PPP_OUTDIAL == FYES )
    case SWITCHED_V110_96_56:
#endif /* ( V110_PPP_OUTDIAL == FYES ) */
#line 220 "mibsct.mdf"
#if ( V110_PPP_OUTDIAL == FYES )
    case SWITCHED_V110_192_56:
#endif /* ( V110_PPP_OUTDIAL == FYES ) */
#line 225 "mibsct.mdf"
#if ( V110_PPP_OUTDIAL == FYES )
    case SWITCHED_V110_384_56:
#endif /* ( V110_PPP_OUTDIAL == FYES ) */
#line 230 "mibsct.mdf"
#if ( V110_PPP_OUTDIAL == FYES )
    case SWITCHED_V110_24_56R:
#endif /* ( V110_PPP_OUTDIAL == FYES ) */
#line 235 "mibsct.mdf"
#if ( V110_PPP_OUTDIAL == FYES )
    case SWITCHED_V110_48_56R:
#endif /* ( V110_PPP_OUTDIAL == FYES ) */
#line 240 "mibsct.mdf"
#if ( V110_PPP_OUTDIAL == FYES )
    case SWITCHED_V110_96_56R:
#endif /* ( V110_PPP_OUTDIAL == FYES ) */
#line 245 "mibsct.mdf"
#if ( V110_PPP_OUTDIAL == FYES )
    case SWITCHED_V110_192_56R:
#endif /* ( V110_PPP_OUTDIAL == FYES ) */
#line 250 "mibsct.mdf"
#if ( V110_PPP_OUTDIAL == FYES )
    case SWITCHED_V110_384_56R:
#endif /* ( V110_PPP_OUTDIAL == FYES ) */
#line 255 "mibsct.mdf"
#if ( V110_PPP_OUTDIAL == FYES )
    case SWITCHED_V110_24_64:
#endif /* ( V110_PPP_OUTDIAL == FYES ) */
#line 260 "mibsct.mdf"
#if ( V110_PPP_OUTDIAL == FYES )
    case SWITCHED_V110_48_64:
#endif /* ( V110_PPP_OUTDIAL == FYES ) */
#line 265 "mibsct.mdf"
#if ( V110_PPP_OUTDIAL == FYES )
    case SWITCHED_V110_96_64:
#endif /* ( V110_PPP_OUTDIAL == FYES ) */
#line 270 "mibsct.mdf"
#if ( V110_PPP_OUTDIAL == FYES )
    case SWITCHED_V110_192_64:
#endif /* ( V110_PPP_OUTDIAL == FYES ) */
#line 275 "mibsct.mdf"
#if ( V110_PPP_OUTDIAL == FYES )
    case SWITCHED_V110_384_64:
#endif /* ( V110_PPP_OUTDIAL == FYES ) */
#line 280 "mibsct.mdf"
#if ( V110_PPP_OUTDIAL == FYES )
    case SWITCHED_V110_24_64R:
#endif /* ( V110_PPP_OUTDIAL == FYES ) */
#line 285 "mibsct.mdf"
#if ( V110_PPP_OUTDIAL == FYES )
    case SWITCHED_V110_48_64R:
#endif /* ( V110_PPP_OUTDIAL == FYES ) */
#line 290 "mibsct.mdf"
#if ( V110_PPP_OUTDIAL == FYES )
    case SWITCHED_V110_96_64R:
#endif /* ( V110_PPP_OUTDIAL == FYES ) */
#line 295 "mibsct.mdf"
#if ( V110_PPP_OUTDIAL == FYES )
    case SWITCHED_V110_192_64R:
#endif /* ( V110_PPP_OUTDIAL == FYES ) */
#line 300 "mibsct.mdf"
#if ( V110_PPP_OUTDIAL == FYES )
    case SWITCHED_V110_384_64R:
#endif /* ( V110_PPP_OUTDIAL == FYES ) */
#line 305 "mibsct.mdf"
#if ( MDF_V32_PHS == FYES )
    case SWITCHED_V32:
#endif /* ( MDF_V32_PHS == FYES ) */
#line 309 "mibsct.mdf"
#if (( MDF_V32_PHS == FYES ) && ( MDF_V64_PHS == FYES ))
    case SWITCHED_PHS_64:
#endif /* (( MDF_V32_PHS == FYES ) && ( MDF_V64_PHS == FYES )) */
#line 313 "mibsct.mdf"
#if ( MDF_NET_2_NET_PBX == FYES )
    case SWITCHED_PBX_DSL_0:
#endif /* ( MDF_NET_2_NET_PBX == FYES ) */
#line 321 "mibsct.mdf"
    case SWITCHED_NUMBER_OF_SERVICES:
        return TRUE;
    default:
        return FALSE;
    }
}
#line 342 "mibsct.mdf"

#endif /* MIBSCT_H */
