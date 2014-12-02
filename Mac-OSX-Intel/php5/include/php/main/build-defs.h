/*                                                                -*- C -*-
   +----------------------------------------------------------------------+
   | PHP Version 5                                                        |
   +----------------------------------------------------------------------+
   | Copyright (c) 1997-2007 The PHP Group                                |
   +----------------------------------------------------------------------+
   | This source file is subject to version 3.01 of the PHP license,      |
   | that is bundled with this package in the file LICENSE, and is        |
   | available through the world-wide-web at the following url:           |
   | http://www.php.net/license/3_01.txt                                  |
   | If you did not receive a copy of the PHP license and are unable to   |
   | obtain it through the world-wide-web, please send a note to          |
   | license@php.net so we can mail you a copy immediately.               |
   +----------------------------------------------------------------------+
   | Author: Stig Sæther Bakken <ssb@php.net>                             |
   +----------------------------------------------------------------------+
*/

/* $Id$ */

#define CONFIGURE_COMMAND " './configure'  '--prefix=/srv/php5' '--sysconfdir=/srv/php5/etc' '--with-config-file-path=/srv/php5/etc' '--with-config-file-scan-dir=/srv/php5/etc/php.d' '--without-pear' '--disable-rpath' '--enable-fpm' '--enable-mbstring' '--enable-zip' '--enable-exif' '--enable-sockets' '--enable-ftp' '--with-pcre-dir=/srv/library/pcre-8.35' '--with-zlib=/srv/library/zlib-1.2.8' '--with-mcrypt=/srv/library/libmcrypt-2.5.7' '--with-curl=/srv/library/curl-7.37.1' '--with-openssl=/srv/library/openssl-1.0.1i' '--with-gd' '--enable-gd-native-ttf' '--with-freetype-dir=/srv/library/freetype-2.5.3' '--with-jpeg-dir=/srv/library/jpeg-9a' '--with-png-dir=/srv/library/libpng-1.6.13' '--with-gettext=/srv/library/gettext-0.19.2' '--with-iconv=/srv/library/libiconv-1.14' '--with-mysql' '--with-mysqli' '--with-pdo-mysql'"
#define PHP_ADA_INCLUDE		""
#define PHP_ADA_LFLAGS		""
#define PHP_ADA_LIBS		""
#define PHP_APACHE_INCLUDE	""
#define PHP_APACHE_TARGET	""
#define PHP_FHTTPD_INCLUDE      ""
#define PHP_FHTTPD_LIB          ""
#define PHP_FHTTPD_TARGET       ""
#define PHP_CFLAGS		"$(CFLAGS_CLEAN) -prefer-non-pic -static"
#define PHP_DBASE_LIB		""
#define PHP_BUILD_DEBUG		""
#define PHP_GDBM_INCLUDE	""
#define PHP_IBASE_INCLUDE	""
#define PHP_IBASE_LFLAGS	""
#define PHP_IBASE_LIBS		""
#define PHP_IFX_INCLUDE		""
#define PHP_IFX_LFLAGS		""
#define PHP_IFX_LIBS		""
#define PHP_INSTALL_IT		""
#define PHP_IODBC_INCLUDE	""
#define PHP_IODBC_LFLAGS	""
#define PHP_IODBC_LIBS		""
#define PHP_MSQL_INCLUDE	""
#define PHP_MSQL_LFLAGS		""
#define PHP_MSQL_LIBS		""
#define PHP_MYSQL_INCLUDE	""
#define PHP_MYSQL_LIBS		""
#define PHP_MYSQL_TYPE		""
#define PHP_ODBC_INCLUDE	""
#define PHP_ODBC_LFLAGS		""
#define PHP_ODBC_LIBS		""
#define PHP_ODBC_TYPE		""
#define PHP_OCI8_SHARED_LIBADD 	""
#define PHP_OCI8_DIR			""
#define PHP_OCI8_ORACLE_VERSION		""
#define PHP_ORACLE_SHARED_LIBADD 	"@ORACLE_SHARED_LIBADD@"
#define PHP_ORACLE_DIR				"@ORACLE_DIR@"
#define PHP_ORACLE_VERSION			"@ORACLE_VERSION@"
#define PHP_PGSQL_INCLUDE	""
#define PHP_PGSQL_LFLAGS	""
#define PHP_PGSQL_LIBS		""
#define PHP_PROG_SENDMAIL	"/usr/sbin/sendmail"
#define PHP_SOLID_INCLUDE	""
#define PHP_SOLID_LIBS		""
#define PHP_EMPRESS_INCLUDE	""
#define PHP_EMPRESS_LIBS	""
#define PHP_SYBASE_INCLUDE	""
#define PHP_SYBASE_LFLAGS	""
#define PHP_SYBASE_LIBS		""
#define PHP_DBM_TYPE		""
#define PHP_DBM_LIB		""
#define PHP_LDAP_LFLAGS		""
#define PHP_LDAP_INCLUDE	""
#define PHP_LDAP_LIBS		""
#define PHP_BIRDSTEP_INCLUDE     ""
#define PHP_BIRDSTEP_LIBS        ""
#define PEAR_INSTALLDIR         ""
#define PHP_INCLUDE_PATH	".:"
#define PHP_EXTENSION_DIR       "/srv/php5/lib/php/extensions/no-debug-non-zts-20100525"
#define PHP_PREFIX              "/srv/php5"
#define PHP_BINDIR              "/srv/php5/bin"
#define PHP_SBINDIR             "/srv/php5/sbin"
#define PHP_MANDIR              "/srv/php5/php/man"
#define PHP_LIBDIR              "/srv/php5/lib/php"
#define PHP_DATADIR             "${prefix}/share"
#define PHP_SYSCONFDIR          "/srv/php5/etc"
#define PHP_LOCALSTATEDIR       "/srv/php5/var"
#define PHP_CONFIG_FILE_PATH    "/srv/php5/etc"
#define PHP_CONFIG_FILE_SCAN_DIR    "/srv/php5/etc/php.d"
#define PHP_SHLIB_SUFFIX        "so"
