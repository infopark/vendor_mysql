/* config.h.  Generated by configure.  */
/* config.h.in.  Generated from configure.in by autoheader.  */

/* Support big tables */
/* #undef BIG_TABLES */

/* Define to one of `_getb67', `GETB67', `getb67' for Cray-2 and Cray-YMP
   systems. This function is required for `alloca.c' support on those systems.
   */
/* #undef CRAY_STACKSEG_END */

/* Define to 1 if using `alloca.c'. */
/* #undef C_ALLOCA */

/* default to skip thread priority */
/* #undef DEFAULT_SKIP_THREAD_PRIORITY */

/* all charsets are available */
/* #undef DEFINE_ALL_CHARACTER_SETS */

/* Disables the use of --init-file, --skip-grant-tables and --bootstrap
   options */
/* #undef DISABLE_GRANT_OPTIONS */

/* Version of .frm files */
#define DOT_FRM_VERSION 6

/* If LOAD DATA LOCAL INFILE should be enabled by default */
/* #undef ENABLED_LOCAL_INFILE */

/* Do we have FIONREAD */
/* #undef FIONREAD_IN_SYS_IOCTL */

/* READLINE: your system defines TIOCGWINSZ in sys/ioctl.h. */
/* #undef GWINSZ_IN_SYS_IOCTL */

/* Define to 1 if you have the `alarm' function. */
#define HAVE_ALARM 1

/* Define to 1 if you have `alloca', as a function or macro. */
#define HAVE_ALLOCA 1

/* Define to 1 if you have <alloca.h> and it should be used (not on Ultrix).
   */
#define HAVE_ALLOCA_H 1

/* Builds Archive Storage Engine */
/* #undef HAVE_ARCHIVE_DB */

/* Define to 1 if you have the <arpa/inet.h> header file. */
#define HAVE_ARPA_INET_H 1

/* Define to 1 if you have the <asm/termbits.h> header file. */
/* #undef HAVE_ASM_TERMBITS_H */

/* atomic_add() from <asm/atomic.h> (Linux only) */
/* #undef HAVE_ATOMIC_ADD */

/* atomic_sub() from <asm/atomic.h> (Linux only) */
/* #undef HAVE_ATOMIC_SUB */

/* Define to 1 if you have the `bcmp' function. */
#define HAVE_BCMP 1

/* Have berkeley db installed */
/* #undef HAVE_BERKELEY_DB */

/* Define to 1 if you have the `bfill' function. */
/* #undef HAVE_BFILL */

/* Builds Blackhole Storage Engine */
/* #undef HAVE_BLACKHOLE_DB */

/* Define to 1 if you have the `bmove' function. */
/* #undef HAVE_BMOVE */

/* bool is not defined by all C++ compilators */
#define HAVE_BOOL 1

/* Can netinet be included */
/* #undef HAVE_BROKEN_NETINET_INCLUDES */

/* BSD style signals */
/* #undef HAVE_BSD_SIGNALS */

/* Define to 1 if you have the `bzero' function. */
#define HAVE_BZERO 1

/* Define to enable charset armscii8 */
/* #undef HAVE_CHARSET_armscii8 */

/* Define to enable ascii character set */
/* #undef HAVE_CHARSET_ascii */

/* Define to enable charset big5 */
/* #undef HAVE_CHARSET_big5 */

/* Define to enable cp1250 */
/* #undef HAVE_CHARSET_cp1250 */

/* Define to enable charset cp1251 */
/* #undef HAVE_CHARSET_cp1251 */

/* Define to enable charset cp1256 */
/* #undef HAVE_CHARSET_cp1256 */

/* Define to enable charset cp1257 */
/* #undef HAVE_CHARSET_cp1257 */

/* Define to enable charset cp850 */
/* #undef HAVE_CHARSET_cp850 */

/* Define to enable charset cp852 */
/* #undef HAVE_CHARSET_cp852 */

/* Define to enable charset cp866 */
/* #undef HAVE_CHARSET_cp866 */

/* Define to enable charset cp932 */
/* #undef HAVE_CHARSET_cp932 */

/* Define to enable charset dec8 */
/* #undef HAVE_CHARSET_dec8 */

/* Define to enable charset eucjpms */
/* #undef HAVE_CHARSET_eucjpms */

/* Define to enable charset euckr */
/* #undef HAVE_CHARSET_euckr */

/* Define to enable charset gb2312 */
/* #undef HAVE_CHARSET_gb2312 */

/* Define to enable charset gbk */
/* #undef HAVE_CHARSET_gbk */

/* Define to enable charset geostd8 */
/* #undef HAVE_CHARSET_geostd8 */

/* Define to enable charset greek */
/* #undef HAVE_CHARSET_greek */

