--- client/allocdir/fs_dragonfly.go.orig	2021-06-22 14:31:19 UTC
+++ client/allocdir/fs_dragonfly.go
@@ -0,0 +1,26 @@
+package allocdir
+
+import (
+	"os"
+	"syscall"
+)
+
+// linkDir hardlinks src to dst. The src and dst must be on the same filesystem.
+func linkDir(src, dst string) error {
+	return syscall.Link(src, dst)
+}
+
+// unlinkDir removes a directory link.
+func unlinkDir(dir string) error {
+	return syscall.Unlink(dir)
+}
+
+// createSecretDir creates the secrets dir folder at the given path
+func createSecretDir(dir string) error {
+	return os.MkdirAll(dir, 0777)
+}
+
+// removeSecretDir removes the secrets dir folder
+func removeSecretDir(dir string) error {
+	return os.RemoveAll(dir)
+}
