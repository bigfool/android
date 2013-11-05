/* Copyright (c) 2009, 2013, Oracle and/or its affiliates. All rights reserved.
 
 This program is free software; you can redistribute it and/or modify
 it under the terms of the GNU General Public License as published by
 the Free Software Foundation; version 2 of the License.
 
 This program is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details.
 
 You should have received a copy of the GNU General Public License
 along with this program; if not, write to the Free Software
 Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA */

#ifndef MY_CONFIG_H
#define MY_CONFIG_H
#define DOT_FRM_VERSION 6
/* Headers we may want to use. */
#define _GNU_SOURCE 1
#define HAVE_ALLOCA_H 1
#define HAVE_ARPA_INET_H 1
/* #undef HAVE_ASM_MSR_H */
#define HAVE_ASM_TERMBITS_H 1
/* #undef HAVE_CRYPT_H */
/* #undef HAVE_CURSES_H */
#define HAVE_CXXABI_H 1
/* #undef HAVE_NCURSES_H */
/* #undef HAVE_NDIR_H */
#define HAVE_DIRENT_H 1
#define HAVE_DLFCN_H 1
/* #undef HAVE_EXECINFO_H */
#define HAVE_FCNTL_H 1
#define HAVE_FENV_H 1
#define HAVE_FNMATCH_H 1
/* #undef HAVE_FPU_CONTROL_H */
#define HAVE_GRP_H 1
/* #undef HAVE_IEEEFP_H */
#define HAVE_INTTYPES_H 1
#define HAVE_MALLOC_H 1
#define HAVE_NETINET_IN_H 1
#define HAVE_PATHS_H 1
#define HAVE_POLL_H 1
#define HAVE_PWD_H 1
#define HAVE_SCHED_H 1
/* #undef HAVE_SELECT_H */
/* #undef HAVE_SOLARIS_LARGE_PAGES */
#define HAVE_STDLIB_H 1
#define HAVE_STDARG_H 1
#define HAVE_STRINGS_H 1
#define HAVE_STDINT_H 1
/* #undef HAVE_SYNCH_H */
/* #undef HAVE_SYSENT_H */
/* #undef HAVE_SYS_DIR_H */
#define HAVE_SYS_CDEFS_H 1
/* #undef HAVE_SYS_FPU_H */
#define HAVE_SYS_IOCTL_H 1
#define HAVE_SYS_IPC_H 1
/* #undef HAVE_SYS_MALLOC_H */
#define HAVE_SYS_MMAN_H 1
/* #undef HAVE_SYS_NDIR_H */
/* #undef HAVE_SYS_PRCTL_H */
#define HAVE_SYS_RESOURCE_H 1
#define HAVE_SYS_SELECT_H 1
/* #undef HAVE_SYS_SHM_H */
#define HAVE_SYS_SOCKET_H 1
#define HAVE_SYS_STAT_H 1
#define HAVE_SYS_TIMES_H 1
#define HAVE_SYS_TIME_H 1
#define HAVE_SYS_TYPES_H 1
#define HAVE_SYS_UN_H 1
/* #undef HAVE_SYS_VADVISE_H */
/* #undef HAVE_TERM_H */
/* #undef HAVE_TERMBITS_H */
#define HAVE_TERMIOS_H 1
#define HAVE_TERMIO_H 1
/* #undef HAVE_TERMCAP_H */
#define HAVE_UNISTD_H 1
#define HAVE_UTIME_H 1
/* #undef HAVE_VIS_H */
/* #undef HAVE_SYS_UTIME_H */
#define HAVE_SYS_WAIT_H 1
#define HAVE_SYS_PARAM_H 1

/* Libraries */
/* #undef HAVE_LIBPTHREAD */
#define HAVE_LIBM 1
/* #undef HAVE_LIBDL */
/* #undef HAVE_LIBRT */
/* #undef HAVE_LIBSOCKET */
/* #undef HAVE_LIBNSL */
/* #undef HAVE_LIBCRYPT */
/* #undef HAVE_LIBWRAP */

