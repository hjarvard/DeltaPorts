--- third_party/vulkan_memory_allocator/include/vk_mem_alloc.h.orig	2024-01-26 19:29:38 UTC
+++ third_party/vulkan_memory_allocator/include/vk_mem_alloc.h
@@ -2760,7 +2760,7 @@ void* vma_aligned_alloc(size_t alignment
 
     return memalign(alignment, size);
 }
-#elif defined(__APPLE__) || defined(__ANDROID__) || (defined(__linux__) && defined(__GLIBCXX__) && !defined(_GLIBCXX_HAVE_ALIGNED_ALLOC)) || defined(__OpenBSD__) || defined(__FreeBSD__)
+#elif defined(__APPLE__) || defined(__ANDROID__) || (defined(__linux__) && defined(__GLIBCXX__) && !defined(_GLIBCXX_HAVE_ALIGNED_ALLOC)) || defined(__OpenBSD__) || defined(__FreeBSD__) || defined(__DragonFly__)
 #include <cstdlib>
 
 #if defined(__APPLE__)
