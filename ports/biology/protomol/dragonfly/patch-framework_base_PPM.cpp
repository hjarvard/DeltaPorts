--- framework/base/PPM.cpp.orig	2005-05-07 17:40:23.000000000 +0300
+++ framework/base/PPM.cpp
@@ -1,5 +1,6 @@
 #include "PPM.h"
 #include "PGM.h"
+#include <cstddef> // C++11 NULL
 #include <vector> // NULL definition
 
 namespace ProtoMol {
