#!/bin/sh

TEST_TYPE=klipstest
TESTNAME=east-trap-01
TESTHOST=east
EXITONEMPTY=--exitonempty

THREEEIGHT=true

PRIV_INPUT=../inputs/01-sunrise-sunset-ping.pcap
REF_PUB_OUTPUT=spi1-output.txt
REF_CONSOLE_OUTPUT=spi1-console.txt
REF26_CONSOLE_OUTPUT=spi1-console.txt
REF_CONSOLE_FIXUPS="kern-list-fixups.sed nocr.sed"
REF_CONSOLE_FIXUPS="$REF_CONSOLE_FIXUPS script-only.sed"
REF_CONSOLE_FIXUPS="$REF_CONSOLE_FIXUPS klips-spi-sanitize.sed"
REF_CONSOLE_FIXUPS="$REF_CONSOLE_FIXUPS klips-debug-sanitize.sed"
REF_CONSOLE_FIXUPS="$REF_CONSOLE_FIXUPS ipsec-look-sanitize.sed"
REF_CONSOLE_FIXUPS="$REF_CONSOLE_FIXUPS pfkey-sanitize.sed"
REF_CONSOLE_FIXUPS="$REF_CONSOLE_FIXUPS east-prompt-splitline.pl"
TCPDUMPFLAGS="-n"
INIT_SCRIPT=spi1.sh
FINAL_SCRIPT=pfkeyhalt.sh