/* Define to enable charset hebrew */
/* #undef HAVE_CHARSET_hebrew */

/* Define to enable charset hp8 */
/* #undef HAVE_CHARSET_hp8 */

/* Define to enable charset keybcs2 */
/* #undef HAVE_CHARSET_keybcs2 */

/* Define to enable charset koi8r */
/* #undef HAVE_CHARSET_koi8r */

/* Define to enable charset koi8u */
/* #undef HAVE_CHARSET_koi8u */

/* Define to enable charset latin1 */
#define HAVE_CHARSET_latin1 1

/* Define to enable charset latin2 */
/* #undef HAVE_CHARSET_latin2 */

/* Define to enable charset latin5 */
/* #undef HAVE_CHARSET_latin5 */

/* Define to enable charset latin7 */
/* #undef HAVE_CHARSET_latin7 */

/* Define to enable charset macce */
/* #undef HAVE_CHARSET_macce */

/* Define to enable charset macroman */
/* #undef HAVE_CHARSET_macroman */

/* Define to enable charset sjis */
/* #undef HAVE_CHARSET_sjis */

/* Define to enable charset swe7 */
/* #undef HAVE_CHARSET_swe7 */

/* Define to enable charset tis620 */
/* #undef HAVE_CHARSET_tis620 */

/* Define to enable charset ucs2 */
/* #undef HAVE_CHARSET_ucs2 */

/* Define to enable charset ujis */
/* #undef HAVE_CHARSET_ujis */

/* Define to enable ut8 */
#define HAVE_CHARSET_utf8 1

/* Define to 1 if you have the `chsize' function. */
/* #undef HAVE_CHSIZE */

/* Define to 1 if you have the `clock_gettime' function. */
#define HAVE_CLOCK_GETTIME 1

/* Define to enable compression support */
#define HAVE_COMPRESS 1

/* crypt */
#define HAVE_CRYPT 1

/* Define to 1 if you have the <crypt.h> header file. */
#define HAVE_CRYPT_H 1

/* Builds the CSV Storage Engine */
/* #undef HAVE_CSV_DB */

/* Define to 1 if you have the <curses.h> header file. */
#define HAVE_CURSES_H 1

/* Define to 1 if you have the `cuserid' function. */
#define HAVE_CUSERID 1

/* Define to 1 if you have the declaration of `madvise', and to 0 if you
   don't. */
#define HAVE_DECL_MADVISE 0

/* Define to 1 if you have the declaration of `SHM_HUGETLB', and to 0 if you
   don't. */
/* #undef HAVE_DECL_SHM_HUGETLB */

/* Whether we are using DEC threads */
/* #undef HAVE_DEC_THREADS */

/* Define to 1 if you have the <dirent.h> header file. */
#define HAVE_DIRENT_H 1

/* Define to 1 if you have the `dlerror' function. */
#define HAVE_DLERROR 1

/* Define to 1 if you have the <dlfcn.h> header file. */
#define HAVE_DLFCN_H 1

/* Define to 1 if you have the `dlopen' function. */
#define HAVE_DLOPEN 1

/* Define to 1 if you don't have `vprintf' but do have `_doprnt.' */
#define HAVE_DOPRNT 1

/* Access checks in embedded library */
/* #undef HAVE_EMBEDDED_PRIVILEGE_CONTROL */

/* Builds Example DB */
/* #undef HAVE_EXAMPLE_DB */

/* Defined by configure. Use explicit template instantiation. */
#define HAVE_EXPLICIT_TEMPLATE_INSTANTIATION 1

/* Define to 1 if you have the `fchmod' function. */
#define HAVE_FCHMOD 1

/* Define to 1 if you have the `fcntl' function. */
#define HAVE_FCNTL 1

/* Define to 1 if you have the <fcntl.h> header file. */
#define HAVE_FCNTL_H 1

/* Define to 1 if you have the `fconvert' function. */
#define HAVE_FCONVERT 1

/* Define to 1 if you have the `fdatasync' function. */
#define HAVE_FDATASYNC 1

/* Define to enable Federated Handler */
/* #undef HAVE_FEDERATED_DB */

/* Define to 1 if you have the `fgetln' function. */
/* #undef HAVE_FGETLN */

/* Define to 1 if you have the `finite' function. */
#define HAVE_FINITE 1

/* Define to 1 if you have the <floatingpoint.h> header file. */
#define HAVE_FLOATINGPOINT_H 1

/* Define to 1 if you have the <float.h> header file. */
#define HAVE_FLOAT_H 1

/* Define to 1 if you have the `flockfile' function. */
#define HAVE_FLOCKFILE 1

/* Define to 1 if you have the `fpresetsticky' function. */
/* #undef HAVE_FPRESETSTICKY */