/* Readline */
/* #undef HAVE_HIST_ENTRY */
/* #undef USE_LIBEDIT_INTERFACE */

#define FIONREAD_IN_SYS_IOCTL 1
#define GWINSZ_IN_SYS_IOCTL 1
/* #undef FIONREAD_IN_SYS_FILIO */

/* Functions we may want to use. */
/* #undef HAVE_ALIGNED_MALLOC */
#define HAVE_ALARM 1
#define HAVE_INDEX 1
#define HAVE_CLOCK_GETTIME 1
/* #undef HAVE_CRYPT */
/* #undef HAVE_CUSERID */
/* #undef HAVE_DIRECTIO */
#define HAVE_DLERROR 1
#define HAVE_DLOPEN 1
#define HAVE_FCHMOD 1
#define HAVE_FCNTL 1
#define HAVE_FDATASYNC 1
#define HAVE_FESETROUND 1
#define HAVE_FINITE 1
/* #undef HAVE_FP_EXCEPT */
#define HAVE_FSEEKO 1
#define HAVE_FSYNC 1
#define HAVE_GETADDRINFO 1
/* #undef HAVE_GETHOSTBYADDR_R */
/* #undef HAVE_GETHRTIME */
#define HAVE_GETNAMEINFO 1
#define HAVE_GETPAGESIZE 1
/* #undef HAVE_GETPASS */
/* #undef HAVE_GETPASSPHRASE */
#define HAVE_GETPWNAM 1
#define HAVE_GETPWUID 1
#define HAVE_GETRLIMIT 1
#define HAVE_GETRUSAGE 1
#define HAVE_GETTIMEOFDAY 1
#define HAVE_INITGROUPS 1
#define HAVE_ISSETUGID 1
#define HAVE_GETUID 1
#define HAVE_GETEUID 1
#define HAVE_GETGID 1
#define HAVE_GETEGID 1
#define HAVE_ISINF 1
/* #undef HAVE_LARGE_PAGE_OPTION */
#define HAVE_LRAND48 1
/* #undef HAVE_LOG2 */
#define HAVE_LSTAT 1
#define HAVE_MEMALIGN 1
#define HAVE_MLOCK 1
/* #undef HAVE_NL_LANGINFO */
#define HAVE_MADVISE 1
#define HAVE_DECL_MADVISE 1
/* #undef HAVE_DECL_TGOTO */
/* #undef HAVE_DECL_MHA_MAPSIZE_VA */
/* #undef HAVE_MALLOC_INFO */
/* #undef HAVE_MLOCKALL */
#define HAVE_MMAP 1
/* #undef HAVE_MMAP64 */
#define HAVE_POLL 1
/* #undef HAVE_POSIX_FALLOCATE */
/* #undef HAVE_POSIX_MEMALIGN */
#define HAVE_PREAD 1
/* #undef HAVE_PAUSE_INSTRUCTION */
/* #undef HAVE_FAKE_PAUSE_INSTRUCTION */
/* #undef HAVE_RDTSCLL */
#define HAVE_PTHREAD_ATTR_GETGUARDSIZE 1
/* #undef HAVE_PTHREAD_CONDATTR_SETCLOCK */
/* #undef HAVE_PTHREAD_SETSCHEDPARAM */
#define HAVE_PTHREAD_SIGMASK 1
/* #undef HAVE_PTHREAD_YIELD_NP */
/* #undef HAVE_PTHREAD_YIELD_ZERO_ARG */
#define PTHREAD_ONCE_INITIALIZER PTHREAD_ONCE_INIT
#define HAVE_READDIR_R 1
#define HAVE_READLINK 1
#define HAVE_REALPATH 1
#define HAVE_RINT 1
#define HAVE_SCHED_YIELD 1
#define HAVE_SELECT 1
/* #undef HAVE_SETFD */
#define HAVE_SETENV 1
/* #undef HAVE_SIGSET */
#define HAVE_SIGACTION 1
#define HAVE_SLEEP 1
/* #undef HAVE_STPCPY */
#define HAVE_STRSIGNAL 1
#define HAVE_STRLCPY 1
#define HAVE_STRLCAT 1
#define HAVE_FGETLN 1
#define HAVE_STRNLEN 1
#define HAVE_STRSEP 1
#define HAVE_STRTOK_R 1
#define HAVE_STRTOLL 1
/* #undef HAVE_TELL */
/* #undef HAVE_THR_YIELD */
#define HAVE_TIMES 1
#define HAVE_VASPRINTF 1
#define HAVE_FTRUNCATE 1
/* Symbols we may use */
/* used by stacktrace functions */
#define HAVE_BSS_START 1
/* #undef HAVE_BACKTRACE */
/* #undef HAVE_BACKTRACE_SYMBOLS */
/* #undef HAVE_BACKTRACE_SYMBOLS_FD */
/* #undef HAVE_PRINTSTACK */
#define HAVE_STRUCT_SOCKADDR_IN6 1
#define HAVE_STRUCT_IN6_ADDR 1
#define HAVE_NETINET_IN6_H 1
#define HAVE_IPV6 1
/* #undef ss_family */
/* #undef HAVE_SOCKADDR_IN_SIN_LEN */
/* #undef HAVE_SOCKADDR_IN6_SIN6_LEN */

