# Makefile for miscelaneous programs
# Copyright (C) 2002  Michael Richardson	<mcr@freeswan.org>
# 
# This program is free software; you can redistribute it and/or modify it
# under the terms of the GNU General Public License as published by the
# Free Software Foundation; either version 2 of the License, or (at your
# option) any later version.  See <http://www.fsf.org/copyleft/gpl.txt>.
# 
# This program is distributed in the hope that it will be useful, but
# WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
# or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
# for more details.
#
# RCSID $Id: Makefile,v 1.1 2012/09/27 21:09:32 yu.dehai Exp $

OPENSWANSRCDIR?=$(shell cd ../..; pwd)
include ${OPENSWANSRCDIR}/Makefile.inc

PROGRAM=ranbits
LIBS=${OPENSWANLIB}

include ${srcdir}../Makefile.program

#
# $Log: Makefile,v $
# Revision 1.1  2012/09/27 21:09:32  yu.dehai
# support openswan-2.6.30 commit
#
# Revision 1.5  2004/12/18 18:13:42  mcr
# 	adjusted Makefiles so that ${OBJDIR} builds work.
#
# Revision 1.4  2004/04/12 12:05:52  ken
# Use OPENSWANLIBs
#
# Revision 1.3  2004/04/03 19:44:47  ken
# FREESWANSRCDIR -> OPENSWANSRCDIR (patch by folken)
#
# Revision 1.2  2002/06/02 21:51:41  mcr
# 	changed TOPDIR->FREESWANSRCDIR in all Makefiles.
# 	(note that linux/net/ipsec/Makefile uses TOPDIR because this is the
# 	kernel sense.)
#
# Revision 1.1  2002/04/24 07:55:32  mcr
# 	#include ${srcdir}..tches and Makefiles for post-reorg compilation.
#
#
#

