#define ENABLE_FRAG
#define ENABLE_NATT
#define ENABLE_NATT_00
#define ENABLE_NATT_02
#define ENABLE_NATT_RFC
#undef ENABLE_DPD

#define HAVE_OPENSSL_AES_H
#undef HAVE_OPENSSL_ENGINE_H
#define WITH_SHA2
#define HAVE_SHA2_IN_SHA_H

#define INET6
#define INET6_ADVAPI

#undef IPV6_RECVPKTINFO

#define PATH_IPSEC_H <netinet/ipsec.h>
#define HAVE_POLICY_FWD
#define HAVE_PFKEY_POLICY_PRIORITY

#define TIME_WITH_SYS_TIME 1
#define HAVE_SYS_TIME_H 1
#define HAVE_UNISTD_H

#define ANDROID_PATCHED

#define HAVE_STDARG_H
#define RETSIGTYPE void
#define strtouq strtoul
#define MAXNS 3

#define HAVE_CLOCK_MONOTONIC
