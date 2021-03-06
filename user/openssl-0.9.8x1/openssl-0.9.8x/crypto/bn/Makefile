#
# OpenSSL/crypto/bn/Makefile
#

DIR=	bn
TOP=	../..
CC=	cc
CPP=    $(CC) -E
INCLUDES= -I.. -I$(TOP) -I../../include
CFLAG=-g
MAKEFILE=	Makefile
AR=		ar r

BN_ASM=		bn_asm.o
# or use
#BN_ASM=	bn86-elf.o

CFLAGS= $(INCLUDES) $(CFLAG)
ASFLAGS= $(INCLUDES) $(ASFLAG)
AFLAGS= $(ASFLAGS)

GENERAL=Makefile
TEST=bntest.c exptest.c
APPS=

LIB=$(TOP)/libcrypto.a
LIBSRC=	bn_add.c bn_div.c bn_exp.c bn_lib.c bn_ctx.c bn_mul.c bn_mod.c \
	bn_print.c bn_rand.c bn_shift.c bn_word.c bn_blind.c \
	bn_kron.c bn_sqrt.c bn_gcd.c bn_prime.c bn_err.c bn_sqr.c bn_asm.c \
	bn_recp.c bn_mont.c bn_mpi.c bn_exp2.c bn_gf2m.c bn_nist.c \
	bn_depr.c bn_x931p.c bn_const.c bn_opt.c

LIBOBJ=	bn_add.o bn_div.o bn_exp.o bn_lib.o bn_ctx.o bn_mul.o bn_mod.o \
	bn_print.o bn_rand.o bn_shift.o bn_word.o bn_blind.o \
	bn_kron.o bn_sqrt.o bn_gcd.o bn_prime.o bn_err.o bn_sqr.o $(BN_ASM) \
	bn_recp.o bn_mont.o bn_mpi.o bn_exp2.o bn_gf2m.o bn_nist.o \
	bn_depr.o bn_x931p.o bn_const.o bn_opt.o

SRC= $(LIBSRC)

EXHEADER= bn.h
HEADER=	bn_lcl.h bn_prime.h $(EXHEADER)

ALL=    $(GENERAL) $(SRC) $(HEADER)

top:
	(cd ../..; $(MAKE) DIRS=crypto SDIRS=$(DIR) sub_all)

all:	lib

bn_prime.h: bn_prime.pl
	$(PERL) bn_prime.pl >bn_prime.h

divtest: divtest.c ../../libcrypto.a
	cc -I../../include divtest.c -o divtest ../../libcrypto.a

bnbug: bnbug.c ../../libcrypto.a top
	cc -g -I../../include bnbug.c -o bnbug ../../libcrypto.a

lib:	$(LIBOBJ)
	$(ARX) $(LIB) $(LIBOBJ)
	$(RANLIB) $(LIB) || echo Never mind.
	@touch lib

# ELF
bn86-elf.s:	asm/bn-586.pl ../perlasm/x86asm.pl
	(cd asm; $(PERL) bn-586.pl elf $(CFLAGS) > ../$@)
co86-elf.s:	asm/co-586.pl ../perlasm/x86asm.pl
	(cd asm; $(PERL) co-586.pl elf $(CFLAGS) > ../$@)
mo86-elf.s:	asm/mo-586.pl ../perlasm/x86asm.pl
	(cd asm; $(PERL) mo-586.pl elf $(CFLAGS) > ../$@)
# COFF
bn86-cof.s: asm/bn-586.pl ../perlasm/x86asm.pl
	(cd asm; $(PERL) bn-586.pl coff $(CFLAGS) > ../$@)
co86-cof.s: asm/co-586.pl ../perlasm/x86asm.pl
	(cd asm; $(PERL) co-586.pl coff $(CFLAGS) > ../$@)
mo86-cof.s: asm/mo-586.pl ../perlasm/x86asm.pl
	(cd asm; $(PERL) mo-586.pl coff $(CFLAGS) > ../$@)
# a.out
bn86-out.s: asm/bn-586.pl ../perlasm/x86asm.pl
	(cd asm; $(PERL) bn-586.pl a.out $(CFLAGS) > ../$@)
co86-out.s: asm/co-586.pl ../perlasm/x86asm.pl
	(cd asm; $(PERL) co-586.pl a.out $(CFLAGS) > ../$@)
mo86-out.s: asm/mo-586.pl ../perlasm/x86asm.pl
	(cd asm; $(PERL) mo-586.pl a.out $(CFLAGS) > ../$@)

sparcv8.o:	asm/sparcv8.S
	$(CC) $(CFLAGS) -c asm/sparcv8.S
sparcv8plus.o:	asm/sparcv8plus.S
	$(CC) $(CFLAGS) -c asm/sparcv8plus.S

bn-mips3.o:	asm/mips3.s
	@if [ "$(CC)" = "gcc" ]; then \
		ABI=`expr "$(CFLAGS)" : ".*-mabi=\([n3264]*\)"` && \
		as -$$ABI -O -o $@ asm/mips3.s; \
	else	$(CC) -c $(CFLAGS) -o $@ asm/mips3.s; fi

x86_64-gcc.o:	asm/x86_64-gcc.c
	$(CC) $(CFLAGS) -c -o $@ asm/x86_64-gcc.c
x86_64-mont.s:	asm/x86_64-mont.pl
	$(PERL) asm/x86_64-mont.pl $@

bn-ia64.s:	asm/ia64.S
	$(CC) $(CFLAGS) -E asm/ia64.S > $@

# GNU assembler fails to compile PA-RISC2 modules, insist on calling
# vendor assembler...
pa-risc2W.o: asm/pa-risc2W.s
	/usr/ccs/bin/as -o pa-risc2W.o asm/pa-risc2W.s
