--- src/calibre/utils/speedup.c.orig	2019-04-29 08:43:23 UTC
+++ src/calibre/utils/speedup.c
@@ -493,7 +493,7 @@ speedup_iso_8601(PyObject *self, PyObjec
 
 #ifndef _MSC_VER
 #include <pthread.h>
-#if defined(__FreeBSD__) || defined(__OpenBSD__)
+#if defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__DragonFly__)
 #define FREEBSD_SET_NAME
 #endif
 #if defined(__APPLE__)