/* Define to 1 if you have the `fpsetmask' function. */
#define HAVE_FPSETMASK 1

/* fp_except from ieeefp.h */
#define HAVE_FP_EXCEPT 1

/* Define to 1 if you have the `fsync' function. */
#define HAVE_FSYNC 1

/* Define to 1 if you have the `ftruncate' function. */
#define HAVE_FTRUNCATE 1

/* Define to 1 if you have the `getcwd' function. */
#define HAVE_GETCWD 1

/* Define to 1 if you have the `gethostbyaddr_r' function. */
#define HAVE_GETHOSTBYADDR_R 1

/* Define to 1 if you have the `gethostbyname_r' function. */
#define HAVE_GETHOSTBYNAME_R 1

/* Solaris define gethostbyname_r with 5 arguments. glibc2 defines this with 6
   arguments */
/* #undef HAVE_GETHOSTBYNAME_R_GLIBC2_STYLE */

/* In OSF 4.0f the 3'd argument to gethostname_r is hostent_data * */
/* #undef HAVE_GETHOSTBYNAME_R_RETURN_INT */

/* Define to 1 if you have the `getline' function. */
/* #undef HAVE_GETLINE */

/* Define to 1 if you have the `getpagesize' function. */
#define HAVE_GETPAGESIZE 1

/* Define to 1 if you have the `getpass' function. */
#define HAVE_GETPASS 1

/* Define to 1 if you have the `getpassphrase' function. */
#define HAVE_GETPASSPHRASE 1

/* Define to 1 if you have the `getpwnam' function. */
#define HAVE_GETPWNAM 1

/* Define to 1 if you have the `getpwuid' function. */
#define HAVE_GETPWUID 1

/* getpwent() declaration present */
/* #undef HAVE_GETPW_DECLS */

/* Define to 1 if you have the `getrlimit' function. */
#define HAVE_GETRLIMIT 1

/* Define to 1 if you have the `getrusage' function. */
#define HAVE_GETRUSAGE 1

/* Define to 1 if you have the `getwd' function. */
#define HAVE_GETWD 1

/* Define to 1 if you have the `gmtime_r' function. */
#define HAVE_GMTIME_R 1

/* Define to 1 if you have the <grp.h> header file. */
#define HAVE_GRP_H 1

/* HIST_ENTRY is defined in the outer libeditreadline */
#define HAVE_HIST_ENTRY 1

/* Define to 1 if you have the <ieeefp.h> header file. */
#define HAVE_IEEEFP_H 1

/* Define to 1 if you have the `index' function. */
#define HAVE_INDEX 1

/* Define to 1 if you have the `initgroups' function. */
#define HAVE_INITGROUPS 1

/* Using Innobase DB */
#define HAVE_INNOBASE_DB 1

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* whether int8, int16 and int32 types exist */
/* #undef HAVE_INT_8_16_32 */

/* system headers define in_addr_t */
#define HAVE_IN_ADDR_T 1

/* isinf() macro or function */
/* #undef HAVE_ISINF */

/* Define to 1 if you have the `isnan' function. */
#define HAVE_ISNAN 1

/* Define to 1 if you have the `issetugid' function. */
#define HAVE_ISSETUGID 1

/* Define if mysql_cv_langinfo_codeset=yes */
#define HAVE_LANGINFO_CODESET 

/* Define to 1 if you have the <langinfo.h> header file. */
#define HAVE_LANGINFO_H 1

/* Define if you have large pages support */
/* #undef HAVE_LARGE_PAGES */

/* Define to 1 if you have the `bind' library (-lbind). */
/* #undef HAVE_LIBBIND */

/* Define to 1 if you have the `compat' library (-lcompat). */
/* #undef HAVE_LIBCOMPAT */

/* Define to 1 if you have the `c_r' library (-lc_r). */
/* #undef HAVE_LIBC_R */

/* Define to 1 if you have the `dl' library (-ldl). */
#define HAVE_LIBDL 1

/* Define to 1 if you have the `gen' library (-lgen). */
#define HAVE_LIBGEN 1

/* Define to 1 if you have the `m' library (-lm). */
#define HAVE_LIBM 1

/* Define to 1 if you have the `nsl' library (-lnsl). */
#define HAVE_LIBNSL 1

/* Define to 1 if you have the `nsl_r' library (-lnsl_r). */
/* #undef HAVE_LIBNSL_R */

/* Define to 1 if you have the `posix4' library (-lposix4). */
#define HAVE_LIBPOSIX4 1

/* Define to 1 if you have the `pthread' library (-lpthread). */
#define HAVE_LIBPTHREAD 1

/* Define to 1 if you have the `socket' library (-lsocket). */
#define HAVE_LIBSOCKET 1

