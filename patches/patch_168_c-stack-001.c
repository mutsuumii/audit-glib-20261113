# Large stack allocation (potential stack overflow)
# CWE-770 | Severity: MEDIUM
# File: gio/glocalfileinfo.c line 1346

**Risk:** alloca() or large fixed VLA on stack. If size is attacker-controlled or too large, stack overflow corrupts adjacent frames.

**Fix:** Use heap allocation (malloc) for large or variable-sized buffers. Enforce a size cap before alloca().
