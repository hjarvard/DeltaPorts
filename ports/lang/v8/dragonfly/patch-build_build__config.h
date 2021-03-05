--- build/build_config.h.orig	2020-11-16 13:30:50 UTC
+++ build/build_config.h
@@ -72,7 +72,7 @@
 #define OS_WIN 1
 #elif defined(__Fuchsia__)
 #define OS_FUCHSIA 1
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
 #define OS_FREEBSD 1
 #elif defined(__NetBSD__)
 #define OS_NETBSD 1