#define DNS_USE_CPU_CLOCK_FOR_ID 1
#define HAVE_EPOLL 1
/* #undef HAVE_EVENT_PORTS */
#define HAVE_INET_NTOP 1
/* #undef HAVE_WORKING_KQUEUE */
#define HAVE_TIMERADD 1
#define HAVE_TIMERCLEAR 1
#define HAVE_TIMERCMP 1
#define HAVE_TIMERISSET 1

/* #undef HAVE_DEVPOLL */
#define HAVE_SIGNAL_H 1
/* #undef HAVE_SYS_DEVPOLL_H */
#define HAVE_SYS_EPOLL_H 1
#define HAVE_TAILQFOREACH 1

/* #undef HAVE_VALGRIND */

#define SIZEOF_LONG   4
#define SIZEOF_VOIDP  4
#define SIZEOF_CHARP  4

#define SIZEOF_CHAR 1
#define HAVE_CHAR 1
#define HAVE_LONG 1
#define HAVE_CHARP 1
#define SIZEOF_SHORT 2
#define HAVE_SHORT 1
#define SIZEOF_INT 4
#define HAVE_INT 1
#define SIZEOF_LONG_LONG 8
#define HAVE_LONG_LONG 1
#define SIZEOF_OFF_T 4
#define HAVE_OFF_T 1
#define SIZEOF_SIGSET_T 4
#define SIZEOF_UINT 4
#define HAVE_UINT 1
/* #undef SIZEOF_ULONG */
/* #undef HAVE_ULONG */
#define SIZEOF_U_INT32_T 4
#define HAVE_U_INT32_T 1

#define SOCKET_SIZE_TYPE socklen_t

/* #undef HAVE_MBSTATE_T */

#define MAX_INDEXES 64U

#define QSORT_TYPE_IS_VOID 1
#define RETQSORTTYPE void

#define SIGNAL_RETURN_TYPE_IS_VOID 1
#define RETSIGTYPE void
#define VOID_SIGHANDLER 1
#define STRUCT_RLIMIT struct rlimit

/* #undef WORDS_BIGENDIAN */

/*
  Define to `__inline__' or `__inline' if that's what the C compiler calls it.
*/
#define C_HAS_inline 1
#if !(C_HAS_inline)
#ifndef __cplusplus
# define inline 
#endif
#endif


#define TARGET_OS_LINUX 1

/* #undef HAVE_LANGINFO_H */
/* #undef HAVE_WCSDUP */
/* #undef HAVE_WCHAR_T */
/* #undef HAVE_WINT_T */