/* Define if have -lwrap */
/* #undef HAVE_LIBWRAP */

/* Define to 1 if you have the <limits.h> header file. */
#define HAVE_LIMITS_H 1

/* Whether we are using Xavier Leroy's LinuxThreads */
/* #undef HAVE_LINUXTHREADS */

/* Define to 1 if you have the <linux/config.h> header file. */
/* #undef HAVE_LINUX_CONFIG_H */

/* Define to 1 if you have the <locale.h> header file. */
#define HAVE_LOCALE_H 1

/* Define to 1 if you have the `localtime_r' function. */
#define HAVE_LOCALTIME_R 1

/* Define to 1 if you have the `locking' function. */
/* #undef HAVE_LOCKING */

/* Define to 1 if you have the `longjmp' function. */
#define HAVE_LONGJMP 1

/* Define to 1 if you have the `lrand48' function. */
#define HAVE_LRAND48 1

/* Define to 1 if you have the `lstat' function. */
#define HAVE_LSTAT 1

/* Define to 1 if you have the `madvise' function. */
#define HAVE_MADVISE 1

/* Define to 1 if you have the `mallinfo' function. */
/* #undef HAVE_MALLINFO */

/* Define to 1 if you have the <malloc.h> header file. */
#define HAVE_MALLOC_H 1

/* Define if you have mbrlen */
#define HAVE_MBRLEN 

/* Define if you have mbrtowc */
#define HAVE_MBRTOWC 

/* Define if you have mbsrtowcs */
#define HAVE_MBSRTOWCS 

/* Define if mysql_cv_have_mbstate_t=yes */
#define HAVE_MBSTATE_T 

/* Define to 1 if you have the `memcpy' function. */
#define HAVE_MEMCPY 1

/* Define to 1 if you have the `memmove' function. */
#define HAVE_MEMMOVE 1

/* Define to 1 if you have the <memory.h> header file. */
#define HAVE_MEMORY_H 1

/* Define to 1 if you have the `mkstemp' function. */
#define HAVE_MKSTEMP 1

/* Define to 1 if you have the `mlockall' function. */
#define HAVE_MLOCKALL 1

/* Define to 1 if you have the `mmap' function. */
#define HAVE_MMAP 1

/* Using Ndb Cluster DB */
/* #undef HAVE_NDBCLUSTER_DB */

/* Define to 1 if you have the <ndir.h> header file. */
/* #undef HAVE_NDIR_H */

/* Define to 1 if you have the <netinet/in.h> header file. */
#define HAVE_NETINET_IN_H 1

/* For some non posix threads */
/* #undef HAVE_NONPOSIX_PTHREAD_GETSPECIFIC */

/* For some non posix threads */
/* #undef HAVE_NONPOSIX_PTHREAD_MUTEX_INIT */

/* sigwait with one argument */
/* #undef HAVE_NONPOSIX_SIGWAIT */

/* NPTL threads implementation */
/* #undef HAVE_NPTL */

/* Define to 1 if the system has the type `off_t'. */
#define HAVE_OFF_T 1

/* Defined by configure. Using yaSSL for OpenSSL emulation. */
/* #undef HAVE_OPENSSL */

/* Define to 1 if you have the <paths.h> header file. */
/* #undef HAVE_PATHS_H */

/* Define to 1 if you have the `perror' function. */
#define HAVE_PERROR 1

/* Define to 1 if you have the `poll' function. */
#define HAVE_POLL 1

/* Signal handling is POSIX (sigset/sighold, etc) */
#define HAVE_POSIX_SIGNALS 1

/* Define to 1 if you have the `pread' function. */
#define HAVE_PREAD 1

/* Define to 1 if you have the `pthread_attr_create' function. */
/* #undef HAVE_PTHREAD_ATTR_CREATE */

/* Define to 1 if you have the `pthread_attr_getstacksize' function. */
#define HAVE_PTHREAD_ATTR_GETSTACKSIZE 1

/* Define to 1 if you have the `pthread_attr_setprio' function. */
/* #undef HAVE_PTHREAD_ATTR_SETPRIO */

/* Define to 1 if you have the `pthread_attr_setschedparam' function. */
#define HAVE_PTHREAD_ATTR_SETSCHEDPARAM 1

/* pthread_attr_setscope */
#define HAVE_PTHREAD_ATTR_SETSCOPE 1

/* Define to 1 if you have the `pthread_attr_setstacksize' function. */
#define HAVE_PTHREAD_ATTR_SETSTACKSIZE 1

/* Define to 1 if you have the `pthread_condattr_create' function. */
/* #undef HAVE_PTHREAD_CONDATTR_CREATE */

/* Define to 1 if you have the `pthread_getsequence_np' function. */
/* #undef HAVE_PTHREAD_GETSEQUENCE_NP */

