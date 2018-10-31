    /*
     * Notice: file generated by MIBMAKE from mibbrint.mdf
     * DO NOT EDIT THIS FILE!!!  Edit mibbrint.mdf
     */
#line 2 "mibbrint.mdf"
/*
 * $Id: mibbrint.h,v 1.1.1.1 2011/08/17 11:11:56 brwang Exp $
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

#line 24 "mibbrint.mdf"

#if ! defined( MIBBRINT_H )
#define MIBBRINT_H

    /* This file contains the internal representation of the brint profile
     * (MIB_PROF_NET_BRI_NT). The name of this profile is stored in the global
     * variable mibProfBriNt.
     */

extern const char* const		mibProfBriNt;

/*
 * The maximum length of an answer number (for BRI NT profiles) is:
 */
#define MAX_ANSWER_NUMBER	MAX_PHONE_NUMBER_LENGTH


    /*
     * BRIHostLine:
     *
     * For each BRI on an NT configured card, we keep track of the following:
     *
     *  lineEnabled Boolean that is TRUE if this interface is part of the set
     *                                  used for this network set, or FALSE
     *                                  otherwise.
     *
     *  dialPlan Whether we are using the trunk-group-only or extended-dial
     *                                  plan.
     *
     *  answerNumber1 Phone numbers to match when routing by incoming phone
     *                                  number.
     *
     *  answerNumber2 Phone numbers to match when routing by incoming phone
     *                                  number.
     */
typedef struct briHostLine {
#line 66 "mibbrint.mdf"
    Boolean                             lineEnabled;
#line 71 "mibbrint.mdf"
    int                                 dialPlan;
#line 75 "mibbrint.mdf"
    char                                answerNumber1[ MAX_ANSWER_NUMBER + 1 ];
#line 79 "mibbrint.mdf"
    char                                answerNumber2[ MAX_ANSWER_NUMBER + 1 ];
}
#if ( USERIF & CLI )
__PACK__
#endif
BRIHostLine;

    /*
     * BRIHostProfile:
     *
     * For a BRI NT interface profile, the following information is kept:
     *
     *  profileNumber If it is a stored profile, the number of the profile
     *                                  (1..MAX_NETWORK_PROFILES). If it is the
     *                                  current profile, the number of the
     *                                  stored profile from which it was
     *                                  loaded, or zero if it has never been
     *                                  loaded.
     *
     *  name The null terminated ascii string that the user gave to this
     *                                  particular profile.
     *
     *  lineInterface Description of each interface that is used for this
     *                                  profile set.
     *
     *  switchType Switch type to be emulated.
     */
typedef struct briHostProfile {
#line 119 "mibbrint.mdf"
    Word                                profileNumber;
#line 126 "mibbrint.mdf"
    char                                name[ MAX_NET_PROFILE_NAME + 1 ];
#line 131 "mibbrint.mdf"
    BRIHostLine                         lineInterface[ BRI_MAX_DSL_PER_SLOT ];
#line 135 "mibbrint.mdf"
#if ( IDSL_NI1 == FYES )
    NetworkSwitchType                   switchType;
#endif /* ( IDSL_NI1 == FYES ) */
}
#if ( USERIF & CLI )
__PACK__
#endif
BRIHostProfile;
#line 163 "mibbrint.mdf"

#endif /* MIBBRINT_H */