#define HAVE_STRDUP 1
/* #undef HAVE_LANGINFO_CODESET */

#define HAVE_WEAK_SYMBOL 1
#define HAVE_ABI_CXA_DEMANGLE 1


#define HAVE_POSIX_SIGNALS 1
/* #undef HAVE_BSD_SIGNALS */
/* #undef HAVE_SVR3_SIGNALS */
/* #undef HAVE_V7_SIGNALS */


/* #undef HAVE_SOLARIS_STYLE_GETHOST */

/* #undef MY_ATOMIC_MODE_DUMMY */
/* #undef MY_ATOMIC_MODE_RWLOCKS */
#define HAVE_GCC_ATOMIC_BUILTINS 1
/* #undef HAVE_SOLARIS_ATOMIC */
/* #undef HAVE_DECL_SHM_HUGETLB */
/* #undef HAVE_LARGE_PAGES */
/* #undef HUGETLB_USE_PROC_MEMINFO */
/* #undef NO_FCNTL_NONBLOCK */

/* #undef _LARGE_FILES */
#define _LARGEFILE_SOURCE 1
/* #undef _LARGEFILE64_SOURCE */
#define _FILE_OFFSET_BITS 64

#define TIME_WITH_SYS_TIME 1

#define STACK_DIRECTION 1

#define SYSTEM_TYPE "Linux"
#define MACHINE_TYPE "armv7-a"
/* #undef HAVE_DTRACE */

/* Windows stuff, mostly functions, that have Posix analogs but named differently */
/* #undef S_IROTH */
/* #undef S_IFIFO */
/* #undef IPPROTO_IPV6 */
/* #undef IPV6_V6ONLY */
/* #undef sigset_t */
/* #undef mode_t */
/* #undef SIGQUIT */
/* #undef SIGPIPE */
/* #undef isnan */
/* #undef finite */
/* #undef popen */
/* #undef pclose */
/* #undef ssize_t */
/* #undef strcasecmp */
/* #undef strncasecmp */
/* #undef snprintf */
/* #undef strtok_r */
/* #undef strtoll */
/* #undef strtoull */
/* #undef vsnprintf */
#if (_MSC_VER > 1310)
# define HAVE_SETENV
#define setenv(a,b,c) _putenv_s(a,b)
#endif
/* We don't want the min/max macros */
#ifdef _WIN32
#define NOMINMAX
#endif

/*
   Memcached config options
*/
/* #undef WITH_INNODB_MEMCACHED */
/* #undef ENABLE_MEMCACHED_SASL */
/* #undef ENABLE_MEMCACHED_SASL_PWDB */
/* #undef HAVE_SASL_SASL_H */
/* #undef HAVE_HTONLL */

/*
  MySQL features
*/
#define ENABLED_LOCAL_INFILE 1
#define ENABLED_PROFILING 1
/* #undef EXTRA_DEBUG */
/* #undef BACKUP_TEST */
/* #undef CYBOZU */
/* #undef OPTIMIZER_TRACE */

/*
   InnoDB config options
*/
/* #undef INNODB_COMPILER_HINTS */

/* Character sets and collations */
#define MYSQL_DEFAULT_CHARSET_NAME "latin1"
#define MYSQL_DEFAULT_COLLATION_NAME "latin1_swedish_ci"

/* #undef USE_STRCOLL */

/* This should mean case insensitive file system */
/* #undef FN_NO_CASE_SENSE */