/* Define to 1 if you have the `pthread_init' function. */
/* #undef HAVE_PTHREAD_INIT */

/* Define to 1 if you have the `pthread_key_delete' function. */
#define HAVE_PTHREAD_KEY_DELETE 1

/* Define to 1 if you have the `pthread_rwlock_rdlock' function. */
#define HAVE_PTHREAD_RWLOCK_RDLOCK 1

/* Define to 1 if you have the `pthread_setprio' function. */
/* #undef HAVE_PTHREAD_SETPRIO */

/* Define to 1 if you have the `pthread_setprio_np' function. */
/* #undef HAVE_PTHREAD_SETPRIO_NP */

/* Define to 1 if you have the `pthread_setschedparam' function. */
#define HAVE_PTHREAD_SETSCHEDPARAM 1

/* Define to 1 if you have the `pthread_sigmask' function. */
#define HAVE_PTHREAD_SIGMASK 1

/* pthread_yield function with one argument */
/* #undef HAVE_PTHREAD_YIELD_ONE_ARG */

/* pthread_yield that doesn't take any arguments */
/* #undef HAVE_PTHREAD_YIELD_ZERO_ARG */

/* Define to 1 if you have the `putenv' function. */
#define HAVE_PUTENV 1

/* Define to 1 if you have the <pwd.h> header file. */
#define HAVE_PWD_H 1

/* If we want to have query cache */
#define HAVE_QUERY_CACHE 1

/* POSIX readdir_r */
#define HAVE_READDIR_R 1

/* Define to 1 if you have the `readlink' function. */
#define HAVE_READLINK 1

/* Define to 1 if you have the `realpath' function. */
#define HAVE_REALPATH 1

/* Define to 1 if you have the `regcomp' function. */
#define HAVE_REGCOMP 1

/* Define to 1 if you have the `rename' function. */
#define HAVE_RENAME 1

/* Define to 1 if system calls automatically restart after interruption by a
   signal. */
/* #undef HAVE_RESTARTABLE_SYSCALLS */

/* Define to 1 if you have the `re_comp' function. */
#define HAVE_RE_COMP 1

/* Define to 1 if you have the `rint' function. */
#define HAVE_RINT 1

/* RTree keys */
#define HAVE_RTREE_KEYS 1

/* Define to 1 if you have the `rwlock_init' function. */
#define HAVE_RWLOCK_INIT 1

/* Define to 1 if you have the <sched.h> header file. */
#define HAVE_SCHED_H 1

/* Define to 1 if you have the `select' function. */
#define HAVE_SELECT 1

/* Define to 1 if you have the <select.h> header file. */
/* #undef HAVE_SELECT_H */

/* Define to 1 if you have the <semaphore.h> header file. */
#define HAVE_SEMAPHORE_H 1

/* Define to 1 if you have the `setenv' function. */
/* #undef HAVE_SETENV */

/* Define to 1 if you have the `setlocale' function. */
#define HAVE_SETLOCALE 1

/* Define to 1 if you have the `setupterm' function. */
/* #undef HAVE_SETUPTERM */

/* Define to 1 if you have the `shmat' function. */
#define HAVE_SHMAT 1

/* Define to 1 if you have the `shmctl' function. */
#define HAVE_SHMCTL 1

/* Define to 1 if you have the `shmdt' function. */
#define HAVE_SHMDT 1

/* Define to 1 if you have the `shmget' function. */
#define HAVE_SHMGET 1

/* Define to 1 if you have the `sigaction' function. */
#define HAVE_SIGACTION 1

/* Define to 1 if you have the `sigaddset' function. */
#define HAVE_SIGADDSET 1

/* Define to 1 if you have the `sigemptyset' function. */
#define HAVE_SIGEMPTYSET 1

/* Define to 1 if you have the `sighold' function. */
#define HAVE_SIGHOLD 1

/* Define to 1 if you have the `sigset' function. */
#define HAVE_SIGSET 1

/* Define to 1 if the system has the type `sigset_t'. */
/* #undef HAVE_SIGSET_T */

/* Define to 1 if you have the `sigthreadmask' function. */
/* #undef HAVE_SIGTHREADMASK */

/* POSIX sigwait */
#define HAVE_SIGWAIT 1

/* Define to 1 if the system has the type `size_t'. */
#define HAVE_SIZE_T 1

/* Define to 1 if you have the `snprintf' function. */
#define HAVE_SNPRINTF 1

/* Define to 1 if you have the `socket' function. */
#define HAVE_SOCKET 1

/* Solaris define gethostbyaddr_r with 7 arguments. glibc2 defines this with 8
   arguments */
#define HAVE_SOLARIS_STYLE_GETHOST 1

