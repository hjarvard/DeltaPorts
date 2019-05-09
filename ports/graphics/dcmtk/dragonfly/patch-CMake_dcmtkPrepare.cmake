--- CMake/dcmtkPrepare.cmake.orig	2018-11-29 12:14:03 UTC
+++ CMake/dcmtkPrepare.cmake
@@ -367,7 +367,7 @@ else()   # ... for non-Windows systems
     set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -D_XOPEN_SOURCE_EXTENDED -D_XOPEN_SOURCE=500 -D_NETBSD_SOURCE -D_DEFAULT_SOURCE -D_BSD_COMPAT -D_OSF_SOURCE -D_POSIX_C_SOURCE=199506L")
     set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -D_XOPEN_SOURCE_EXTENDED -D_XOPEN_SOURCE=500 -D_NETBSD_SOURCE -D_DEFAULT_SOURCE -D_BSD_COMPAT -D_OSF_SOURCE -D_POSIX_C_SOURCE=199506L")
   # Solaris, FreeBSD and newer versions of OpenBSD fail with these flags
-  elseif(NOT CMAKE_SYSTEM_NAME MATCHES "SunOS" AND NOT CMAKE_SYSTEM_NAME MATCHES "FreeBSD" AND (NOT CMAKE_SYSTEM_NAME MATCHES "OpenBSD" OR CMAKE_SYSTEM_VERSION VERSION_LESS 4))
+  elseif(NOT CMAKE_SYSTEM_NAME MATCHES "SunOS" AND NOT CMAKE_SYSTEM_NAME MATCHES "FreeBSD" AND NOT CMAKE_SYSTEM_NAME MATCHES "DragonFly" AND (NOT CMAKE_SYSTEM_NAME MATCHES "OpenBSD" OR CMAKE_SYSTEM_VERSION VERSION_LESS 4))
     # Compiler flags for all other non-Windows systems
     set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -D_XOPEN_SOURCE_EXTENDED -D_XOPEN_SOURCE=500 -D_BSD_SOURCE -D_DEFAULT_SOURCE -D_BSD_COMPAT -D_OSF_SOURCE -D_POSIX_C_SOURCE=199506L")
     set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -D_XOPEN_SOURCE_EXTENDED -D_XOPEN_SOURCE=500 -D_BSD_SOURCE -D_DEFAULT_SOURCE -D_BSD_COMPAT -D_OSF_SOURCE -D_POSIX_C_SOURCE=199506L")
