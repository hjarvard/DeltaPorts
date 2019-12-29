--- src/modules/tls/tls_bio.c.intermediate	2019-12-29 09:07:47.000000000 +0000
+++ src/modules/tls/tls_bio.c
@@ -62,6 +62,16 @@ static int tls_bio_mbuf_read(BIO* b, cha
 static int tls_bio_mbuf_puts(BIO* b, const char* s);
 static long tls_bio_mbuf_ctrl(BIO* b, int cmd, long arg1, void* arg2);
 
+#if defined(LIBRESSL_VERSION_NUMBER) && LIBRESSL_VERSION_NUMBER >= 0x2070000fL
+static void *CRYPTO_zalloc(size_t num, const char *file, int line)
+{
+	void *ret = CRYPTO_malloc(num, file, line);
+	if (ret != NULL)
+		memset(ret, 0, num);
+	return ret;
+}
+# define OPENSSL_zalloc(num) CRYPTO_zalloc(num, __FILE__, __LINE__)
+#endif
 
 #if OPENSSL_VERSION_NUMBER < 0x010100000L || ( defined(LIBRESSL_VERSION_NUMBER) && LIBRESSL_VERSION_NUMBER < 0x2070000fL )
 static BIO_METHOD tls_mbuf_method = {