/* Spatial extentions */
#define HAVE_SPATIAL 1

/* Define to 1 if you have the <stdarg.h> header file. */
#define HAVE_STDARG_H 1

/* Define to 1 if you have the <stddef.h> header file. */
#define HAVE_STDDEF_H 1

/* Define to 1 if you have the <stdint.h> header file. */
/* #undef HAVE_STDINT_H */

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the `stpcpy' function. */
/* #undef HAVE_STPCPY */

/* Define to 1 if you have the `strcasecmp' function. */
#define HAVE_STRCASECMP 1

/* Define to 1 if you have the `strcoll' function. */
#define HAVE_STRCOLL 1

/* Define to 1 if you have the `strdup' function. */
#define HAVE_STRDUP 1

/* Define to 1 if you have the `strerror' function. */
#define HAVE_STRERROR 1

/* Define to 1 if you have the <strings.h> header file. */
#define HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define to 1 if you have the `strlcat' function. */
#define HAVE_STRLCAT 1

/* Define to 1 if you have the `strlcpy' function. */
#define HAVE_STRLCPY 1

/* Define to 1 if you have the `strnlen' function. */
/* #undef HAVE_STRNLEN */

/* Define to 1 if you have the `strpbrk' function. */
#define HAVE_STRPBRK 1

/* Define to 1 if you have the `strsignal' function. */
#define HAVE_STRSIGNAL 1

/* Define to 1 if you have the `strstr' function. */
#define HAVE_STRSTR 1

/* Define to 1 if you have the `strtok_r' function. */
#define HAVE_STRTOK_R 1

/* Define to 1 if you have the `strtol' function. */
#define HAVE_STRTOL 1

/* Define to 1 if you have the `strtoll' function. */
#define HAVE_STRTOLL 1

/* Define to 1 if you have the `strtoul' function. */
#define HAVE_STRTOUL 1

/* Define to 1 if you have the `strtoull' function. */
#define HAVE_STRTOULL 1

/* Define to 1 if `st_rdev' is member of `struct stat'. */
#define HAVE_STRUCT_STAT_ST_RDEV 1

/* Define to 1 if your `struct stat' has `st_rdev'. Deprecated, use
   `HAVE_STRUCT_STAT_ST_RDEV' instead. */
#define HAVE_ST_RDEV 1

/* Define to 1 if you have the <synch.h> header file. */
#define HAVE_SYNCH_H 1

/* Define to 1 if you have the <sys/cdefs.h> header file. */
/* #undef HAVE_SYS_CDEFS_H */

/* Define to 1 if you have the <sys/dir.h> header file. */
/* #undef HAVE_SYS_DIR_H */

/* Define to 1 if you have the <sys/file.h> header file. */
#define HAVE_SYS_FILE_H 1

/* Define to 1 if you have the <sys/ioctl.h> header file. */
#define HAVE_SYS_IOCTL_H 1

/* Define to 1 if you have the <sys/ipc.h> header file. */
#define HAVE_SYS_IPC_H 1

/* Define to 1 if you have the <sys/malloc.h> header file. */
/* #undef HAVE_SYS_MALLOC_H */

/* Define to 1 if you have the <sys/mman.h> header file. */
#define HAVE_SYS_MMAN_H 1

/* Define to 1 if you have the <sys/ndir.h> header file. */
/* #undef HAVE_SYS_NDIR_H */

/* Define to 1 if you have the <sys/param.h> header file. */
#define HAVE_SYS_PARAM_H 1

/* Define to 1 if you have the <sys/ptem.h> header file. */
#define HAVE_SYS_PTEM_H 1

/* Define to 1 if you have the <sys/pte.h> header file. */
/* #undef HAVE_SYS_PTE_H */

/* Define to 1 if you have the <sys/resource.h> header file. */
#define HAVE_SYS_RESOURCE_H 1

/* Define to 1 if you have the <sys/select.h> header file. */
#define HAVE_SYS_SELECT_H 1

/* Define to 1 if you have the <sys/shm.h> header file. */
#define HAVE_SYS_SHM_H 1

/* Define to 1 if you have the <sys/socket.h> header file. */
#define HAVE_SYS_SOCKET_H 1

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/stream.h> header file. */
#define HAVE_SYS_STREAM_H 1

/* Define to 1 if you have the <sys/timeb.h> header file. */
#define HAVE_SYS_TIMEB_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define to 1 if you have the <sys/un.h> header file. */
#define HAVE_SYS_UN_H 1

/* Define to 1 if you have the <sys/utime.h> header file. */
#define HAVE_SYS_UTIME_H 1

/* Define to 1 if you have the <sys/vadvise.h> header file. */
/* #undef HAVE_SYS_VADVISE_H */