#define HAVE_CHARSET_armscii8 1
#define HAVE_CHARSET_ascii 1
#define HAVE_CHARSET_big5 1
#define HAVE_CHARSET_cp1250 1
#define HAVE_CHARSET_cp1251 1
#define HAVE_CHARSET_cp1256 1
#define HAVE_CHARSET_cp1257 1
#define HAVE_CHARSET_cp850 1
#define HAVE_CHARSET_cp852 1 
#define HAVE_CHARSET_cp866 1
#define HAVE_CHARSET_cp932 1
#define HAVE_CHARSET_dec8 1
#define HAVE_CHARSET_eucjpms 1
#define HAVE_CHARSET_euckr 1
#define HAVE_CHARSET_gb2312 1
#define HAVE_CHARSET_gbk 1
#define HAVE_CHARSET_geostd8 1
#define HAVE_CHARSET_greek 1
#define HAVE_CHARSET_hebrew 1
#define HAVE_CHARSET_hp8 1
#define HAVE_CHARSET_keybcs2 1
#define HAVE_CHARSET_koi8r 1
#define HAVE_CHARSET_koi8u 1
#define HAVE_CHARSET_latin1 1
#define HAVE_CHARSET_latin2 1
#define HAVE_CHARSET_latin5 1
#define HAVE_CHARSET_latin7 1
#define HAVE_CHARSET_macce 1
#define HAVE_CHARSET_macroman 1
#define HAVE_CHARSET_sjis 1
#define HAVE_CHARSET_swe7 1
#define HAVE_CHARSET_tis620 1
#define HAVE_CHARSET_ucs2 1
#define HAVE_CHARSET_ujis 1
#define HAVE_CHARSET_utf8mb4 1
/* #undef HAVE_CHARSET_utf8mb3 */
#define HAVE_CHARSET_utf8 1
#define HAVE_CHARSET_utf16 1
#define HAVE_CHARSET_utf32 1
#define HAVE_UCA_COLLATIONS 1
#define HAVE_COMPRESS 1
/* #undef COMPILE_FLAG_WERROR */

/*
  Important storage engines (those that really need define 
  WITH_<ENGINE>_STORAGE_ENGINE for the whole server)
*/
/* #undef WITH_MYISAM_STORAGE_ENGINE */
/* #undef WITH_HEAP_STORAGE_ENGINE */
#define WITH_PARTITION_STORAGE_ENGINE 1
/* #undef WITH_PERFSCHEMA_STORAGE_ENGINE */
/* #undef WITH_NDBCLUSTER_STORAGE_ENGINE */

#define DEFAULT_MYSQL_HOME "/media/data/documents/programs/dsploit/dSploit/jni/mysql/androidbuild/../install"
#define SHAREDIR "/media/data/documents/programs/dsploit/dSploit/jni/mysql/androidbuild/../install/share"
#define DEFAULT_BASEDIR "/media/data/documents/programs/dsploit/dSploit/jni/mysql/androidbuild/../install"
#define MYSQL_DATADIR "/media/data/documents/programs/dsploit/dSploit/jni/mysql/androidbuild/../install/data"
#define DEFAULT_CHARSET_HOME "/media/data/documents/programs/dsploit/dSploit/jni/mysql/androidbuild/../install"
#define PLUGINDIR "/media/data/documents/programs/dsploit/dSploit/jni/mysql/androidbuild/../install/lib/plugin"
#define DEFAULT_SYSCONFDIR "/media/data/documents/programs/dsploit/dSploit/jni/mysql/androidbuild/../install/etc"

/* #undef SO_EXT */

#define MYSQL_VERSION_MAJOR 6
#define MYSQL_VERSION_MINOR 1
#define MYSQL_VERSION_PATCH 2
#define MYSQL_VERSION_EXTRA ""

#define PACKAGE "mysql"
#define PACKAGE_BUGREPORT ""
#define PACKAGE_NAME "MySQL Server"
#define PACKAGE_STRING "MySQL Server 6.1.2"
#define PACKAGE_TARNAME "mysql"
#define PACKAGE_VERSION "6.1.2"
#define VERSION "6.1.2"
#define PROTOCOL_VERSION 10


/* time_t related defines */

#define SIZEOF_TIME_T 4
/* #undef TIME_T_UNSIGNED */

/* CPU information */

#define CPU_LEVEL1_DCACHE_LINESIZE 64

#endif