pa-risc2.o: asm/pa-risc2.s
	/usr/ccs/bin/as -o pa-risc2.o asm/pa-risc2.s

# ppc - AIX, Linux, MacOS X...
linux_ppc32.s: asm/ppc.pl;	$(PERL) $< $@
linux_ppc64.s: asm/ppc.pl;	$(PERL) $< $@
aix_ppc32.s: asm/ppc.pl;	$(PERL) asm/ppc.pl $@
aix_ppc64.s: asm/ppc.pl;	$(PERL) asm/ppc.pl $@
osx_ppc32.s: asm/ppc.pl;	$(PERL) $< $@
osx_ppc64.s: asm/ppc.pl;	$(PERL) $< $@

files:
	$(PERL) $(TOP)/util/files.pl Makefile >> $(TOP)/MINFO

links:
	@$(PERL) $(TOP)/util/mklink.pl ../../include/openssl $(EXHEADER)
	@$(PERL) $(TOP)/util/mklink.pl ../../test $(TEST)
	@$(PERL) $(TOP)/util/mklink.pl ../../apps $(APPS)

install:
	@[ -n "$(INSTALLTOP)" ] # should be set by top Makefile...
	@headerlist="$(EXHEADER)"; for i in $$headerlist ; \
	do  \
	(cp $$i $(INSTALL_PREFIX)$(INSTALLTOP)/include/openssl/$$i; \
	chmod 644 $(INSTALL_PREFIX)$(INSTALLTOP)/include/openssl/$$i ); \
	done;

exptest:
	rm -f exptest
	gcc -I../../include -g2 -ggdb -o exptest exptest.c ../../libcrypto.a

div:
	rm -f a.out
	gcc -I.. -g div.c ../../libcrypto.a

tags:
	ctags $(SRC)

tests:

lint:
	lint -DLINT $(INCLUDES) $(SRC)>fluff

depend:
	@[ -n "$(MAKEDEPEND)" ] # should be set by upper Makefile...
	$(MAKEDEPEND) -- $(CFLAG) $(INCLUDES) $(DEPFLAG) -- $(PROGS) $(LIBSRC)

dclean:
	$(PERL) -pe 'if (/^# DO NOT DELETE THIS LINE/) {print; exit(0);}' $(MAKEFILE) >Makefile.new
	mv -f Makefile.new $(MAKEFILE)

clean:
	rm -f *.s *.o *.obj lib tags core .pure .nfs* *.old *.bak fluff

# DO NOT DELETE THIS LINE -- make depend depends on it.

bn_add.o: ../../include/openssl/e_os.h ../cryptlib.h bn_add.c bn_lcl.h
bn_asm.o: ../../include/openssl/e_os.h ../cryptlib.h bn_asm.c bn_lcl.h
bn_blind.o: ../../include/openssl/e_os.h ../cryptlib.h bn_blind.c bn_lcl.h
bn_const.o: bn.h bn_const.c
bn_ctx.o: ../../include/openssl/e_os.h ../cryptlib.h bn_ctx.c bn_lcl.h
bn_depr.o: ../../include/openssl/e_os.h ../cryptlib.h bn_depr.c bn_lcl.h
bn_div.o: ../../include/openssl/e_os.h ../cryptlib.h bn_div.c bn_lcl.h
bn_err.o: bn_err.c
bn_exp.o: ../../include/openssl/e_os.h ../cryptlib.h bn_exp.c bn_lcl.h
bn_exp2.o: ../../include/openssl/e_os.h ../cryptlib.h bn_exp2.c bn_lcl.h
bn_gcd.o: ../../include/openssl/e_os.h ../cryptlib.h bn_gcd.c bn_lcl.h
bn_gf2m.o: ../../include/openssl/e_os.h ../cryptlib.h bn_gf2m.c bn_lcl.h
bn_kron.o: ../../include/openssl/e_os.h ../cryptlib.h bn_kron.c bn_lcl.h
bn_lib.o: ../../include/openssl/e_os.h ../cryptlib.h bn_lcl.h bn_lib.c
bn_mod.o: ../../include/openssl/e_os.h ../cryptlib.h bn_lcl.h bn_mod.c
bn_mont.o: ../../include/openssl/e_os.h ../cryptlib.h bn_lcl.h bn_mont.c
bn_mpi.o: ../../include/openssl/e_os.h ../cryptlib.h bn_lcl.h bn_mpi.c
bn_mul.o: ../../include/openssl/e_os.h ../cryptlib.h bn_lcl.h bn_mul.c
bn_nist.o: ../../include/openssl/e_os.h ../cryptlib.h bn_lcl.h bn_nist.c
bn_opt.o: ../../include/openssl/e_os.h ../cryptlib.h bn_lcl.h bn_opt.c
bn_prime.o: ../../include/openssl/e_os.h ../cryptlib.h bn_lcl.h bn_prime.c
bn_prime.o: bn_prime.h
bn_print.o: ../../include/openssl/e_os.h ../cryptlib.h bn_lcl.h bn_print.c
bn_rand.o: ../../include/openssl/e_os.h ../cryptlib.h bn_lcl.h bn_rand.c
bn_recp.o: ../../include/openssl/e_os.h ../cryptlib.h bn_lcl.h bn_recp.c
bn_shift.o: ../../include/openssl/e_os.h ../cryptlib.h bn_lcl.h bn_shift.c
bn_sqr.o: ../../include/openssl/e_os.h ../cryptlib.h bn_lcl.h bn_sqr.c
bn_sqrt.o: ../../include/openssl/e_os.h ../cryptlib.h bn_lcl.h bn_sqrt.c
bn_word.o: ../../include/openssl/e_os.h ../cryptlib.h bn_lcl.h bn_word.c
bn_x931p.o: bn_x931p.c