/* Define to 1 if you have the <sys/wait.h> header file. */
#define HAVE_SYS_WAIT_H 1

/* Define to 1 if you have the `tcgetattr' function. */
#define HAVE_TCGETATTR 1

/* Define to 1 if you have the `tell' function. */
#define HAVE_TELL 1

/* Define to 1 if you have the `tempnam' function. */
#define HAVE_TEMPNAM 1

/* Define to 1 if you have the <termbits.h> header file. */
/* #undef HAVE_TERMBITS_H */

/* Define to 1 if you have the <termcap.h> header file. */
/* #undef HAVE_TERMCAP_H */

/* Define to 1 if you have the <termios.h> header file. */
#define HAVE_TERMIOS_H 1

/* Define to 1 if you have the <termio.h> header file. */
#define HAVE_TERMIO_H 1

/* Define to 1 if you have the <term.h> header file. */
#define HAVE_TERM_H 1

/* Define to 1 if you have the `thr_setconcurrency' function. */
#define HAVE_THR_SETCONCURRENCY 1

/* Timespec has a ts_sec instead of tv_sev */
/* #undef HAVE_TIMESPEC_TS_SEC */

/* Have the tzname variable */
#define HAVE_TZNAME 1

/* national Unicode collations */
#define HAVE_UCA_COLLATIONS 1

/* system headers define uchar */
/* #undef HAVE_UCHAR */

/* system headers define uint */
#define HAVE_UINT 1

/* system headers define ulong */
#define HAVE_ULONG 1

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* Have UnixWare 7 (or similar) almost-POSIX threading library */
/* #undef HAVE_UNIXWARE7_THREADS */

/* sighold() is present and usable */
/* #undef HAVE_USG_SIGHOLD */

/* certain Japanese customer */
/* #undef HAVE_UTF8_GENERAL_CS */

/* Define to 1 if you have the <utime.h> header file. */
#define HAVE_UTIME_H 1

/* Define to 1 if `utime(file, NULL)' sets file's timestamp to the present. */
#define HAVE_UTIME_NULL 1

/* Define to 1 if the system has the type `u_int32_t'. */
/* #undef HAVE_U_INT32_T */

/* Define to 1 if you have the <varargs.h> header file. */
/* #undef HAVE_VARARGS_H */

/* Define to 1 if you have the `vidattr' function. */
/* #undef HAVE_VIDATTR */

/* Define to enable buffered read. This works only if syscalls read/recv
   return as soon as there is some data in the kernel buffer, no matter how
   big the given buffer is. */
#define HAVE_VIO_READ_BUFF 1

/* Found vis.h and the strvis() function */
/* #undef HAVE_VIS_H */

/* Define to 1 if you have the `vprintf' function. */
#define HAVE_VPRINTF 1

/* Define to 1 if you have the <wchar.h> header file. */
#define HAVE_WCHAR_H 1

/* Define if you check wcsdup */
/* #undef HAVE_WCSDUP */

/* Define if you have wctomb */
#define HAVE_WCTOMB 

/* Define to 1 if you have the <wctype.h> header file. */
#define HAVE_WCTYPE_H 1

/* Define if you have wcwidth */
#define HAVE_WCWIDTH 

/* Defined by configure. Using yaSSL for OpenSSL emulation. */
/* #undef HAVE_YASSL */

/* Define if /proc/meminfo shows the huge page size (Linux only) */
/* #undef HUGETLB_USE_PROC_MEMINFO */

/* Define if you have -lwrap */
/* #undef LIBWRAP */

/* Machine type name, eg sun10 */
#define MACHINE_TYPE "sparc"

/* Maximum number of indexes per table */
#define MAX_INDEXES 64

/* Define the default charset name */
#define MYSQL_DEFAULT_CHARSET_NAME "latin1"

/* Define the default charset name */
#define MYSQL_DEFAULT_COLLATION_NAME "latin1_swedish_ci"

/* Including Ndb Cluster DB sci transporter */
/* #undef NDB_SCI_TRANSPORTER */

/* Including Ndb Cluster DB shared memory transporter */
/* #undef NDB_SHM_TRANSPORTER */

/* NDB build version */
#define NDB_VERSION_BUILD 42

/* NDB major version */
#define NDB_VERSION_MAJOR 5

/* NDB minor version */
#define NDB_VERSION_MINOR 0

/* NDB status version */
#define NDB_VERSION_STATUS ""

/* Name of package */
#define PACKAGE "mysql"

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT ""

/* Define to the full name of this package. */
#define PACKAGE_NAME ""

/* Define to the full name and version of this package. */
#define PACKAGE_STRING ""

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME ""

/* Define to the version of this package. */
#define PACKAGE_VERSION ""

/* mysql client protocol version */
#define PROTOCOL_VERSION 10

