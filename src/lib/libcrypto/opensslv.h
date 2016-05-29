/* $OpenBSD: opensslv.h,v 1.30.4.6 2016/05/29 20:39:14 bcook Exp $ */
#ifndef HEADER_OPENSSLV_H
#define HEADER_OPENSSLV_H

/* These will change with each release of LibreSSL-portable */
#define LIBRESSL_VERSION_NUMBER	0x20020008L
#define LIBRESSL_VERSION_TEXT	"LibreSSL 2.2.8"

/* These will never change */
#define OPENSSL_VERSION_NUMBER	0x20000000L
#define OPENSSL_VERSION_TEXT	LIBRESSL_VERSION_TEXT
#define OPENSSL_VERSION_PTEXT	" part of " OPENSSL_VERSION_TEXT

#define SHLIB_VERSION_HISTORY ""
#define SHLIB_VERSION_NUMBER "1.0.0"

#endif /* HEADER_OPENSSLV_H */