/* qsort returns void */
#define QSORT_TYPE_IS_VOID 1

/* The return type of qsort (int or void). */
#define RETQSORTTYPE void

/* Define as the return type of signal handlers (`int' or `void'). */
#define RETSIGTYPE void

/* The size of a `char', as computed by sizeof. */
#define SIZEOF_CHAR 1

/* The size of a `char*', as computed by sizeof. */
#define SIZEOF_CHARP 4

/* The size of a `int', as computed by sizeof. */
#define SIZEOF_INT 4

/* The size of a `long', as computed by sizeof. */
#define SIZEOF_LONG 4

/* The size of a `long long', as computed by sizeof. */
#define SIZEOF_LONG_LONG 8

/* */
#define SIZEOF_OFF_T 8

/* The size of a `short', as computed by sizeof. */
#define SIZEOF_SHORT 2

/* The base type of the last arg to accept */
#define SOCKET_SIZE_TYPE socklen_t

/* Last argument to get/setsockopt */
/* #undef SOCKOPT_OPTLEN_TYPE */

/* Broken sprintf */
/* #undef SPRINTF_RETURNS_GARBAGE */

/* POSIX sprintf */
#define SPRINTF_RETURNS_INT 1

/* Broken sprintf */
/* #undef SPRINTF_RETURNS_PTR */

/* If using the C implementation of alloca, define if you know the
   direction of stack growth for your system; otherwise it will be
   automatically deduced at run-time.
	STACK_DIRECTION > 0 => grows toward higher addresses
	STACK_DIRECTION < 0 => grows toward lower addresses
	STACK_DIRECTION = 0 => direction of growth unknown */
#define STACK_DIRECTION -1

/* Define to 1 if the `S_IS*' macros in <sys/stat.h> do not work properly. */
/* #undef STAT_MACROS_BROKEN */

/* Define to 1 if you have the ANSI C header files. */
#define STDC_HEADERS 1

/* d_ino member present in struct dirent */
#define STRUCT_DIRENT_HAS_D_INO 1

/* d_namlen member present in struct dirent */
/* #undef STRUCT_DIRENT_HAS_D_NAMLEN */

/* The struct rlimit type to use with setrlimit */
#define STRUCT_RLIMIT struct rlimit

/* Name of system, eg solaris */
#define SYSTEM_TYPE "sun-solaris2.9"

/* Whether we build for Linux */
/* #undef TARGET_OS_LINUX */

/* Define if you want to have threaded code. This may be undef on client code
   */
#define THREAD 1

/* Should be client be thread safe */
/* #undef THREAD_SAFE_CLIENT */

/* Define to 1 if time_t is unsigned */
/* #undef TIME_T_UNSIGNED */

/* Define to 1 if you can safely include both <sys/time.h> and <time.h>. */
#define TIME_WITH_SYS_TIME 1

/* declaration of TIOCSTAT in sys/ioctl.h */
/* #undef TIOCSTAT_IN_SYS_IOCTL */

/* Define to 1 if your <sys/time.h> declares `struct tm'. */
/* #undef TM_IN_SYS_TIME */

/* used libedit interface (can we dereference result of
   rl_completion_entry_function) */
#define USE_LIBEDIT_INTERFACE 1

/* Use multi-byte character routines */
#define USE_MB 1

/* */
#define USE_MB_IDENT 1

/* Needs to use mysys_new helpers */
/* #undef USE_MYSYS_NEW */

/* used new readline interface (are rl_completion_func_t and
   rl_compentry_func_t defined) */
/* #undef USE_NEW_READLINE_INTERFACE */

/* the pstack backtrace library */
/* #undef USE_PSTACK */

/* Version number of package */
#define VERSION "5.0.42"

/* sighandler type is void (*signal ()) (); */
#define VOID_SIGHANDLER 1

/* Define to 1 if your processor stores words with the most significant byte
   first (like Motorola and SPARC, unlike Intel and VAX). */
#define WORDS_BIGENDIAN 1

/* Number of bits in a file offset, on hosts where this is settable. */
/* #undef _FILE_OFFSET_BITS */

/* makes fseeko etc. visible, on some hosts. */
#define _LARGEFILE_SOURCE 1

/* Large files support on AIX-style hosts. */
/* #undef _LARGE_FILES */

/* Define to empty if `const' does not conform to ANSI C. */
/* #undef const */

/* Define to `__inline__' or `__inline' if that's what the C compiler
   calls it, or to nothing if 'inline' is not supported under any name.  */
#ifndef __cplusplus
/* #undef inline */
#endif

/* Define to `long' if <sys/types.h> does not define. */
/* #undef off_t */

/* Define to `unsigned' if <sys/types.h> does not define. */
/* #undef size_t */
