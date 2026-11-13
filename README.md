# Security audit: GNOME/glib

Date: 2026-11-13 | Auditor: [mutsuumii](https://github.com/mutsuumii)

## Summary

Found 401 issue(s): 3 critical, 397 high, 1 medium.

## Findings

### 1. [HIGH] Use-after-free pattern

**CWE-416** | `gio/tests/buffered-input-stream.c` line 50

Freed pointer not immediately set to NULL. Dangling pointer reuse corrupts heap and can lead to code execution.

```
g_free (buffer);
```

**Fix:** Set pointer to NULL immediately after free(). Enable AddressSanitizer in CI: -fsanitize=address.
---

### 2. [HIGH] Use-after-free pattern

**CWE-416** | `gio/tests/buffered-input-stream.c` line 56

Freed pointer not immediately set to NULL. Dangling pointer reuse corrupts heap and can lead to code execution.

```
g_free (buffer);
```

**Fix:** Set pointer to NULL immediately after free(). Enable AddressSanitizer in CI: -fsanitize=address.
---

### 3. [HIGH] Use-after-free pattern

**CWE-416** | `gio/tests/buffered-input-stream.c` line 61

Freed pointer not immediately set to NULL. Dangling pointer reuse corrupts heap and can lead to code execution.

```
g_free (buffer);
```

**Fix:** Set pointer to NULL immediately after free(). Enable AddressSanitizer in CI: -fsanitize=address.
---

### 4. [HIGH] Use-after-free pattern

**CWE-416** | `gio/tests/buffered-input-stream.c` line 66

Freed pointer not immediately set to NULL. Dangling pointer reuse corrupts heap and can lead to code execution.

```
g_free (buffer);
```

**Fix:** Set pointer to NULL immediately after free(). Enable AddressSanitizer in CI: -fsanitize=address.
---

### 5. [HIGH] Use-after-free pattern

**CWE-416** | `gio/tests/buffered-input-stream.c` line 71

Freed pointer not immediately set to NULL. Dangling pointer reuse corrupts heap and can lead to code execution.

```
g_free (buffer);
```

**Fix:** Set pointer to NULL immediately after free(). Enable AddressSanitizer in CI: -fsanitize=address.
---

### 6. [HIGH] Use-after-free pattern

**CWE-416** | `gio/tests/buffered-input-stream.c` line 168

Freed pointer not immediately set to NULL. Dangling pointer reuse corrupts heap and can lead to code execution.

```
g_error_free (error);
```

**Fix:** Set pointer to NULL immediately after free(). Enable AddressSanitizer in CI: -fsanitize=address.
---

### 7. [HIGH] Use-after-free pattern

**CWE-416** | `glib/deprecated/gcompletion.c` line 429

Freed pointer not immediately set to NULL. Dangling pointer reuse corrupts heap and can lead to code execution.

```
g_free (cmp);
```

**Fix:** Set pointer to NULL immediately after free(). Enable AddressSanitizer in CI: -fsanitize=address.
---

### 8. [HIGH] Use-after-free pattern

**CWE-416** | `glib/deprecated/gcompletion.c` line 493

Freed pointer not immediately set to NULL. Dangling pointer reuse corrupts heap and can lead to code execution.

```
g_free (longp);
```

**Fix:** Set pointer to NULL immediately after free(). Enable AddressSanitizer in CI: -fsanitize=address.
---

### 9. [HIGH] Use-after-free pattern

**CWE-416** | `glib/deprecated/gcompletion.c` line 498

Freed pointer not immediately set to NULL. Dangling pointer reuse corrupts heap and can lead to code execution.

```
g_completion_free (cmp);
```

**Fix:** Set pointer to NULL immediately after free(). Enable AddressSanitizer in CI: -fsanitize=address.
---

### 10. [HIGH] Use-after-free pattern

**CWE-416** | `glib/deprecated/gcompletion.c` line 499

Freed pointer not immediately set to NULL. Dangling pointer reuse corrupts heap and can lead to code execution.

```
g_list_free (list);
```

**Fix:** Set pointer to NULL immediately after free(). Enable AddressSanitizer in CI: -fsanitize=address.
---

### 11. [HIGH] Missing NULL check after allocation

**CWE-476** | `glib/deprecated/gcompletion.c` line 407

Return value of malloc/realloc not checked for NULL. On allocation failure the program dereferences NULL, causing a crash or exploitable condition.

```
cmp->prefix = g_strdup (prefix);
```

**Fix:** Always check: ptr = malloc(n); if (!ptr) { handle_error(); return; }
---

### 12. [HIGH] Missing NULL check after allocation

**CWE-476** | `glib/deprecated/gcompletion.c` line 482

Return value of malloc/realloc not checked for NULL. On allocation failure the program dereferences NULL, causing a crash or exploitable condition.

```
list->data = g_strdup (buf);
```

**Fix:** Always check: ptr = malloc(n); if (!ptr) { handle_error(); return; }
---

### 13. [HIGH] Use-after-free pattern

**CWE-416** | `gio/tests/gdbus-example-peer.c` line 110

Freed pointer not immediately set to NULL. Dangling pointer reuse corrupts heap and can lead to code execution.

```
g_free (response);
```

**Fix:** Set pointer to NULL immediately after free(). Enable AddressSanitizer in CI: -fsanitize=address.
---

### 14. [HIGH] Use-after-free pattern

**CWE-416** | `gio/tests/gdbus-example-peer.c` line 167

Freed pointer not immediately set to NULL. Dangling pointer reuse corrupts heap and can lead to code execution.

```
g_free (s);
```

**Fix:** Set pointer to NULL immediately after free(). Enable AddressSanitizer in CI: -fsanitize=address.
---

### 15. [HIGH] Use-after-free pattern

**CWE-416** | `gio/tests/gdbus-example-peer.c` line 214

Freed pointer not immediately set to NULL. Dangling pointer reuse corrupts heap and can lead to code execution.

```
g_free (credentials_string);
```

**Fix:** Set pointer to NULL immediately after free(). Enable AddressSanitizer in CI: -fsanitize=address.
---

### 16. [HIGH] Use-after-free pattern

**CWE-416** | `gio/tests/gdbus-example-peer.c` line 220

Freed pointer not immediately set to NULL. Dangling pointer reuse corrupts heap and can lead to code execution.

```
g_free (credentials_string);
```

**Fix:** Set pointer to NULL immediately after free(). Enable AddressSanitizer in CI: -fsanitize=address.
---

### 17. [HIGH] Use-after-free pattern

**CWE-416** | `gio/tests/gdbus-example-peer.c` line 270

Freed pointer not immediately set to NULL. Dangling pointer reuse corrupts heap and can lead to code execution.

```
g_option_context_free (opt_context);
```

**Fix:** Set pointer to NULL immediately after free(). Enable AddressSanitizer in CI: -fsanitize=address.
---

### 18. [HIGH] Use-after-free pattern

**CWE-416** | `gio/tests/gdbus-example-peer.c` line 272

Freed pointer not immediately set to NULL. Dangling pointer reuse corrupts heap and can lead to code execution.

```
g_error_free (error);
```

**Fix:** Set pointer to NULL immediately after free(). Enable AddressSanitizer in CI: -fsanitize=address.
---

### 19. [HIGH] Use-after-free pattern

**CWE-416** | `gio/tests/gdbus-example-peer.c` line 276

Freed pointer not immediately set to NULL. Dangling pointer reuse corrupts heap and can lead to code execution.

```
g_option_context_free (opt_context);
```

**Fix:** Set pointer to NULL immediately after free(). Enable AddressSanitizer in CI: -fsanitize=address.
---

### 20. [HIGH] Use-after-free pattern

**CWE-416** | `gio/tests/gdbus-example-peer.c` line 324

Freed pointer not immediately set to NULL. Dangling pointer reuse corrupts heap and can lead to code execution.

```
g_free (guid);
```

**Fix:** Set pointer to NULL immediately after free(). Enable AddressSanitizer in CI: -fsanitize=address.
---

### 21. [HIGH] Use-after-free pattern

**CWE-416** | `gio/tests/gdbus-example-peer.c` line 329

Freed pointer not immediately set to NULL. Dangling pointer reuse corrupts heap and can lead to code execution.

```
g_error_free (error);
```

**Fix:** Set pointer to NULL immediately after free(). Enable AddressSanitizer in CI: -fsanitize=address.
---

### 22. [HIGH] Use-after-free pattern

**CWE-416** | `gio/tests/gdbus-example-peer.c` line 360

Freed pointer not immediately set to NULL. Dangling pointer reuse corrupts heap and can lead to code execution.

```
g_error_free (error);
```

**Fix:** Set pointer to NULL immediately after free(). Enable AddressSanitizer in CI: -fsanitize=address.
---

### 23. [HIGH] Use-after-free pattern

**CWE-416** | `gio/tests/gdbus-example-peer.c` line 381

Freed pointer not immediately set to NULL. Dangling pointer reuse corrupts heap and can lead to code execution.

```
g_free (greeting);
```

**Fix:** Set pointer to NULL immediately after free(). Enable AddressSanitizer in CI: -fsanitize=address.
---

### 24. [HIGH] Use-after-free pattern

**CWE-416** | `gio/tests/gdbus-example-peer.c` line 386

Freed pointer not immediately set to NULL. Dangling pointer reuse corrupts heap and can lead to code execution.

```
g_error_free (error);
```

**Fix:** Set pointer to NULL immediately after free(). Enable AddressSanitizer in CI: -fsanitize=address.
---

### 25. [HIGH] Use-after-free pattern

**CWE-416** | `gio/tests/gdbus-example-peer.c` line 400

Freed pointer not immediately set to NULL. Dangling pointer reuse corrupts heap and can lead to code execution.

```
g_free (opt_address);
```

**Fix:** Set pointer to NULL immediately after free(). Enable AddressSanitizer in CI: -fsanitize=address.
---

### 26. [HIGH] Missing NULL check after allocation

**CWE-476** | `gio/tests/gdbus-example-peer.c` line 146

Return value of malloc/realloc not checked for NULL. On allocation failure the program dereferences NULL, causing a crash or exploitable condition.

```
s = g_strdup ("(no credentials received)");
```

**Fix:** Always check: ptr = malloc(n); if (!ptr) { handle_error(); return; }
---

### 27. [HIGH] Use-after-free pattern

**CWE-416** | `gio/xdgmime/xdgmimeglob.c` line 93

Freed pointer not immediately set to NULL. Dangling pointer reuse corrupts heap and can lead to code execution.

```
free (ptr);
```

**Fix:** Set pointer to NULL immediately after free(). Enable AddressSanitizer in CI: -fsanitize=address.
---

### 28. [HIGH] Use-after-free pattern

**CWE-416** | `gio/xdgmime/xdgmimeglob.c` line 295

Freed pointer not immediately set to NULL. Dangling pointer reuse corrupts heap and can lead to code execution.

```
free (unitext);
```

**Fix:** Set pointer to NULL immediately after free(). Enable AddressSanitizer in CI: -fsanitize=address.
---

### 29. [HIGH] Use-after-free pattern

**CWE-416** | `gio/xdgmime/xdgmimeglob.c` line 445

Freed pointer not immediately set to NULL. Dangling pointer reuse corrupts heap and can lead to code execution.

```
free (lower_case);
```

**Fix:** Set pointer to NULL immediately after free(). Enable AddressSanitizer in CI: -fsanitize=address.
---

### 30. [HIGH] Use-after-free pattern

**CWE-416** | `gio/xdgmime/xdgmimeglob.c` line 456

Freed pointer not immediately set to NULL. Dangling pointer reuse corrupts heap and can lead to code execution.

```
free (lower_case);
```

**Fix:** Set pointer to NULL immediately after free(). Enable AddressSanitizer in CI: -fsanitize=address.
---

### 31. [HIGH] Use-after-free pattern

**CWE-416** | `gio/xdgmime/xdgmimeglob.c` line 481

Freed pointer not immediately set to NULL. Dangling pointer reuse corrupts heap and can lead to code execution.

```
free (lower_case);
```

**Fix:** Set pointer to NULL immediately after free(). Enable AddressSanitizer in CI: -fsanitize=address.
---

### 32. [HIGH] Use-after-free pattern

**CWE-416** | `gio/xdgmime/xdgmimeglob.c` line 523

Freed pointer not immediately set to NULL. Dangling pointer reuse corrupts heap and can lead to code execution.

```
free (node);
```

**Fix:** Set pointer to NULL immediately after free(). Enable AddressSanitizer in CI: -fsanitize=address.
---

### 33. [HIGH] Use-after-free pattern

**CWE-416** | `gio/xdgmime/xdgmimeglob.c` line 533

Freed pointer not immediately set to NULL. Dangling pointer reuse corrupts heap and can lead to code execution.

```
free (glob_hash);
```

**Fix:** Set pointer to NULL immediately after free(). Enable AddressSanitizer in CI: -fsanitize=address.
---

### 34. [HIGH] Missing NULL check after allocation

**CWE-476** | `gio/xdgmime/xdgmimeglob.c` line 72

Return value of malloc/realloc not checked for NULL. On allocation failure the program dereferences NULL, causing a crash or exploitable condition.

```
new_element = calloc (1, sizeof (XdgGlobList));
```

**Fix:** Always check: ptr = malloc(n); if (!ptr) { handle_error(); return; }
---

### 35. [HIGH] Missing NULL check after allocation

**CWE-476** | `gio/xdgmime/xdgmimeglob.c` line 120

Return value of malloc/realloc not checked for NULL. On allocation failure the program dereferences NULL, causing a crash or exploitable condition.

```
new_element->data = strdup (data);
```

**Fix:** Always check: ptr = malloc(n); if (!ptr) { handle_error(); return; }
---

### 36. [HIGH] Missing NULL check after allocation

**CWE-476** | `gio/xdgmime/xdgmimeglob.c` line 121

Return value of malloc/realloc not checked for NULL. On allocation failure the program dereferences NULL, causing a crash or exploitable condition.

```
new_element->mime_type = strdup (mime_type);
```

**Fix:** Always check: ptr = malloc(n); if (!ptr) { handle_error(); return; }
---

### 37. [HIGH] Missing NULL check after allocation

**CWE-476** | `gio/xdgmime/xdgmimeglob.c` line 144

Return value of malloc/realloc not checked for NULL. On allocation failure the program dereferences NULL, causing a crash or exploitable condition.

```
glob_hash_node = calloc (1, sizeof (XdgGlobHashNode));
```

**Fix:** Always check: ptr = malloc(n); if (!ptr) { handle_error(); return; }
---

### 38. [HIGH] Missing NULL check after allocation

**CWE-476** | `gio/xdgmime/xdgmimeglob.c` line 257

Return value of malloc/realloc not checked for NULL. On allocation failure the program dereferences NULL, causing a crash or exploitable condition.

```
child->mime_type = strdup (mime_type);
```

**Fix:** Always check: ptr = malloc(n); if (!ptr) { handle_error(); return; }
---

### 39. [HIGH] Missing NULL check after allocation

**CWE-476** | `gio/xdgmime/xdgmimeglob.c` line 268

Return value of malloc/realloc not checked for NULL. On allocation failure the program dereferences NULL, causing a crash or exploitable condition.

```
node->mime_type = strdup (mime_type);
```

**Fix:** Always check: ptr = malloc(n); if (!ptr) { handle_error(); return; }
---

### 40. [HIGH] Missing NULL check after allocation

**CWE-476** | `gio/xdgmime/xdgmimeglob.c` line 381

Return value of malloc/realloc not checked for NULL. On allocation failure the program dereferences NULL, causing a crash or exploitable condition.

```
lower = strdup (str);
```

**Fix:** Always check: ptr = malloc(n); if (!ptr) { handle_error(); return; }
---

### 41. [HIGH] Missing NULL check after allocation

**CWE-476** | `gio/xdgmime/xdgmimeglob.c` line 506

Return value of malloc/realloc not checked for NULL. On allocation failure the program dereferences NULL, causing a crash or exploitable condition.

```
glob_hash = calloc (1, sizeof (XdgGlobHash));
```

**Fix:** Always check: ptr = malloc(n); if (!ptr) { handle_error(); return; }
---

### 42. [HIGH] Use-after-free pattern

**CWE-416** | `glib/tests/utils-unisolated.c` line 44

Freed pointer not immediately set to NULL. Dangling pointer reuse corrupts heap and can lead to code execution.

```
g_free (xdg);
```

**Fix:** Set pointer to NULL immediately after free(). Enable AddressSanitizer in CI: -fsanitize=address.
---

### 43. [HIGH] Use-after-free pattern

**CWE-416** | `glib/tests/utils-unisolated.c` line 53

Freed pointer not immediately set to NULL. Dangling pointer reuse corrupts heap and can lead to code execution.

```
g_free (xdg);
```

**Fix:** Set pointer to NULL immediately after free(). Enable AddressSanitizer in CI: -fsanitize=address.
---

### 44. [HIGH] Use-after-free pattern

**CWE-416** | `glib/tests/utils-unisolated.c` line 62

Freed pointer not immediately set to NULL. Dangling pointer reuse corrupts heap and can lead to code execution.

```
g_free (xdg);
```

**Fix:** Set pointer to NULL immediately after free(). Enable AddressSanitizer in CI: -fsanitize=address.
---

### 45. [HIGH] Use-after-free pattern

**CWE-416** | `glib/tests/utils-unisolated.c` line 71

Freed pointer not immediately set to NULL. Dangling pointer reuse corrupts heap and can lead to code execution.

```
g_free (xdg);
```

**Fix:** Set pointer to NULL immediately after free(). Enable AddressSanitizer in CI: -fsanitize=address.
---

### 46. [HIGH] Use-after-free pattern

**CWE-416** | `glib/tests/utils-unisolated.c` line 80

Freed pointer not immediately set to NULL. Dangling pointer reuse corrupts heap and can lead to code execution.

```
g_free (xdg);
```

**Fix:** Set pointer to NULL immediately after free(). Enable AddressSanitizer in CI: -fsanitize=address.
---

### 47. [HIGH] Use-after-free pattern

**CWE-416** | `glib/tests/utils-unisolated.c` line 92

Freed pointer not immediately set to NULL. Dangling pointer reuse corrupts heap and can lead to code execution.

```
g_free (s);
```

**Fix:** Set pointer to NULL immediately after free(). Enable AddressSanitizer in CI: -fsanitize=address.
---

### 48. [HIGH] Missing NULL check after allocation

**CWE-476** | `glib/tests/utils-unisolated.c` line 37

Return value of malloc/realloc not checked for NULL. On allocation failure the program dereferences NULL, causing a crash or exploitable condition.

```
xdg = g_strdup (g_getenv ("XDG_CONFIG_HOME"));
```

**Fix:** Always check: ptr = malloc(n); if (!ptr) { handle_error(); return; }
---

### 49. [HIGH] Missing NULL check after allocation

**CWE-476** | `glib/tests/utils-unisolated.c` line 46

Return value of malloc/realloc not checked for NULL. On allocation failure the program dereferences NULL, causing a crash or exploitable condition.

```
xdg = g_strdup (g_getenv ("XDG_DATA_HOME"));
```

**Fix:** Always check: ptr = malloc(n); if (!ptr) { handle_error(); return; }
---

### 50. [HIGH] Missing NULL check after allocation

**CWE-476** | `glib/tests/utils-unisolated.c` line 55

Return value of malloc/realloc not checked for NULL. On allocation failure the program dereferences NULL, causing a crash or exploitable condition.

```
xdg = g_strdup (g_getenv ("XDG_CACHE_HOME"));
```

**Fix:** Always check: ptr = malloc(n); if (!ptr) { handle_error(); return; }
---

### 51. [HIGH] Missing NULL check after allocation

**CWE-476** | `glib/tests/utils-unisolated.c` line 64

Return value of malloc/realloc not checked for NULL. On allocation failure the program dereferences NULL, causing a crash or exploitable condition.

```
xdg = g_strdup (g_getenv ("XDG_STATE_HOME"));
```

**Fix:** Always check: ptr = malloc(n); if (!ptr) { handle_error(); return; }
---

### 52. [HIGH] Missing NULL check after allocation

**CWE-476** | `glib/tests/utils-unisolated.c` line 73

Return value of malloc/realloc not checked for NULL. On allocation failure the program dereferences NULL, causing a crash or exploitable condition.

```
xdg = g_strdup (g_getenv ("XDG_RUNTIME_DIR"));
```

**Fix:** Always check: ptr = malloc(n); if (!ptr) { handle_error(); return; }
---

### 53. [HIGH] Missing NULL check after allocation

**CWE-476** | `glib/tests/utils-unisolated.c` line 75

Return value of malloc/realloc not checked for NULL. On allocation failure the program dereferences NULL, causing a crash or exploitable condition.

```
xdg = g_strdup (g_get_user_cache_dir ());
```

**Fix:** Always check: ptr = malloc(n); if (!ptr) { handle_error(); return; }
---

### 54. [HIGH] Use-after-free pattern

**CWE-416** | `gio/inotify/inotify-path.c` line 213

Freed pointer not immediately set to NULL. Dangling pointer reuse corrupts heap and can lead to code execution.

```
g_free (file);
```

**Fix:** Set pointer to NULL immediately after free(). Enable AddressSanitizer in CI: -fsanitize=address.
---

### 55. [HIGH] Use-after-free pattern

**CWE-416** | `gio/inotify/inotify-path.c` line 350

Freed pointer not immediately set to NULL. Dangling pointer reuse corrupts heap and can lead to code execution.

```
g_list_free (dir_list);
```

**Fix:** Set pointer to NULL immediately after free(). Enable AddressSanitizer in CI: -fsanitize=address.
---

### 56. [HIGH] Use-after-free pattern

**CWE-416** | `gio/inotify/inotify-path.c` line 372

Freed pointer not immediately set to NULL. Dangling pointer reuse corrupts heap and can lead to code execution.

```
ip_watched_file_free (file);
```

**Fix:** Set pointer to NULL immediately after free(). Enable AddressSanitizer in CI: -fsanitize=address.
---

### 57. [HIGH] Use-after-free pattern

**CWE-416** | `gio/inotify/inotify-path.c` line 412

Freed pointer not immediately set to NULL. Dangling pointer reuse corrupts heap and can lead to code execution.

```
ip_watched_dir_free (dir);
```

**Fix:** Set pointer to NULL immediately after free(). Enable AddressSanitizer in CI: -fsanitize=address.
---

### 58. [HIGH] Use-after-free pattern

**CWE-416** | `gio/inotify/inotify-path.c` line 439

Freed pointer not immediately set to NULL. Dangling pointer reuse corrupts heap and can lead to code execution.

```
g_free (dir);
```

**Fix:** Set pointer to NULL immediately after free(). Enable AddressSanitizer in CI: -fsanitize=address.
---

### 59. [HIGH] Use-after-free pattern

**CWE-416** | `gio/inotify/inotify-path.c` line 458

Freed pointer not immediately set to NULL. Dangling pointer reuse corrupts heap and can lead to code execution.

```
ip_watched_dir_free (dir);
```

**Fix:** Set pointer to NULL immediately after free(). Enable AddressSanitizer in CI: -fsanitize=address.
---

### 60. [HIGH] Use-after-free pattern

**CWE-416** | `gio/inotify/inotify-path.c` line 562

Freed pointer not immediately set to NULL. Dangling pointer reuse corrupts heap and can lead to code execution.

```
_ik_event_free (event);
```

**Fix:** Set pointer to NULL immediately after free(). Enable AddressSanitizer in CI: -fsanitize=address.
---

### 61. [HIGH] Use-after-free pattern

**CWE-416** | `gio/inotify/inotify-path.c` line 596

Freed pointer not immediately set to NULL. Dangling pointer reuse corrupts heap and can lead to code execution.

```
_ik_event_free (event);
```

**Fix:** Set pointer to NULL immediately after free(). Enable AddressSanitizer in CI: -fsanitize=address.
---

### 62. [HIGH] Missing NULL check after allocation

**CWE-476** | `gio/inotify/inotify-path.c` line 201

Return value of malloc/realloc not checked for NULL. On allocation failure the program dereferences NULL, causing a crash or exploitable condition.

```
file->filename = g_strdup (filename);
```

**Fix:** Always check: ptr = malloc(n); if (!ptr) { handle_error(); return; }
---

### 63. [HIGH] Missing NULL check after allocation

**CWE-476** | `gio/inotify/inotify-path.c` line 425

Return value of malloc/realloc not checked for NULL. On allocation failure the program dereferences NULL, causing a crash or exploitable condition.

```
dir->path = g_strdup (path);
```

**Fix:** Always check: ptr = malloc(n); if (!ptr) { handle_error(); return; }
---

### 64. [HIGH] Use-after-free pattern

**CWE-416** | `gio/tests/gdbus-example-watch-proxy.c` line 41

Freed pointer not immediately set to NULL. Dangling pointer reuse corrupts heap and can lead to code execution.

```
g_free (value_str);
```

**Fix:** Set pointer to NULL immediately after free(). Enable AddressSanitizer in CI: -fsanitize=address.
---

### 65. [HIGH] Use-after-free pattern

**CWE-416** | `gio/tests/gdbus-example-watch-proxy.c` line 71

Freed pointer not immediately set to NULL. Dangling pointer reuse corrupts heap and can lead to code execution.

```
g_free (value_str);
```

**Fix:** Set pointer to NULL immediately after free(). Enable AddressSanitizer in CI: -fsanitize=address.
---

### 66. [HIGH] Use-after-free pattern

**CWE-416** | `gio/tests/gdbus-example-watch-proxy.c` line 73

Freed pointer not immediately set to NULL. Dangling pointer reuse corrupts heap and can lead to code execution.

```
g_variant_iter_free (iter);
```

**Fix:** Set pointer to NULL immediately after free(). Enable AddressSanitizer in CI: -fsanitize=address.
---

### 67. [HIGH] Use-after-free pattern

**CWE-416** | `gio/tests/gdbus-example-watch-proxy.c` line 101

Freed pointer not immediately set to NULL. Dangling pointer reuse corrupts heap and can lead to code execution.

```
g_free (parameters_str);
```

**Fix:** Set pointer to NULL immediately after free(). Enable AddressSanitizer in CI: -fsanitize=address.
---

### 68. [HIGH] Use-after-free pattern

**CWE-416** | `gio/tests/gdbus-example-watch-proxy.c` line 136

Freed pointer not immediately set to NULL. Dangling pointer reuse corrupts heap and can lead to code execution.

```
g_free (name_owner);
```

**Fix:** Set pointer to NULL immediately after free(). Enable AddressSanitizer in CI: -fsanitize=address.
---

### 69. [HIGH] Use-after-free pattern

**CWE-416** | `gio/tests/gdbus-example-watch-proxy.c` line 199

Freed pointer not immediately set to NULL. Dangling pointer reuse corrupts heap and can lead to code execution.

```
g_error_free (error);
```

**Fix:** Set pointer to NULL immediately after free(). Enable AddressSanitizer in CI: -fsanitize=address.
---

### 70. [HIGH] Use-after-free pattern

**CWE-416** | `gio/tests/gdbus-example-watch-proxy.c` line 224

Freed pointer not immediately set to NULL. Dangling pointer reuse corrupts heap and can lead to code execution.

```
g_option_context_free (opt_context);
```

**Fix:** Set pointer to NULL immediately after free(). Enable AddressSanitizer in CI: -fsanitize=address.
---

### 71. [HIGH] Use-after-free pattern

**CWE-416** | `gio/tests/gdbus-example-watch-proxy.c` line 225

Freed pointer not immediately set to NULL. Dangling pointer reuse corrupts heap and can lead to code execution.

```
g_free (opt_name);
```

**Fix:** Set pointer to NULL immediately after free(). Enable AddressSanitizer in CI: -fsanitize=address.
---

### 72. [HIGH] Use-after-free pattern

**CWE-416** | `gio/tests/gdbus-example-watch-proxy.c` line 226

Freed pointer not immediately set to NULL. Dangling pointer reuse corrupts heap and can lead to code execution.

```
g_free (opt_object_path);
```

**Fix:** Set pointer to NULL immediately after free(). Enable AddressSanitizer in CI: -fsanitize=address.
---

### 73. [HIGH] Use-after-free pattern

**CWE-416** | `gio/tests/gdbus-example-watch-proxy.c` line 227

Freed pointer not immediately set to NULL. Dangling pointer reuse corrupts heap and can lead to code execution.

```
g_free (opt_interface);
```

**Fix:** Set pointer to NULL immediately after free(). Enable AddressSanitizer in CI: -fsanitize=address.
---

### 74. [HIGH] Use-after-free pattern

**CWE-416** | `gio/tests/appmonitor.c` line 164

Freed pointer not immediately set to NULL. Dangling pointer reuse corrupts heap and can lead to code execution.

```
g_free (app_path);
```

**Fix:** Set pointer to NULL immediately after free(). Enable AddressSanitizer in CI: -fsanitize=address.
---

### 75. [HIGH] Integer overflow in size calculation

**CWE-190** | `girepository/cmph/fch_buckets.c` line 177

Arithmetic in allocator argument can overflow to a small value, causing under-allocation and subsequent heap overflow.

```
cmph_uint32 *nbuckets_size = (cmph_uint32 *) calloc((size_t)buckets->max_size + 1, sizeof(cmph_uint32));
```

**Fix:** Validate sizes before arithmetic. Use calloc(n, size) for n*size. Check: if (n > SIZE_MAX / size) abort().
---

### 76. [HIGH] Use-after-free pattern

**CWE-416** | `girepository/cmph/fch_buckets.c` line 198

Freed pointer not immediately set to NULL. Dangling pointer reuse corrupts heap and can lead to code execution.

```
free(nbuckets_size);
```

**Fix:** Set pointer to NULL immediately after free(). Enable AddressSanitizer in CI: -fsanitize=address.
---

### 77. [HIGH] Use-after-free pattern

**CWE-416** | `girepository/cmph/fch_buckets.c` line 213

Freed pointer not immediately set to NULL. Dangling pointer reuse corrupts heap and can lead to code execution.

```
free(buckets);
```

**Fix:** Set pointer to NULL immediately after free(). Enable AddressSanitizer in CI: -fsanitize=address.
---

### 78. [HIGH] Missing NULL check after allocation

**CWE-476** | `girepository/cmph/fch_buckets.c` line 54

Return value of malloc/realloc not checked for NULL. On allocation failure the program dereferences NULL, causing a crash or exploitable condition.

```
bucket->entries = (fch_bucket_entry_t *)realloc(bucket->entries, sizeof(fch_bucket_entry_t)*new_capacity);
```

**Fix:** Always check: ptr = malloc(n); if (!ptr) { handle_error(); return; }
---

### 79. [HIGH] Missing NULL check after allocation

**CWE-476** | `girepository/cmph/fch_buckets.c` line 118

Return value of malloc/realloc not checked for NULL. On allocation failure the program dereferences NULL, causing a crash or exploitable condition.

```
fch_buckets_t *buckets = (fch_buckets_t *)malloc(sizeof(fch_buckets_t));
```

**Fix:** Always check: ptr = malloc(n); if (!ptr) { handle_error(); return; }
---

### 80. [HIGH] Missing NULL check after allocation

**CWE-476** | `girepository/cmph/fch_buckets.c` line 120

Return value of malloc/realloc not checked for NULL. On allocation failure the program dereferences NULL, causing a crash or exploitable condition.

```
buckets->values = (fch_bucket_t *)calloc((size_t)nbuckets, sizeof(fch_bucket_t));
```

**Fix:** Always check: ptr = malloc(n); if (!ptr) { handle_error(); return; }
---

### 81. [HIGH] Missing NULL check after allocation

**CWE-476** | `girepository/cmph/fch_buckets.c` line 177

Return value of malloc/realloc not checked for NULL. On allocation failure the program dereferences NULL, causing a crash or exploitable condition.

```
cmph_uint32 *nbuckets_size = (cmph_uint32 *) calloc((size_t)buckets->max_size + 1, sizeof(cmph_uint32));
```

**Fix:** Always check: ptr = malloc(n); if (!ptr) { handle_error(); return; }
---

### 82. [HIGH] Missing NULL check after allocation

**CWE-476** | `girepository/cmph/fch_buckets.c` line 178

Return value of malloc/realloc not checked for NULL. On allocation failure the program dereferences NULL, causing a crash or exploitable condition.

```
cmph_uint32 * sorted_indexes = (cmph_uint32 *) calloc((size_t)buckets->nbuckets, sizeof(cmph_uint32));
```

**Fix:** Always check: ptr = malloc(n); if (!ptr) { handle_error(); return; }
---

### 83. [HIGH] Use-after-free pattern

**CWE-416** | `girepository/cmph/buffer_manage.c` line 65

Freed pointer not immediately set to NULL. Dangling pointer reuse corrupts heap and can lead to code execution.

```
free(buffer_manage);
```

**Fix:** Set pointer to NULL immediately after free(). Enable AddressSanitizer in CI: -fsanitize=address.
---

### 84. [HIGH] Missing NULL check after allocation

**CWE-476** | `girepository/cmph/buffer_manage.c` line 18

Return value of malloc/realloc not checked for NULL. On allocation failure the program dereferences NULL, causing a crash or exploitable condition.

```
buffer_manage_t *buff_manage = (buffer_manage_t *)malloc(sizeof(buffer_manage_t));
```

**Fix:** Always check: ptr = malloc(n); if (!ptr) { handle_error(); return; }
---

### 85. [HIGH] Missing NULL check after allocation

**CWE-476** | `girepository/cmph/buffer_manage.c` line 21

Return value of malloc/realloc not checked for NULL. On allocation failure the program dereferences NULL, causing a crash or exploitable condition.

```
buff_manage->buffer_entries = (buffer_entry_t **)calloc((size_t)nentries, sizeof(buffer_entry_t *));
```

**Fix:** Always check: ptr = malloc(n); if (!ptr) { handle_error(); return; }
---

### 86. [HIGH] Missing NULL check after allocation

**CWE-476** | `girepository/cmph/buffer_manage.c` line 22

Return value of malloc/realloc not checked for NULL. On allocation failure the program dereferences NULL, causing a crash or exploitable condition.

```
buff_manage->memory_avail_list = (cmph_uint32 *)calloc((size_t)nentries, sizeof(cmph_uint32));
```

**Fix:** Always check: ptr = malloc(n); if (!ptr) { handle_error(); return; }
---

### 87. [CRITICAL] Format string vulnerability

**CWE-134** | `gio/glocalfileinfo.c` line 1208

User-controlled string passed as printf format argument. Attacker reads stack memory or overwrites return addresses via %n.

```
data->real_name = g_strdup_printf ("user #%d", (int)uid);
```

**Fix:** Use a literal format string: printf("%s", user_input). Never pass user data as the format argument.
---

### 88. [HIGH] Integer overflow in size calculation

**CWE-190** | `gio/glocalfileinfo.c` line 324

Arithmetic in allocator argument can overflow to a small value, causing under-allocation and subsequent heap overflow.

```
escaped_str = g_malloc (len + num_invalid*3 + 1);
```

**Fix:** Validate sizes before arithmetic. Use calloc(n, size) for n*size. Check: if (n > SIZE_MAX / size) abort().
---

### 89. [HIGH] Integer overflow in size calculation

**CWE-190** | `gio/glocalfileinfo.c` line 1577

Arithmetic in allocator argument can overflow to a small value, causing under-allocation and subsequent heap overflow.

```
name = g_try_malloc (name_len * sizeof (wchar_t));
```

**Fix:** Validate sizes before arithmetic. Use calloc(n, size) for n*size. Check: if (n > SIZE_MAX / size) abort().
---

### 90. [HIGH] Integer overflow in size calculation

**CWE-190** | `gio/glocalfileinfo.c` line 1578

Arithmetic in allocator argument can overflow to a small value, causing under-allocation and subsequent heap overflow.

```
domain = g_try_malloc (domain_len * sizeof (wchar_t));
```

**Fix:** Validate sizes before arithmetic. Use calloc(n, size) for n*size. Check: if (n > SIZE_MAX / size) abort().
---

### 91. [HIGH] Integer overflow in size calculation

**CWE-190** | `gio/glocalfileinfo.c` line 1604

Arithmetic in allocator argument can overflow to a small value, causing under-allocation and subsequent heap overflow.

```
name = g_try_malloc (name_len * sizeof (wchar_t));
```

**Fix:** Validate sizes before arithmetic. Use calloc(n, size) for n*size. Check: if (n > SIZE_MAX / size) abort().
---

### 92. [HIGH] Integer overflow in size calculation

**CWE-190** | `gio/glocalfileinfo.c` line 1605

Arithmetic in allocator argument can overflow to a small value, causing under-allocation and subsequent heap overflow.

```
domain = g_try_malloc (domain_len * sizeof (wchar_t));
```

**Fix:** Validate sizes before arithmetic. Use calloc(n, size) for n*size. Check: if (n > SIZE_MAX / size) abort().
---

### 93. [HIGH] Use-after-free pattern

**CWE-416** | `gio/glocalfileinfo.c` line 175

Freed pointer not immediately set to NULL. Dangling pointer reuse corrupts heap and can lead to code execution.

```
g_free (buffer);
```

**Fix:** Set pointer to NULL immediately after free(). Enable AddressSanitizer in CI: -fsanitize=address.
---

### 94. [HIGH] Use-after-free pattern

**CWE-416** | `gio/glocalfileinfo.c` line 413

Freed pointer not immediately set to NULL. Dangling pointer reuse corrupts heap and can lead to code execution.

```
g_free (escaped_val);
```

**Fix:** Set pointer to NULL immediately after free(). Enable AddressSanitizer in CI: -fsanitize=address.
---

### 95. [HIGH] Use-after-free pattern

**CWE-416** | `gio/glocalfileinfo.c` line 447

Freed pointer not immediately set to NULL. Dangling pointer reuse corrupts heap and can lead to code execution.

```
g_free (value_p);
```

**Fix:** Set pointer to NULL immediately after free(). Enable AddressSanitizer in CI: -fsanitize=address.
---

### 96. [HIGH] Use-after-free pattern

**CWE-416** | `gio/glocalfileinfo.c` line 460

Freed pointer not immediately set to NULL. Dangling pointer reuse corrupts heap and can lead to code execution.

```
g_free (value_p);
```

**Fix:** Set pointer to NULL immediately after free(). Enable AddressSanitizer in CI: -fsanitize=address.
---

### 97. [HIGH] Use-after-free pattern

**CWE-416** | `gio/glocalfileinfo.c` line 512

Freed pointer not immediately set to NULL. Dangling pointer reuse corrupts heap and can lead to code execution.

```
g_free (list);
```

**Fix:** Set pointer to NULL immediately after free(). Enable AddressSanitizer in CI: -fsanitize=address.
---

### 98. [HIGH] Use-after-free pattern

**CWE-416** | `gio/glocalfileinfo.c` line 537

Freed pointer not immediately set to NULL. Dangling pointer reuse corrupts heap and can lead to code execution.

```
g_free (escaped_attr);
```

**Fix:** Set pointer to NULL immediately after free(). Enable AddressSanitizer in CI: -fsanitize=address.
---

### 99. [HIGH] Use-after-free pattern

**CWE-416** | `gio/glocalfileinfo.c` line 541

Freed pointer not immediately set to NULL. Dangling pointer reuse corrupts heap and can lead to code execution.

```
g_free (gio_attr);
```

**Fix:** Set pointer to NULL immediately after free(). Enable AddressSanitizer in CI: -fsanitize=address.
---

### 100. [HIGH] Use-after-free pattern

**CWE-416** | `gio/glocalfileinfo.c` line 549

Freed pointer not immediately set to NULL. Dangling pointer reuse corrupts heap and can lead to code execution.

```
g_free (list);
```

**Fix:** Set pointer to NULL immediately after free(). Enable AddressSanitizer in CI: -fsanitize=address.
---

### 101. [HIGH] Use-after-free pattern

**CWE-416** | `gio/glocalfileinfo.c` line 571

Freed pointer not immediately set to NULL. Dangling pointer reuse corrupts heap and can lead to code execution.

```
g_free (a);
```

**Fix:** Set pointer to NULL immediately after free(). Enable AddressSanitizer in CI: -fsanitize=address.
---

### 102. [HIGH] Use-after-free pattern

**CWE-416** | `gio/glocalfileinfo.c` line 574

Freed pointer not immediately set to NULL. Dangling pointer reuse corrupts heap and can lead to code execution.

```
g_free (unescaped_attribute);
```

**Fix:** Set pointer to NULL immediately after free(). Enable AddressSanitizer in CI: -fsanitize=address.
---

### 103. [HIGH] Use-after-free pattern

**CWE-416** | `gio/glocalfileinfo.c` line 612

Freed pointer not immediately set to NULL. Dangling pointer reuse corrupts heap and can lead to code execution.

```
g_free (value_p);
```

**Fix:** Set pointer to NULL immediately after free(). Enable AddressSanitizer in CI: -fsanitize=address.
---

### 104. [HIGH] Use-after-free pattern

**CWE-416** | `gio/glocalfileinfo.c` line 625

Freed pointer not immediately set to NULL. Dangling pointer reuse corrupts heap and can lead to code execution.

```
g_free (value_p);
```

**Fix:** Set pointer to NULL immediately after free(). Enable AddressSanitizer in CI: -fsanitize=address.
---

### 105. [HIGH] Use-after-free pattern

**CWE-416** | `gio/glocalfileinfo.c` line 675

Freed pointer not immediately set to NULL. Dangling pointer reuse corrupts heap and can lead to code execution.

```
g_free (list);
```

**Fix:** Set pointer to NULL immediately after free(). Enable AddressSanitizer in CI: -fsanitize=address.
---

### 106. [HIGH] Use-after-free pattern

**CWE-416** | `gio/glocalfileinfo.c` line 700

Freed pointer not immediately set to NULL. Dangling pointer reuse corrupts heap and can lead to code execution.

```
g_free (escaped_attr);
```

**Fix:** Set pointer to NULL immediately after free(). Enable AddressSanitizer in CI: -fsanitize=address.
---

### 107. [HIGH] Use-after-free pattern

**CWE-416** | `gio/glocalfileinfo.c` line 703

Freed pointer not immediately set to NULL. Dangling pointer reuse corrupts heap and can lead to code execution.

```
g_free (gio_attr);
```

**Fix:** Set pointer to NULL immediately after free(). Enable AddressSanitizer in CI: -fsanitize=address.
---

### 108. [HIGH] Use-after-free pattern

**CWE-416** | `gio/glocalfileinfo.c` line 711

Freed pointer not immediately set to NULL. Dangling pointer reuse corrupts heap and can lead to code execution.

```
g_free (list);
```

**Fix:** Set pointer to NULL immediately after free(). Enable AddressSanitizer in CI: -fsanitize=address.
---

### 109. [HIGH] Use-after-free pattern

**CWE-416** | `gio/glocalfileinfo.c` line 733

Freed pointer not immediately set to NULL. Dangling pointer reuse corrupts heap and can lead to code execution.

```
g_free (a);
```

**Fix:** Set pointer to NULL immediately after free(). Enable AddressSanitizer in CI: -fsanitize=address.
---

### 110. [HIGH] Use-after-free pattern

**CWE-416** | `gio/glocalfileinfo.c` line 736

Freed pointer not immediately set to NULL. Dangling pointer reuse corrupts heap and can lead to code execution.

```
g_free (unescaped_attribute);
```

**Fix:** Set pointer to NULL immediately after free(). Enable AddressSanitizer in CI: -fsanitize=address.
---

### 111. [HIGH] Use-after-free pattern

**CWE-416** | `gio/glocalfileinfo.c` line 812

Freed pointer not immediately set to NULL. Dangling pointer reuse corrupts heap and can lead to code execution.

```
g_free (a);
```

**Fix:** Set pointer to NULL immediately after free(). Enable AddressSanitizer in CI: -fsanitize=address.
---

### 112. [HIGH] Use-after-free pattern

**CWE-416** | `gio/glocalfileinfo.c` line 815

Freed pointer not immediately set to NULL. Dangling pointer reuse corrupts heap and can lead to code execution.

```
g_free (attribute);
```

**Fix:** Set pointer to NULL immediately after free(). Enable AddressSanitizer in CI: -fsanitize=address.
---

### 113. [HIGH] Use-after-free pattern

**CWE-416** | `gio/glocalfileinfo.c` line 818

Freed pointer not immediately set to NULL. Dangling pointer reuse corrupts heap and can lead to code execution.

```
g_free (value);
```

**Fix:** Set pointer to NULL immediately after free(). Enable AddressSanitizer in CI: -fsanitize=address.
---

### 114. [HIGH] Use-after-free pattern

**CWE-416** | `gio/glocalfileinfo.c` line 1071

Freed pointer not immediately set to NULL. Dangling pointer reuse corrupts heap and can lead to code execution.

```
g_free (etag);
```

**Fix:** Set pointer to NULL immediately after free(). Enable AddressSanitizer in CI: -fsanitize=address.
---

### 115. [HIGH] Use-after-free pattern

**CWE-416** | `gio/glocalfileinfo.c` line 1079

Freed pointer not immediately set to NULL. Dangling pointer reuse corrupts heap and can lead to code execution.

```
g_free (id);
```

**Fix:** Set pointer to NULL immediately after free(). Enable AddressSanitizer in CI: -fsanitize=address.
---

### 116. [HIGH] Use-after-free pattern

**CWE-416** | `gio/glocalfileinfo.c` line 1087

Freed pointer not immediately set to NULL. Dangling pointer reuse corrupts heap and can lead to code execution.

```
g_free (id);
```

**Fix:** Set pointer to NULL immediately after free(). Enable AddressSanitizer in CI: -fsanitize=address.
---

### 117. [HIGH] Use-after-free pattern

**CWE-416** | `gio/glocalfileinfo.c` line 1153

Freed pointer not immediately set to NULL. Dangling pointer reuse corrupts heap and can lead to code execution.

```
g_free (data);
```

**Fix:** Set pointer to NULL immediately after free(). Enable AddressSanitizer in CI: -fsanitize=address.
---

### 118. [HIGH] Use-after-free pattern

**CWE-416** | `gio/glocalfileinfo.c` line 1372

Freed pointer not immediately set to NULL. Dangling pointer reuse corrupts heap and can lead to code execution.

```
g_free (content_type);
```

**Fix:** Set pointer to NULL immediately after free(). Enable AddressSanitizer in CI: -fsanitize=address.
---

### 119. [HIGH] Use-after-free pattern

**CWE-416** | `gio/glocalfileinfo.c` line 1473

Freed pointer not immediately set to NULL. Dangling pointer reuse corrupts heap and can lead to code execution.

```
g_free (uri);
```

**Fix:** Set pointer to NULL immediately after free(). Enable AddressSanitizer in CI: -fsanitize=address.
---

### 120. [HIGH] Use-after-free pattern

**CWE-416** | `gio/glocalfileinfo.c` line 1479

Freed pointer not immediately set to NULL. Dangling pointer reuse corrupts heap and can lead to code execution.

```
g_checksum_free (checksum);
```

**Fix:** Set pointer to NULL immediately after free(). Enable AddressSanitizer in CI: -fsanitize=address.
---

### 121. [HIGH] Use-after-free pattern

**CWE-416** | `gio/glocalfileinfo.c` line 1530

Freed pointer not immediately set to NULL. Dangling pointer reuse corrupts heap and can lead to code execution.

```
g_free (basename);
```

**Fix:** Set pointer to NULL immediately after free(). Enable AddressSanitizer in CI: -fsanitize=address.
---

### 122. [HIGH] Use-after-free pattern

**CWE-416** | `gio/glocalfileinfo.c` line 1531

Freed pointer not immediately set to NULL. Dangling pointer reuse corrupts heap and can lead to code execution.

```
g_free (filename);
```

**Fix:** Set pointer to NULL immediately after free(). Enable AddressSanitizer in CI: -fsanitize=address.
---

### 123. [HIGH] Use-after-free pattern

**CWE-416** | `gio/glocalfileinfo.c` line 1532

Freed pointer not immediately set to NULL. Dangling pointer reuse corrupts heap and can lead to code execution.

```
g_free (uri);
```

**Fix:** Set pointer to NULL immediately after free(). Enable AddressSanitizer in CI: -fsanitize=address.
---

### 124. [HIGH] Use-after-free pattern

**CWE-416** | `gio/glocalfileinfo.c` line 1588

Freed pointer not immediately set to NULL. Dangling pointer reuse corrupts heap and can lead to code execution.

```
g_free (name);
```

**Fix:** Set pointer to NULL immediately after free(). Enable AddressSanitizer in CI: -fsanitize=address.
---

### 125. [HIGH] Use-after-free pattern

**CWE-416** | `gio/glocalfileinfo.c` line 1589

Freed pointer not immediately set to NULL. Dangling pointer reuse corrupts heap and can lead to code execution.

```
g_free (domain);
```

**Fix:** Set pointer to NULL immediately after free(). Enable AddressSanitizer in CI: -fsanitize=address.
---

### 126. [HIGH] Use-after-free pattern

**CWE-416** | `gio/glocalfileinfo.c` line 1615

Freed pointer not immediately set to NULL. Dangling pointer reuse corrupts heap and can lead to code execution.

```
g_free (name);
```

**Fix:** Set pointer to NULL immediately after free(). Enable AddressSanitizer in CI: -fsanitize=address.
---

### 127. [HIGH] Use-after-free pattern

**CWE-416** | `gio/glocalfileinfo.c` line 1616

Freed pointer not immediately set to NULL. Dangling pointer reuse corrupts heap and can lead to code execution.

```
g_free (domain);
```

**Fix:** Set pointer to NULL immediately after free(). Enable AddressSanitizer in CI: -fsanitize=address.
---

### 128. [HIGH] Use-after-free pattern

**CWE-416** | `gio/glocalfileinfo.c` line 1621

Freed pointer not immediately set to NULL. Dangling pointer reuse corrupts heap and can lead to code execution.

```
g_free (psd);
```

**Fix:** Set pointer to NULL immediately after free(). Enable AddressSanitizer in CI: -fsanitize=address.
---

### 129. [HIGH] Use-after-free pattern

**CWE-416** | `gio/glocalfileinfo.c` line 1623

Freed pointer not immediately set to NULL. Dangling pointer reuse corrupts heap and can lead to code execution.

```
g_free (wfilename);
```

**Fix:** Set pointer to NULL immediately after free(). Enable AddressSanitizer in CI: -fsanitize=address.
---

### 130. [HIGH] Use-after-free pattern

**CWE-416** | `gio/glocalfileinfo.c` line 1680

Freed pointer not immediately set to NULL. Dangling pointer reuse corrupts heap and can lead to code execution.

```
g_free (filename);
```

**Fix:** Set pointer to NULL immediately after free(). Enable AddressSanitizer in CI: -fsanitize=address.
---

### 131. [HIGH] Use-after-free pattern

**CWE-416** | `gio/glocalfileinfo.c` line 1691

Freed pointer not immediately set to NULL. Dangling pointer reuse corrupts heap and can lead to code execution.

```
g_free (contents);
```

**Fix:** Set pointer to NULL immediately after free(). Enable AddressSanitizer in CI: -fsanitize=address.
---

### 132. [HIGH] Use-after-free pattern

**CWE-416** | `gio/glocalfileinfo.c` line 1698

Freed pointer not immediately set to NULL. Dangling pointer reuse corrupts heap and can lead to code execution.

```
g_free (lines);
```

**Fix:** Set pointer to NULL immediately after free(). Enable AddressSanitizer in CI: -fsanitize=address.
---

### 133. [HIGH] Use-after-free pattern

**CWE-416** | `gio/glocalfileinfo.c` line 1712

Freed pointer not immediately set to NULL. Dangling pointer reuse corrupts heap and can lead to code execution.

```
g_free (data);
```

**Fix:** Set pointer to NULL immediately after free(). Enable AddressSanitizer in CI: -fsanitize=address.
---

### 134. [HIGH] Use-after-free pattern

**CWE-416** | `gio/glocalfileinfo.c` line 1765

Freed pointer not immediately set to NULL. Dangling pointer reuse corrupts heap and can lead to code execution.

```
g_free (dirname);
```

**Fix:** Set pointer to NULL immediately after free(). Enable AddressSanitizer in CI: -fsanitize=address.
---

### 135. [HIGH] Use-after-free pattern

**CWE-416** | `gio/glocalfileinfo.c` line 1789

Freed pointer not immediately set to NULL. Dangling pointer reuse corrupts heap and can lead to code execution.

```
g_free (p);
```

**Fix:** Set pointer to NULL immediately after free(). Enable AddressSanitizer in CI: -fsanitize=address.
---

### 136. [HIGH] Use-after-free pattern

**CWE-416** | `gio/glocalfileinfo.c` line 1792

Freed pointer not immediately set to NULL. Dangling pointer reuse corrupts heap and can lead to code execution.

```
g_free (display_name);
```

**Fix:** Set pointer to NULL immediately after free(). Enable AddressSanitizer in CI: -fsanitize=address.
---

### 137. [HIGH] Use-after-free pattern

**CWE-416** | `gio/glocalfileinfo.c` line 1800

Freed pointer not immediately set to NULL. Dangling pointer reuse corrupts heap and can lead to code execution.

```
g_free (edit_name);
```

**Fix:** Set pointer to NULL immediately after free(). Enable AddressSanitizer in CI: -fsanitize=address.
---

### 138. [HIGH] Use-after-free pattern

**CWE-416** | `gio/glocalfileinfo.c` line 1810

Freed pointer not immediately set to NULL. Dangling pointer reuse corrupts heap and can lead to code execution.

```
g_free (copy_name);
```

**Fix:** Set pointer to NULL immediately after free(). Enable AddressSanitizer in CI: -fsanitize=address.
---

### 139. [HIGH] Use-after-free pattern

**CWE-416** | `gio/glocalfileinfo.c` line 1955

Freed pointer not immediately set to NULL. Dangling pointer reuse corrupts heap and can lead to code execution.

```
g_free (display_name);
```

**Fix:** Set pointer to NULL immediately after free(). Enable AddressSanitizer in CI: -fsanitize=address.
---

### 140. [HIGH] Use-after-free pattern

**CWE-416** | `gio/glocalfileinfo.c` line 2079

Freed pointer not immediately set to NULL. Dangling pointer reuse corrupts heap and can lead to code execution.

```
g_free (content_type);
```

**Fix:** Set pointer to NULL immediately after free(). Enable AddressSanitizer in CI: -fsanitize=address.
---

### 141. [HIGH] Use-after-free pattern

**CWE-416** | `gio/glocalfileinfo.c` line 2094

Freed pointer not immediately set to NULL. Dangling pointer reuse corrupts heap and can lead to code execution.

```
g_free (content_type);
```

**Fix:** Set pointer to NULL immediately after free(). Enable AddressSanitizer in CI: -fsanitize=address.
---

### 142. [HIGH] Use-after-free pattern

**CWE-416** | `gio/glocalfileinfo.c` line 2118

Freed pointer not immediately set to NULL. Dangling pointer reuse corrupts heap and can lead to code execution.

```
g_free (icon_content_type);
```

**Fix:** Set pointer to NULL immediately after free(). Enable AddressSanitizer in CI: -fsanitize=address.
---

### 143. [HIGH] Use-after-free pattern

**CWE-416** | `gio/glocalfileinfo.c` line 2134

Freed pointer not immediately set to NULL. Dangling pointer reuse corrupts heap and can lead to code execution.

```
g_free (name);
```

**Fix:** Set pointer to NULL immediately after free(). Enable AddressSanitizer in CI: -fsanitize=address.
---

### 144. [HIGH] Use-after-free pattern

**CWE-416** | `gio/glocalfileinfo.c` line 2149

Freed pointer not immediately set to NULL. Dangling pointer reuse corrupts heap and can lead to code execution.

```
g_free (name);
```

**Fix:** Set pointer to NULL immediately after free(). Enable AddressSanitizer in CI: -fsanitize=address.
---

### 145. [HIGH] Use-after-free pattern

**CWE-416** | `gio/glocalfileinfo.c` line 2164

Freed pointer not immediately set to NULL. Dangling pointer reuse corrupts heap and can lead to code execution.

```
g_free (name);
```

**Fix:** Set pointer to NULL immediately after free(). Enable AddressSanitizer in CI: -fsanitize=address.
---

### 146. [HIGH] Use-after-free pattern

**CWE-416** | `gio/glocalfileinfo.c` line 2247

Freed pointer not immediately set to NULL. Dangling pointer reuse corrupts heap and can lead to code execution.

```
g_free (symlink_target);
```

**Fix:** Set pointer to NULL immediately after free(). Enable AddressSanitizer in CI: -fsanitize=address.
---

### 147. [HIGH] Missing NULL check after allocation

**CWE-476** | `gio/glocalfileinfo.c` line 166

Return value of malloc/realloc not checked for NULL. On allocation failure the program dereferences NULL, causing a crash or exploitable condition.

```
buffer = g_malloc (size);
```

**Fix:** Always check: ptr = malloc(n); if (!ptr) { handle_error(); return; }
---

### 148. [HIGH] Missing NULL check after allocation

**CWE-476** | `gio/glocalfileinfo.c` line 184

Return value of malloc/realloc not checked for NULL. On allocation failure the program dereferences NULL, causing a crash or exploitable condition.

```
buffer = g_realloc (buffer, size);
```

**Fix:** Always check: ptr = malloc(n); if (!ptr) { handle_error(); return; }
---

### 149. [HIGH] Missing NULL check after allocation

**CWE-476** | `gio/glocalfileinfo.c` line 194

Return value of malloc/realloc not checked for NULL. On allocation failure the program dereferences NULL, causing a crash or exploitable condition.

```
return strdup ("");
```

**Fix:** Always check: ptr = malloc(n); if (!ptr) { handle_error(); return; }
---

### 150. [HIGH] Missing NULL check after allocation

**CWE-476** | `gio/glocalfileinfo.c` line 324

Return value of malloc/realloc not checked for NULL. On allocation failure the program dereferences NULL, causing a crash or exploitable condition.

```
escaped_str = g_malloc (len + num_invalid*3 + 1);
```

**Fix:** Always check: ptr = malloc(n); if (!ptr) { handle_error(); return; }
---

### 151. [HIGH] Missing NULL check after allocation

**CWE-476** | `gio/glocalfileinfo.c` line 373

Return value of malloc/realloc not checked for NULL. On allocation failure the program dereferences NULL, causing a crash or exploitable condition.

```
unescaped_str = g_malloc (len + 1);
```

**Fix:** Always check: ptr = malloc(n); if (!ptr) { handle_error(); return; }
---

### 152. [HIGH] Missing NULL check after allocation

**CWE-476** | `gio/glocalfileinfo.c` line 441

Return value of malloc/realloc not checked for NULL. On allocation failure the program dereferences NULL, causing a crash or exploitable condition.

```
value_p = g_malloc (len+1);
```

**Fix:** Always check: ptr = malloc(n); if (!ptr) { handle_error(); return; }
---

### 153. [HIGH] Missing NULL check after allocation

**CWE-476** | `gio/glocalfileinfo.c` line 496

Return value of malloc/realloc not checked for NULL. On allocation failure the program dereferences NULL, causing a crash or exploitable condition.

```
list = g_malloc (list_size);
```

**Fix:** Always check: ptr = malloc(n); if (!ptr) { handle_error(); return; }
---

### 154. [HIGH] Missing NULL check after allocation

**CWE-476** | `gio/glocalfileinfo.c` line 506

Return value of malloc/realloc not checked for NULL. On allocation failure the program dereferences NULL, causing a crash or exploitable condition.

```
list = g_realloc (list, list_size);
```

**Fix:** Always check: ptr = malloc(n); if (!ptr) { handle_error(); return; }
---

### 155. [HIGH] Missing NULL check after allocation

**CWE-476** | `gio/glocalfileinfo.c` line 606

Return value of malloc/realloc not checked for NULL. On allocation failure the program dereferences NULL, causing a crash or exploitable condition.

```
value_p = g_malloc (len + 1);
```

**Fix:** Always check: ptr = malloc(n); if (!ptr) { handle_error(); return; }
---

### 156. [HIGH] Missing NULL check after allocation

**CWE-476** | `gio/glocalfileinfo.c` line 659

Return value of malloc/realloc not checked for NULL. On allocation failure the program dereferences NULL, causing a crash or exploitable condition.

```
list = g_malloc (list_size);
```

**Fix:** Always check: ptr = malloc(n); if (!ptr) { handle_error(); return; }
---

### 157. [HIGH] Missing NULL check after allocation

**CWE-476** | `gio/glocalfileinfo.c` line 669

Return value of malloc/realloc not checked for NULL. On allocation failure the program dereferences NULL, causing a crash or exploitable condition.

```
list = g_realloc (list, list_size);
```

**Fix:** Always check: ptr = malloc(n); if (!ptr) { handle_error(); return; }
---

### 158. [HIGH] Missing NULL check after allocation

**CWE-476** | `gio/glocalfileinfo.c` line 1122

Return value of malloc/realloc not checked for NULL. On allocation failure the program dereferences NULL, causing a crash or exploitable condition.

```
return g_strdup (name);
```

**Fix:** Always check: ptr = malloc(n); if (!ptr) { handle_error(); return; }
---

### 159. [HIGH] Missing NULL check after allocation

**CWE-476** | `gio/glocalfileinfo.c` line 1143

Return value of malloc/realloc not checked for NULL. On allocation failure the program dereferences NULL, causing a crash or exploitable condition.

```
utf8_string = g_strdup (pwd_str);
```

**Fix:** Always check: ptr = malloc(n); if (!ptr) { handle_error(); return; }
---

### 160. [HIGH] Missing NULL check after allocation

**CWE-476** | `gio/glocalfileinfo.c` line 1206

Return value of malloc/realloc not checked for NULL. On allocation failure the program dereferences NULL, causing a crash or exploitable condition.

```
data->real_name = g_strdup (data->user_name);
```

**Fix:** Always check: ptr = malloc(n); if (!ptr) { handle_error(); return; }
---

### 161. [HIGH] Missing NULL check after allocation

**CWE-476** | `gio/glocalfileinfo.c` line 1227

Return value of malloc/realloc not checked for NULL. On allocation failure the program dereferences NULL, causing a crash or exploitable condition.

```
res = g_strdup (data->user_name);
```

**Fix:** Always check: ptr = malloc(n); if (!ptr) { handle_error(); return; }
---

### 162. [HIGH] Missing NULL check after allocation

**CWE-476** | `gio/glocalfileinfo.c` line 1241

Return value of malloc/realloc not checked for NULL. On allocation failure the program dereferences NULL, causing a crash or exploitable condition.

```
res = g_strdup (data->real_name);
```

**Fix:** Always check: ptr = malloc(n); if (!ptr) { handle_error(); return; }
---

### 163. [HIGH] Missing NULL check after allocation

**CWE-476** | `gio/glocalfileinfo.c` line 1292

Return value of malloc/realloc not checked for NULL. On allocation failure the program dereferences NULL, causing a crash or exploitable condition.

```
res = g_strdup (name);
```

**Fix:** Always check: ptr = malloc(n); if (!ptr) { handle_error(); return; }
---

### 164. [HIGH] Missing NULL check after allocation

**CWE-476** | `gio/glocalfileinfo.c` line 1577

Return value of malloc/realloc not checked for NULL. On allocation failure the program dereferences NULL, causing a crash or exploitable condition.

```
name = g_try_malloc (name_len * sizeof (wchar_t));
```

**Fix:** Always check: ptr = malloc(n); if (!ptr) { handle_error(); return; }
---

### 165. [HIGH] Missing NULL check after allocation

**CWE-476** | `gio/glocalfileinfo.c` line 1578

Return value of malloc/realloc not checked for NULL. On allocation failure the program dereferences NULL, causing a crash or exploitable condition.

```
domain = g_try_malloc (domain_len * sizeof (wchar_t));
```

**Fix:** Always check: ptr = malloc(n); if (!ptr) { handle_error(); return; }
---

### 166. [HIGH] Missing NULL check after allocation

**CWE-476** | `gio/glocalfileinfo.c` line 1604

Return value of malloc/realloc not checked for NULL. On allocation failure the program dereferences NULL, causing a crash or exploitable condition.

```
name = g_try_malloc (name_len * sizeof (wchar_t));
```

**Fix:** Always check: ptr = malloc(n); if (!ptr) { handle_error(); return; }
---

### 167. [HIGH] Missing NULL check after allocation

**CWE-476** | `gio/glocalfileinfo.c` line 1605

Return value of malloc/realloc not checked for NULL. On allocation failure the program dereferences NULL, causing a crash or exploitable condition.

```
domain = g_try_malloc (domain_len * sizeof (wchar_t));
```

**Fix:** Always check: ptr = malloc(n); if (!ptr) { handle_error(); return; }
---

### 168. [MEDIUM] Large stack allocation (potential stack overflow)

**CWE-770** | `gio/glocalfileinfo.c` line 1346

alloca() or large fixed VLA on stack. If size is attacker-controlled or too large, stack overflow corrupts adjacent frames.

```
guchar sniff_buffer[16384];
```

**Fix:** Use heap allocation (malloc) for large or variable-sized buffers. Enforce a size cap before alloca().
---

### 169. [HIGH] Use-after-free pattern

**CWE-416** | `gio/tests/gapplication-example-open.c` line 29

Freed pointer not immediately set to NULL. Dangling pointer reuse corrupts heap and can lead to code execution.

```
g_free (uri);
```

**Fix:** Set pointer to NULL immediately after free(). Enable AddressSanitizer in CI: -fsanitize=address.
---

### 170. [HIGH] Use-after-free pattern

**CWE-416** | `gio/gsrvtarget.c` line 246

Freed pointer not immediately set to NULL. Dangling pointer reuse corrupts heap and can lead to code execution.

```
g_srv_target_free (target);
```

**Fix:** Set pointer to NULL immediately after free(). Enable AddressSanitizer in CI: -fsanitize=address.
---

### 171. [HIGH] Use-after-free pattern

**CWE-416** | `gio/gsrvtarget.c` line 247

Freed pointer not immediately set to NULL. Dangling pointer reuse corrupts heap and can lead to code execution.

```
g_list_free (targets);
```

**Fix:** Set pointer to NULL immediately after free(). Enable AddressSanitizer in CI: -fsanitize=address.
---

### 172. [HIGH] Missing NULL check after allocation

**CWE-476** | `gio/gsrvtarget.c` line 89

Return value of malloc/realloc not checked for NULL. On allocation failure the program dereferences NULL, causing a crash or exploitable condition.

```
target->hostname = g_strdup (hostname);
```

**Fix:** Always check: ptr = malloc(n); if (!ptr) { handle_error(); return; }
---

### 173. [HIGH] Use-after-free pattern

**CWE-416** | `gio/kqueue/kqueue-helper.c` line 77

Freed pointer not immediately set to NULL. Dangling pointer reuse corrupts heap and can lead to code execution.

```
g_free (fullname);
```

**Fix:** Set pointer to NULL immediately after free(). Enable AddressSanitizer in CI: -fsanitize=address.
---

### 174. [HIGH] Use-after-free pattern

**CWE-416** | `gio/kqueue/kqueue-helper.c` line 195

Freed pointer not immediately set to NULL. Dangling pointer reuse corrupts heap and can lead to code execution.

```
dl_free (was);
```

**Fix:** Set pointer to NULL immediately after free(). Enable AddressSanitizer in CI: -fsanitize=address.
---

### 175. [HIGH] Missing NULL check after allocation

**CWE-476** | `gio/gmenuexporter.c` line 603

Return value of malloc/realloc not checked for NULL. On allocation failure the program dereferences NULL, causing a crash or exploitable condition.

```
g_hash_table_insert (exporter->remotes, g_strdup (sender), remote);
```

**Fix:** Always check: ptr = malloc(n); if (!ptr) { handle_error(); return; }
---

### 176. [HIGH] Missing NULL check after allocation

**CWE-476** | `gio/gmenuexporter.c` line 796

Return value of malloc/realloc not checked for NULL. On allocation failure the program dereferences NULL, causing a crash or exploitable condition.

```
exporter->object_path = g_strdup (object_path);
```

**Fix:** Always check: ptr = malloc(n); if (!ptr) { handle_error(); return; }
---

### 177. [HIGH] Missing NULL check after allocation

**CWE-476** | `glib/docs.c` line 1658

Return value of malloc/realloc not checked for NULL. On allocation failure the program dereferences NULL, causing a crash or exploitable condition.

```
*   membuf = g_malloc (8192);
```

**Fix:** Always check: ptr = malloc(n); if (!ptr) { handle_error(); return; }
---

### 178. [HIGH] Use-after-free pattern

**CWE-416** | `gio/gactionmap.c` line 251

Freed pointer not immediately set to NULL. Dangling pointer reuse corrupts heap and can lead to code execution.

```
g_error_free (error);
```

**Fix:** Set pointer to NULL immediately after free(). Enable AddressSanitizer in CI: -fsanitize=address.
---

### 179. [HIGH] Use-after-free pattern

**CWE-416** | `fuzzing/fuzz_key.c` line 38

Freed pointer not immediately set to NULL. Dangling pointer reuse corrupts heap and can lead to code execution.

```
g_free (comment);
```

**Fix:** Set pointer to NULL immediately after free(). Enable AddressSanitizer in CI: -fsanitize=address.
---

### 180. [HIGH] Use-after-free pattern

**CWE-416** | `fuzzing/fuzz_key.c` line 43

Freed pointer not immediately set to NULL. Dangling pointer reuse corrupts heap and can lead to code execution.

```
g_key_file_free (key);
```

**Fix:** Set pointer to NULL immediately after free(). Enable AddressSanitizer in CI: -fsanitize=address.
---

### 181. [HIGH] Use-after-free pattern

**CWE-416** | `girepository/gdump.c` line 137

Freed pointer not immediately set to NULL. Dangling pointer reuse corrupts heap and can lead to code execution.

```
g_free (str);
```

**Fix:** Set pointer to NULL immediately after free(). Enable AddressSanitizer in CI: -fsanitize=address.
---

### 182. [HIGH] Use-after-free pattern

**CWE-416** | `girepository/gdump.c` line 317

Freed pointer not immediately set to NULL. Dangling pointer reuse corrupts heap and can lead to code execution.

```
g_free (default_value);
```

**Fix:** Set pointer to NULL immediately after free(). Enable AddressSanitizer in CI: -fsanitize=address.
---

### 183. [HIGH] Use-after-free pattern

**CWE-416** | `girepository/gdump.c` line 320

Freed pointer not immediately set to NULL. Dangling pointer reuse corrupts heap and can lead to code execution.

```
g_free (props);
```

**Fix:** Set pointer to NULL immediately after free(). Enable AddressSanitizer in CI: -fsanitize=address.
---

### 184. [HIGH] Use-after-free pattern

**CWE-416** | `girepository/gdump.c` line 372

Freed pointer not immediately set to NULL. Dangling pointer reuse corrupts heap and can lead to code execution.

```
g_free (sig_ids);
```

**Fix:** Set pointer to NULL immediately after free(). Enable AddressSanitizer in CI: -fsanitize=address.
---

### 185. [HIGH] Use-after-free pattern

**CWE-416** | `girepository/gdump.c` line 422

Freed pointer not immediately set to NULL. Dangling pointer reuse corrupts heap and can lead to code execution.

```
g_free (interfaces);
```

**Fix:** Set pointer to NULL immediately after free(). Enable AddressSanitizer in CI: -fsanitize=address.
---

### 186. [HIGH] Use-after-free pattern

**CWE-416** | `girepository/gdump.c` line 455

Freed pointer not immediately set to NULL. Dangling pointer reuse corrupts heap and can lead to code execution.

```
g_free (interfaces);
```

**Fix:** Set pointer to NULL immediately after free(). Enable AddressSanitizer in CI: -fsanitize=address.
---

### 187. [HIGH] Use-after-free pattern

**CWE-416** | `girepository/gdump.c` line 566

Freed pointer not immediately set to NULL. Dangling pointer reuse corrupts heap and can lead to code execution.

```
g_free (interfaces);
```

**Fix:** Set pointer to NULL immediately after free(). Enable AddressSanitizer in CI: -fsanitize=address.
---

### 188. [HIGH] Use-after-free pattern

**CWE-416** | `girepository/gdump.c` line 719

Freed pointer not immediately set to NULL. Dangling pointer reuse corrupts heap and can lead to code execution.

```
g_free (line);
```

**Fix:** Set pointer to NULL immediately after free(). Enable AddressSanitizer in CI: -fsanitize=address.
---

### 189. [HIGH] Use-after-free pattern

**CWE-416** | `girepository/gdump.c` line 739

Freed pointer not immediately set to NULL. Dangling pointer reuse corrupts heap and can lead to code execution.

```
g_free (line);
```

**Fix:** Set pointer to NULL immediately after free(). Enable AddressSanitizer in CI: -fsanitize=address.
---

### 190. [HIGH] Use-after-free pattern

**CWE-416** | `girepository/gdump.c` line 748

Freed pointer not immediately set to NULL. Dangling pointer reuse corrupts heap and can lead to code execution.

```
g_free (line);
```

**Fix:** Set pointer to NULL immediately after free(). Enable AddressSanitizer in CI: -fsanitize=address.
---

### 191. [HIGH] Missing NULL check after allocation

**CWE-476** | `girepository/gdump.c` line 235

Return value of malloc/realloc not checked for NULL. On allocation failure the program dereferences NULL, causing a crash or exploitable condition.

```
return g_strdup ("NULL");
```

**Fix:** Always check: ptr = malloc(n); if (!ptr) { handle_error(); return; }
---

### 192. [HIGH] Use-after-free pattern

**CWE-416** | `glib/tests/bytes.c` line 293

Freed pointer not immediately set to NULL. Dangling pointer reuse corrupts heap and can lead to code execution.

```
g_free (data);
```

**Fix:** Set pointer to NULL immediately after free(). Enable AddressSanitizer in CI: -fsanitize=address.
---

### 193. [HIGH] Use-after-free pattern

**CWE-416** | `glib/tests/bytes.c` line 311

Freed pointer not immediately set to NULL. Dangling pointer reuse corrupts heap and can lead to code execution.

```
g_free (data);
```

**Fix:** Set pointer to NULL immediately after free(). Enable AddressSanitizer in CI: -fsanitize=address.
---

### 194. [HIGH] Use-after-free pattern

**CWE-416** | `glib/tests/bytes.c` line 331

Freed pointer not immediately set to NULL. Dangling pointer reuse corrupts heap and can lead to code execution.

```
g_free (data);
```

**Fix:** Set pointer to NULL immediately after free(). Enable AddressSanitizer in CI: -fsanitize=address.
---

### 195. [HIGH] Use-after-free pattern

**CWE-416** | `glib/tests/bytes.c` line 349

Freed pointer not immediately set to NULL. Dangling pointer reuse corrupts heap and can lead to code execution.

```
g_free (data);
```

**Fix:** Set pointer to NULL immediately after free(). Enable AddressSanitizer in CI: -fsanitize=address.
---

### 196. [HIGH] Use-after-free pattern

**CWE-416** | `glib/tests/bytes.c` line 399

Freed pointer not immediately set to NULL. Dangling pointer reuse corrupts heap and can lead to code execution.

```
g_free (data);
```

**Fix:** Set pointer to NULL immediately after free(). Enable AddressSanitizer in CI: -fsanitize=address.
---

### 197. [HIGH] Missing NULL check after allocation

**CWE-476** | `glib/tests/bytes.c` line 73

Return value of malloc/realloc not checked for NULL. On allocation failure the program dereferences NULL, causing a crash or exploitable condition.

```
data = g_strdup ("test");
```

**Fix:** Always check: ptr = malloc(n); if (!ptr) { handle_error(); return; }
---

### 198. [HIGH] Missing NULL check after allocation

**CWE-476** | `glib/tests/bytes.c` line 340

Return value of malloc/realloc not checked for NULL. On allocation failure the program dereferences NULL, causing a crash or exploitable condition.

```
gchar *sentinel = g_strdup ("hello");
```

**Fix:** Always check: ptr = malloc(n); if (!ptr) { handle_error(); return; }
---

### 199. [HIGH] Use-after-free pattern

**CWE-416** | `gio/gsubprocess.c` line 235

Freed pointer not immediately set to NULL. Dangling pointer reuse corrupts heap and can lead to code execution.

```
g_free (display_name);
```

**Fix:** Set pointer to NULL immediately after free(). Enable AddressSanitizer in CI: -fsanitize=address.
---

### 200. [HIGH] Use-after-free pattern

**CWE-416** | `gio/gsubprocess.c` line 1496

Freed pointer not immediately set to NULL. Dangling pointer reuse corrupts heap and can lead to code execution.

```
g_error_free (error);
```

**Fix:** Set pointer to NULL immediately after free(). Enable AddressSanitizer in CI: -fsanitize=address.
---

### 201. [HIGH] Use-after-free pattern

**CWE-416** | `gio/gsubprocess.c` line 1933

Freed pointer not immediately set to NULL. Dangling pointer reuse corrupts heap and can lead to code execution.

```
g_free (local_stderr_buf);
```

**Fix:** Set pointer to NULL immediately after free(). Enable AddressSanitizer in CI: -fsanitize=address.
---

### 202. [HIGH] Use-after-free pattern

**CWE-416** | `gio/gsubprocess.c` line 1934

Freed pointer not immediately set to NULL. Dangling pointer reuse corrupts heap and can lead to code execution.

```
g_free (local_stdout_buf);
```

**Fix:** Set pointer to NULL immediately after free(). Enable AddressSanitizer in CI: -fsanitize=address.
---

### 203. [HIGH] Use-after-free pattern

**CWE-416** | `girepository/tests/dump.c` line 97

Freed pointer not immediately set to NULL. Dangling pointer reuse corrupts heap and can lead to code execution.

```
g_free (output);
```

**Fix:** Set pointer to NULL immediately after free(). Enable AddressSanitizer in CI: -fsanitize=address.
---

### 204. [HIGH] Use-after-free pattern

**CWE-416** | `girepository/tests/dump.c` line 98

Freed pointer not immediately set to NULL. Dangling pointer reuse corrupts heap and can lead to code execution.

```
g_free (out_file_path);
```

**Fix:** Set pointer to NULL immediately after free(). Enable AddressSanitizer in CI: -fsanitize=address.
---

### 205. [HIGH] Use-after-free pattern

**CWE-416** | `girepository/tests/dump.c` line 99

Freed pointer not immediately set to NULL. Dangling pointer reuse corrupts heap and can lead to code execution.

```
g_free (in_file_path);
```

**Fix:** Set pointer to NULL immediately after free(). Enable AddressSanitizer in CI: -fsanitize=address.
---

### 206. [HIGH] Use-after-free pattern

**CWE-416** | `girepository/tests/dump.c` line 129

Freed pointer not immediately set to NULL. Dangling pointer reuse corrupts heap and can lead to code execution.

```
g_free (out_file_path);
```

**Fix:** Set pointer to NULL immediately after free(). Enable AddressSanitizer in CI: -fsanitize=address.
---

### 207. [HIGH] Use-after-free pattern

**CWE-416** | `girepository/tests/dump.c` line 130

Freed pointer not immediately set to NULL. Dangling pointer reuse corrupts heap and can lead to code execution.

```
g_free (in_file_path);
```

**Fix:** Set pointer to NULL immediately after free(). Enable AddressSanitizer in CI: -fsanitize=address.
---

### 208. [HIGH] Use-after-free pattern

**CWE-416** | `gio/gproxyaddressenumerator.c` line 172

Freed pointer not immediately set to NULL. Dangling pointer reuse corrupts heap and can lead to code execution.

```
g_error_free (error);
```

**Fix:** Set pointer to NULL immediately after free(). Enable AddressSanitizer in CI: -fsanitize=address.
---

### 209. [HIGH] Use-after-free pattern

**CWE-416** | `gio/gproxyaddressenumerator.c` line 308

Freed pointer not immediately set to NULL. Dangling pointer reuse corrupts heap and can lead to code execution.

```
g_free (dest_hostname);
```

**Fix:** Set pointer to NULL immediately after free(). Enable AddressSanitizer in CI: -fsanitize=address.
---

### 210. [HIGH] Use-after-free pattern

**CWE-416** | `gio/gproxyaddressenumerator.c` line 309

Freed pointer not immediately set to NULL. Dangling pointer reuse corrupts heap and can lead to code execution.

```
g_free (dest_protocol);
```

**Fix:** Set pointer to NULL immediately after free(). Enable AddressSanitizer in CI: -fsanitize=address.
---

### 211. [HIGH] Use-after-free pattern

**CWE-416** | `gio/gproxyaddressenumerator.c` line 321

Freed pointer not immediately set to NULL. Dangling pointer reuse corrupts heap and can lead to code execution.

```
g_error_free (first_error);
```

**Fix:** Set pointer to NULL immediately after free(). Enable AddressSanitizer in CI: -fsanitize=address.
---

### 212. [HIGH] Use-after-free pattern

**CWE-416** | `gio/gproxyaddressenumerator.c` line 410

Freed pointer not immediately set to NULL. Dangling pointer reuse corrupts heap and can lead to code execution.

```
g_free (dest_hostname);
```

**Fix:** Set pointer to NULL immediately after free(). Enable AddressSanitizer in CI: -fsanitize=address.
---

### 213. [HIGH] Use-after-free pattern

**CWE-416** | `gio/gproxyaddressenumerator.c` line 411

Freed pointer not immediately set to NULL. Dangling pointer reuse corrupts heap and can lead to code execution.

```
g_free (dest_protocol);
```

**Fix:** Set pointer to NULL immediately after free(). Enable AddressSanitizer in CI: -fsanitize=address.
---

### 214. [HIGH] Missing NULL check after allocation

**CWE-476** | `gio/gproxyaddressenumerator.c` line 286

Return value of malloc/realloc not checked for NULL. On allocation failure the program dereferences NULL, causing a crash or exploitable condition.

```
dest_hostname = g_strdup (priv->dest_hostname);
```

**Fix:** Always check: ptr = malloc(n); if (!ptr) { handle_error(); return; }
---

### 215. [HIGH] Missing NULL check after allocation

**CWE-476** | `gio/gproxyaddressenumerator.c` line 389

Return value of malloc/realloc not checked for NULL. On allocation failure the program dereferences NULL, causing a crash or exploitable condition.

```
dest_hostname = g_strdup (priv->dest_hostname);
```

**Fix:** Always check: ptr = malloc(n); if (!ptr) { handle_error(); return; }
---

### 216. [CRITICAL] Format string vulnerability

**CWE-134** | `gio/tests/desktop-app-info.c` line 803

User-controlled string passed as printf format argument. Attacker reads stack memory or overwrites return addresses via %n.

```
g_test_fail_printf ("Unable to find expected string '%s' in result '%s'", expected_words[i], result);
```

**Fix:** Use a literal format string: printf("%s", user_input). Never pass user data as the format argument.
---

### 217. [HIGH] Use-after-free pattern

**CWE-416** | `gio/tests/desktop-app-info.c` line 141

Freed pointer not immediately set to NULL. Dangling pointer reuse corrupts heap and can lead to code execution.

```
g_free (path);
```

**Fix:** Set pointer to NULL immediately after free(). Enable AddressSanitizer in CI: -fsanitize=address.
---

### 218. [HIGH] Use-after-free pattern

**CWE-416** | `gio/tests/desktop-app-info.c` line 190

Freed pointer not immediately set to NULL. Dangling pointer reuse corrupts heap and can lead to code execution.

```
g_free (filename);
```

**Fix:** Set pointer to NULL immediately after free(). Enable AddressSanitizer in CI: -fsanitize=address.
---

### 219. [HIGH] Use-after-free pattern

**CWE-416** | `gio/tests/desktop-app-info.c` line 501

Freed pointer not immediately set to NULL. Dangling pointer reuse corrupts heap and can lead to code execution.

```
g_list_free (list);
```

**Fix:** Set pointer to NULL immediately after free(). Enable AddressSanitizer in CI: -fsanitize=address.
---

### 220. [HIGH] Use-after-free pattern

**CWE-416** | `gio/tests/desktop-app-info.c` line 590

Freed pointer not immediately set to NULL. Dangling pointer reuse corrupts heap and can lead to code execution.

```
g_free (s);
```

**Fix:** Set pointer to NULL immediately after free(). Enable AddressSanitizer in CI: -fsanitize=address.
---

### 221. [HIGH] Use-after-free pattern

**CWE-416** | `gio/tests/desktop-app-info.c` line 594

Freed pointer not immediately set to NULL. Dangling pointer reuse corrupts heap and can lead to code execution.

```
g_free (s);
```

**Fix:** Set pointer to NULL immediately after free(). Enable AddressSanitizer in CI: -fsanitize=address.
---

### 222. [HIGH] Use-after-free pattern

**CWE-416** | `gio/tests/desktop-app-info.c` line 601

Freed pointer not immediately set to NULL. Dangling pointer reuse corrupts heap and can lead to code execution.

```
g_free (s);
```

**Fix:** Set pointer to NULL immediately after free(). Enable AddressSanitizer in CI: -fsanitize=address.
---

### 223. [HIGH] Use-after-free pattern

**CWE-416** | `gio/tests/desktop-app-info.c` line 637

Freed pointer not immediately set to NULL. Dangling pointer reuse corrupts heap and can lead to code execution.

```
g_free (path);
```

**Fix:** Set pointer to NULL immediately after free(). Enable AddressSanitizer in CI: -fsanitize=address.
---

### 224. [HIGH] Use-after-free pattern

**CWE-416** | `gio/tests/desktop-app-info.c` line 669

Freed pointer not immediately set to NULL. Dangling pointer reuse corrupts heap and can lead to code execution.

```
g_free (name);
```

**Fix:** Set pointer to NULL immediately after free(). Enable AddressSanitizer in CI: -fsanitize=address.
---

### 225. [HIGH] Use-after-free pattern

**CWE-416** | `gio/tests/desktop-app-info.c` line 673

Freed pointer not immediately set to NULL. Dangling pointer reuse corrupts heap and can lead to code execution.

```
g_free (name);
```

**Fix:** Set pointer to NULL immediately after free(). Enable AddressSanitizer in CI: -fsanitize=address.
---

### 226. [HIGH] Use-after-free pattern

**CWE-416** | `gio/tests/desktop-app-info.c` line 677

Freed pointer not immediately set to NULL. Dangling pointer reuse corrupts heap and can lead to code execution.

```
g_free (name);
```

**Fix:** Set pointer to NULL immediately after free(). Enable AddressSanitizer in CI: -fsanitize=address.
---

### 227. [HIGH] Use-after-free pattern

**CWE-416** | `gio/tests/desktop-app-info.c` line 682

Freed pointer not immediately set to NULL. Dangling pointer reuse corrupts heap and can lead to code execution.

```
g_free (name);
```

**Fix:** Set pointer to NULL immediately after free(). Enable AddressSanitizer in CI: -fsanitize=address.
---

### 228. [HIGH] Use-after-free pattern

**CWE-416** | `gio/tests/desktop-app-info.c` line 703

Freed pointer not immediately set to NULL. Dangling pointer reuse corrupts heap and can lead to code execution.

```
g_free (frob_path);
```

**Fix:** Set pointer to NULL immediately after free(). Enable AddressSanitizer in CI: -fsanitize=address.
---

### 229. [HIGH] Use-after-free pattern

**CWE-416** | `gio/tests/desktop-app-info.c` line 704

Freed pointer not immediately set to NULL. Dangling pointer reuse corrupts heap and can lead to code execution.

```
g_free (tweak_path);
```

**Fix:** Set pointer to NULL immediately after free(). Enable AddressSanitizer in CI: -fsanitize=address.
---

### 230. [HIGH] Use-after-free pattern

**CWE-416** | `gio/tests/desktop-app-info.c` line 705

Freed pointer not immediately set to NULL. Dangling pointer reuse corrupts heap and can lead to code execution.

```
g_free (twiddle_path);
```

**Fix:** Set pointer to NULL immediately after free(). Enable AddressSanitizer in CI: -fsanitize=address.
---

### 231. [HIGH] Use-after-free pattern

**CWE-416** | `gio/tests/desktop-app-info.c` line 741

Freed pointer not immediately set to NULL. Dangling pointer reuse corrupts heap and can lead to code execution.

```
g_free (tmp);
```

**Fix:** Set pointer to NULL immediately after free(). Enable AddressSanitizer in CI: -fsanitize=address.
---

### 232. [HIGH] Use-after-free pattern

**CWE-416** | `gio/tests/desktop-app-info.c` line 750

Freed pointer not immediately set to NULL. Dangling pointer reuse corrupts heap and can lead to code execution.

```
g_free (tmp);
```

**Fix:** Set pointer to NULL immediately after free(). Enable AddressSanitizer in CI: -fsanitize=address.
---

### 233. [HIGH] Use-after-free pattern

**CWE-416** | `gio/tests/desktop-app-info.c` line 778

Freed pointer not immediately set to NULL. Dangling pointer reuse corrupts heap and can lead to code execution.

```
g_free (argv_str);
```

**Fix:** Set pointer to NULL immediately after free(). Enable AddressSanitizer in CI: -fsanitize=address.
---

### 234. [HIGH] Use-after-free pattern

**CWE-416** | `gio/tests/desktop-app-info.c` line 826

Freed pointer not immediately set to NULL. Dangling pointer reuse corrupts heap and can lead to code execution.

```
g_free (result);
```

**Fix:** Set pointer to NULL immediately after free(). Enable AddressSanitizer in CI: -fsanitize=address.
---

### 235. [HIGH] Use-after-free pattern

**CWE-416** | `gio/tests/desktop-app-info.c` line 841

Freed pointer not immediately set to NULL. Dangling pointer reuse corrupts heap and can lead to code execution.

```
g_free (result);
```

**Fix:** Set pointer to NULL immediately after free(). Enable AddressSanitizer in CI: -fsanitize=address.
---

### 236. [HIGH] Use-after-free pattern

**CWE-416** | `gio/tests/desktop-app-info.c` line 865

Freed pointer not immediately set to NULL. Dangling pointer reuse corrupts heap and can lead to code execution.

```
g_free (result);
```

**Fix:** Set pointer to NULL immediately after free(). Enable AddressSanitizer in CI: -fsanitize=address.
---

### 237. [HIGH] Use-after-free pattern

**CWE-416** | `gio/tests/desktop-app-info.c` line 879

Freed pointer not immediately set to NULL. Dangling pointer reuse corrupts heap and can lead to code execution.

```
g_free (result);
```

**Fix:** Set pointer to NULL immediately after free(). Enable AddressSanitizer in CI: -fsanitize=address.
---

### 238. [HIGH] Use-after-free pattern

**CWE-416** | `gio/tests/desktop-app-info.c` line 1048

Freed pointer not immediately set to NULL. Dangling pointer reuse corrupts heap and can lead to code execution.

```
g_free (result);
```

**Fix:** Set pointer to NULL immediately after free(). Enable AddressSanitizer in CI: -fsanitize=address.
---

### 239. [HIGH] Use-after-free pattern

**CWE-416** | `gio/tests/desktop-app-info.c` line 1087

Freed pointer not immediately set to NULL. Dangling pointer reuse corrupts heap and can lead to code execution.

```
g_free (expected_sni);
```

**Fix:** Set pointer to NULL immediately after free(). Enable AddressSanitizer in CI: -fsanitize=address.
---

### 240. [HIGH] Use-after-free pattern

**CWE-416** | `gio/tests/desktop-app-info.c` line 1292

Freed pointer not immediately set to NULL. Dangling pointer reuse corrupts heap and can lead to code execution.

```
g_free (tmpdir);
```

**Fix:** Set pointer to NULL immediately after free(). Enable AddressSanitizer in CI: -fsanitize=address.
---

### 241. [HIGH] Use-after-free pattern

**CWE-416** | `gio/tests/desktop-app-info.c` line 1293

Freed pointer not immediately set to NULL. Dangling pointer reuse corrupts heap and can lead to code execution.

```
g_free (command_line);
```

**Fix:** Set pointer to NULL immediately after free(). Enable AddressSanitizer in CI: -fsanitize=address.
---

### 242. [HIGH] Use-after-free pattern

**CWE-416** | `gio/tests/desktop-app-info.c` line 1327

Freed pointer not immediately set to NULL. Dangling pointer reuse corrupts heap and can lead to code execution.

```
g_free (file_path);
```

**Fix:** Set pointer to NULL immediately after free(). Enable AddressSanitizer in CI: -fsanitize=address.
---

### 243. [HIGH] Use-after-free pattern

**CWE-416** | `gio/tests/desktop-app-info.c` line 1435

Freed pointer not immediately set to NULL. Dangling pointer reuse corrupts heap and can lead to code execution.

```
g_free (file_path);
```

**Fix:** Set pointer to NULL immediately after free(). Enable AddressSanitizer in CI: -fsanitize=address.
---

### 244. [HIGH] Use-after-free pattern

**CWE-416** | `gio/tests/desktop-app-info.c` line 1517

Freed pointer not immediately set to NULL. Dangling pointer reuse corrupts heap and can lead to code execution.

```
g_free (result);
```

**Fix:** Set pointer to NULL immediately after free(). Enable AddressSanitizer in CI: -fsanitize=address.
---

### 245. [HIGH] Use-after-free pattern

**CWE-416** | `gio/tests/desktop-app-info.c` line 1682

Freed pointer not immediately set to NULL. Dangling pointer reuse corrupts heap and can lead to code execution.

```
g_free (key_file_contents);
```

**Fix:** Set pointer to NULL immediately after free(). Enable AddressSanitizer in CI: -fsanitize=address.
---

### 246. [HIGH] Use-after-free pattern

**CWE-416** | `gio/tests/desktop-app-info.c` line 1782

Freed pointer not immediately set to NULL. Dangling pointer reuse corrupts heap and can lead to code execution.

```
g_free (sh);
```

**Fix:** Set pointer to NULL immediately after free(). Enable AddressSanitizer in CI: -fsanitize=address.
---

### 247. [HIGH] Use-after-free pattern

**CWE-416** | `gio/tests/desktop-app-info.c` line 1783

Freed pointer not immediately set to NULL. Dangling pointer reuse corrupts heap and can lead to code execution.

```
g_free (command_line);
```

**Fix:** Set pointer to NULL immediately after free(). Enable AddressSanitizer in CI: -fsanitize=address.
---

### 248. [HIGH] Use-after-free pattern

**CWE-416** | `gio/tests/desktop-app-info.c` line 1784

Freed pointer not immediately set to NULL. Dangling pointer reuse corrupts heap and can lead to code execution.

```
g_free (bin_path);
```

**Fix:** Set pointer to NULL immediately after free(). Enable AddressSanitizer in CI: -fsanitize=address.
---

### 249. [HIGH] Use-after-free pattern

**CWE-416** | `gio/tests/desktop-app-info.c` line 1785

Freed pointer not immediately set to NULL. Dangling pointer reuse corrupts heap and can lead to code execution.

```
g_free (terminal_path);
```

**Fix:** Set pointer to NULL immediately after free(). Enable AddressSanitizer in CI: -fsanitize=address.
---

### 250. [HIGH] Use-after-free pattern

**CWE-416** | `gio/tests/desktop-app-info.c` line 1786

Freed pointer not immediately set to NULL. Dangling pointer reuse corrupts heap and can lead to code execution.

```
g_free (output_fd_path);
```

**Fix:** Set pointer to NULL immediately after free(). Enable AddressSanitizer in CI: -fsanitize=address.
---

### 251. [HIGH] Use-after-free pattern

**CWE-416** | `gio/tests/desktop-app-info.c` line 1787

Freed pointer not immediately set to NULL. Dangling pointer reuse corrupts heap and can lead to code execution.

```
g_free (script_contents);
```

**Fix:** Set pointer to NULL immediately after free(). Enable AddressSanitizer in CI: -fsanitize=address.
---

### 252. [HIGH] Use-after-free pattern

**CWE-416** | `gio/tests/desktop-app-info.c` line 1788

Freed pointer not immediately set to NULL. Dangling pointer reuse corrupts heap and can lead to code execution.

```
g_free (old_path);
```

**Fix:** Set pointer to NULL immediately after free(). Enable AddressSanitizer in CI: -fsanitize=address.
---

### 253. [HIGH] Use-after-free pattern

**CWE-416** | `gio/tests/desktop-app-info.c` line 1829

Freed pointer not immediately set to NULL. Dangling pointer reuse corrupts heap and can lead to code execution.

```
g_free (bin_path);
```

**Fix:** Set pointer to NULL immediately after free(). Enable AddressSanitizer in CI: -fsanitize=address.
---

### 254. [HIGH] Use-after-free pattern

**CWE-416** | `gio/tests/desktop-app-info.c` line 1830

Freed pointer not immediately set to NULL. Dangling pointer reuse corrupts heap and can lead to code execution.

```
g_free (old_path);
```

**Fix:** Set pointer to NULL immediately after free(). Enable AddressSanitizer in CI: -fsanitize=address.
---

### 255. [HIGH] Use-after-free pattern

**CWE-416** | `gio/tests/desktop-app-info.c` line 1948

Freed pointer not immediately set to NULL. Dangling pointer reuse corrupts heap and can lead to code execution.

```
g_free (name);
```

**Fix:** Set pointer to NULL immediately after free(). Enable AddressSanitizer in CI: -fsanitize=address.
---

### 256. [HIGH] Use-after-free pattern

**CWE-416** | `gio/tests/desktop-app-info.c` line 1953

Freed pointer not immediately set to NULL. Dangling pointer reuse corrupts heap and can lead to code execution.

```
g_free (name);
```

**Fix:** Set pointer to NULL immediately after free(). Enable AddressSanitizer in CI: -fsanitize=address.
---

### 257. [HIGH] Use-after-free pattern

**CWE-416** | `gio/tests/desktop-app-info.c` line 1955

Freed pointer not immediately set to NULL. Dangling pointer reuse corrupts heap and can lead to code execution.

```
g_free (apphome);
```

**Fix:** Set pointer to NULL immediately after free(). Enable AddressSanitizer in CI: -fsanitize=address.
---

### 258. [HIGH] Use-after-free pattern

**CWE-416** | `gio/tests/desktop-app-info.c` line 1999

Freed pointer not immediately set to NULL. Dangling pointer reuse corrupts heap and can lead to code execution.

```
g_key_file_free (key_file);
```

**Fix:** Set pointer to NULL immediately after free(). Enable AddressSanitizer in CI: -fsanitize=address.
---

### 259. [HIGH] Use-after-free pattern

**CWE-416** | `gio/tests/desktop-app-info.c` line 2025

Freed pointer not immediately set to NULL. Dangling pointer reuse corrupts heap and can lead to code execution.

```
g_key_file_free (key_file);
```

**Fix:** Set pointer to NULL immediately after free(). Enable AddressSanitizer in CI: -fsanitize=address.
---

### 260. [HIGH] Use-after-free pattern

**CWE-416** | `gio/tests/desktop-app-info.c` line 2170

Freed pointer not immediately set to NULL. Dangling pointer reuse corrupts heap and can lead to code execution.

```
g_free (tmp_filename);
```

**Fix:** Set pointer to NULL immediately after free(). Enable AddressSanitizer in CI: -fsanitize=address.
---

### 261. [HIGH] Use-after-free pattern

**CWE-416** | `gio/tests/desktop-app-info.c` line 2269

Freed pointer not immediately set to NULL. Dangling pointer reuse corrupts heap and can lead to code execution.

```
g_list_free (args);
```

**Fix:** Set pointer to NULL immediately after free(). Enable AddressSanitizer in CI: -fsanitize=address.
---

### 262. [HIGH] Missing NULL check after allocation

**CWE-476** | `gio/tests/desktop-app-info.c` line 68

Return value of malloc/realloc not checked for NULL. On allocation failure the program dereferences NULL, causing a crash or exploitable condition.

```
return g_strdup (test_context->overriden_startup_notify_id);
```

**Fix:** Always check: ptr = malloc(n); if (!ptr) { handle_error(); return; }
---

### 263. [HIGH] Missing NULL check after allocation

**CWE-476** | `gio/tests/desktop-app-info.c` line 71

Return value of malloc/realloc not checked for NULL. On allocation failure the program dereferences NULL, causing a crash or exploitable condition.

```
return g_strdup (g_app_info_get_id (app_info));
```

**Fix:** Always check: ptr = malloc(n); if (!ptr) { handle_error(); return; }
---

### 264. [HIGH] Missing NULL check after allocation

**CWE-476** | `gio/tests/desktop-app-info.c` line 74

Return value of malloc/realloc not checked for NULL. On allocation failure the program dereferences NULL, causing a crash or exploitable condition.

```
return g_strdup (g_app_info_get_display_name (app_info));
```

**Fix:** Always check: ptr = malloc(n); if (!ptr) { handle_error(); return; }
---

### 265. [HIGH] Missing NULL check after allocation

**CWE-476** | `gio/tests/desktop-app-info.c` line 76

Return value of malloc/realloc not checked for NULL. On allocation failure the program dereferences NULL, causing a crash or exploitable condition.

```
return g_strdup (g_app_info_get_commandline (app_info));
```

**Fix:** Always check: ptr = malloc(n); if (!ptr) { handle_error(); return; }
---

### 266. [HIGH] Missing NULL check after allocation

**CWE-476** | `gio/tests/desktop-app-info.c` line 730

Return value of malloc/realloc not checked for NULL. On allocation failure the program dereferences NULL, causing a crash or exploitable condition.

```
argv[1] = g_strdup (command);
```

**Fix:** Always check: ptr = malloc(n); if (!ptr) { handle_error(); return; }
---

### 267. [HIGH] Missing NULL check after allocation

**CWE-476** | `gio/tests/desktop-app-info.c` line 731

Return value of malloc/realloc not checked for NULL. On allocation failure the program dereferences NULL, causing a crash or exploitable condition.

```
argv[2] = g_strdup (arg);
```

**Fix:** Always check: ptr = malloc(n); if (!ptr) { handle_error(); return; }
---

### 268. [HIGH] Missing NULL check after allocation

**CWE-476** | `gio/tests/desktop-app-info.c` line 1611

Return value of malloc/realloc not checked for NULL. On allocation failure the program dereferences NULL, causing a crash or exploitable condition.

```
old_path = g_strdup (g_getenv ("PATH"));
```

**Fix:** Always check: ptr = malloc(n); if (!ptr) { handle_error(); return; }
---

### 269. [HIGH] Missing NULL check after allocation

**CWE-476** | `gio/tests/desktop-app-info.c` line 1811

Return value of malloc/realloc not checked for NULL. On allocation failure the program dereferences NULL, causing a crash or exploitable condition.

```
old_path = g_strdup (g_getenv ("PATH"));
```

**Fix:** Always check: ptr = malloc(n); if (!ptr) { handle_error(); return; }
---

### 270. [HIGH] Use-after-free pattern

**CWE-416** | `girepository/girparser.c` line 700

Freed pointer not immediately set to NULL. Dangling pointer reuse corrupts heap and can lead to code execution.

```
g_free (tmp);
```

**Fix:** Set pointer to NULL immediately after free(). Enable AddressSanitizer in CI: -fsanitize=address.
---

### 271. [HIGH] Use-after-free pattern

**CWE-416** | `girepository/girparser.c` line 726

Freed pointer not immediately set to NULL. Dangling pointer reuse corrupts heap and can lead to code execution.

```
g_free (temporary_type);
```

**Fix:** Set pointer to NULL immediately after free(). Enable AddressSanitizer in CI: -fsanitize=address.
---

### 272. [HIGH] Use-after-free pattern

**CWE-416** | `girepository/girparser.c` line 732

Freed pointer not immediately set to NULL. Dangling pointer reuse corrupts heap and can lead to code execution.

```
g_free (temporary_type);
```

**Fix:** Set pointer to NULL immediately after free(). Enable AddressSanitizer in CI: -fsanitize=address.
---

### 273. [HIGH] Use-after-free pattern

**CWE-416** | `girepository/girparser.c` line 766

Freed pointer not immediately set to NULL. Dangling pointer reuse corrupts heap and can lead to code execution.

```
g_slist_free (seen_values);
```

**Fix:** Set pointer to NULL immediately after free(). Enable AddressSanitizer in CI: -fsanitize=address.
---

### 274. [HIGH] Use-after-free pattern

**CWE-416** | `girepository/girparser.c` line 771

Freed pointer not immediately set to NULL. Dangling pointer reuse corrupts heap and can lead to code execution.

```
g_free (prefixed);
```

**Fix:** Set pointer to NULL immediately after free(). Enable AddressSanitizer in CI: -fsanitize=address.
---

### 275. [HIGH] Use-after-free pattern

**CWE-416** | `girepository/girparser.c` line 801

Freed pointer not immediately set to NULL. Dangling pointer reuse corrupts heap and can lead to code execution.

```
g_free (prefixed);
```

**Fix:** Set pointer to NULL immediately after free(). Enable AddressSanitizer in CI: -fsanitize=address.
---

### 276. [HIGH] Use-after-free pattern

**CWE-416** | `girepository/girparser.c` line 3069

Freed pointer not immediately set to NULL. Dangling pointer reuse corrupts heap and can lead to code execution.

```
g_free (girname);
```

**Fix:** Set pointer to NULL immediately after free(). Enable AddressSanitizer in CI: -fsanitize=address.
---

### 277. [HIGH] Use-after-free pattern

**CWE-416** | `girepository/girparser.c` line 3072

Freed pointer not immediately set to NULL. Dangling pointer reuse corrupts heap and can lead to code execution.

```
g_free (girname);
```

**Fix:** Set pointer to NULL immediately after free(). Enable AddressSanitizer in CI: -fsanitize=address.
---

### 278. [HIGH] Use-after-free pattern

**CWE-416** | `girepository/girparser.c` line 3080

Freed pointer not immediately set to NULL. Dangling pointer reuse corrupts heap and can lead to code execution.

```
g_free (girpath);
```

**Fix:** Set pointer to NULL immediately after free(). Enable AddressSanitizer in CI: -fsanitize=address.
---

### 279. [HIGH] Use-after-free pattern

**CWE-416** | `girepository/girparser.c` line 3087

Freed pointer not immediately set to NULL. Dangling pointer reuse corrupts heap and can lead to code execution.

```
g_free (girpath);
```

**Fix:** Set pointer to NULL immediately after free(). Enable AddressSanitizer in CI: -fsanitize=address.
---

### 280. [HIGH] Use-after-free pattern

**CWE-416** | `girepository/girparser.c` line 3092

Freed pointer not immediately set to NULL. Dangling pointer reuse corrupts heap and can lead to code execution.

```
g_free (buffer);
```

**Fix:** Set pointer to NULL immediately after free(). Enable AddressSanitizer in CI: -fsanitize=address.
---

### 281. [HIGH] Use-after-free pattern

**CWE-416** | `girepository/girparser.c` line 3099

Freed pointer not immediately set to NULL. Dangling pointer reuse corrupts heap and can lead to code execution.

```
g_free (girpath);
```

**Fix:** Set pointer to NULL immediately after free(). Enable AddressSanitizer in CI: -fsanitize=address.
---

### 282. [HIGH] Use-after-free pattern

**CWE-416** | `girepository/girparser.c` line 3102

Freed pointer not immediately set to NULL. Dangling pointer reuse corrupts heap and can lead to code execution.

```
g_free (girpath);
```

**Fix:** Set pointer to NULL immediately after free(). Enable AddressSanitizer in CI: -fsanitize=address.
---

### 283. [HIGH] Use-after-free pattern

**CWE-416** | `girepository/girparser.c` line 3975

Freed pointer not immediately set to NULL. Dangling pointer reuse corrupts heap and can lead to code execution.

```
g_markup_parse_context_free (context);
```

**Fix:** Set pointer to NULL immediately after free(). Enable AddressSanitizer in CI: -fsanitize=address.
---

### 284. [HIGH] Use-after-free pattern

**CWE-416** | `girepository/girparser.c` line 4007

Freed pointer not immediately set to NULL. Dangling pointer reuse corrupts heap and can lead to code execution.

```
g_markup_parse_context_free (context);
```

**Fix:** Set pointer to NULL immediately after free(). Enable AddressSanitizer in CI: -fsanitize=address.
---

### 285. [HIGH] Use-after-free pattern

**CWE-416** | `girepository/girparser.c` line 4067

Freed pointer not immediately set to NULL. Dangling pointer reuse corrupts heap and can lead to code execution.

```
g_free (namespace);
```

**Fix:** Set pointer to NULL immediately after free(). Enable AddressSanitizer in CI: -fsanitize=address.
---

### 286. [HIGH] Use-after-free pattern

**CWE-416** | `girepository/girparser.c` line 4074

Freed pointer not immediately set to NULL. Dangling pointer reuse corrupts heap and can lead to code execution.

```
g_free (namespace);
```

**Fix:** Set pointer to NULL immediately after free(). Enable AddressSanitizer in CI: -fsanitize=address.
---

### 287. [HIGH] Use-after-free pattern

**CWE-416** | `girepository/girparser.c` line 4075

Freed pointer not immediately set to NULL. Dangling pointer reuse corrupts heap and can lead to code execution.

```
g_free (buffer);
```

**Fix:** Set pointer to NULL immediately after free(). Enable AddressSanitizer in CI: -fsanitize=address.
---

### 288. [HIGH] Use-after-free pattern

**CWE-416** | `girepository/girparser.c` line 4086

Freed pointer not immediately set to NULL. Dangling pointer reuse corrupts heap and can lead to code execution.

```
g_free (namespace);
```

**Fix:** Set pointer to NULL immediately after free(). Enable AddressSanitizer in CI: -fsanitize=address.
---

### 289. [HIGH] Use-after-free pattern

**CWE-416** | `girepository/girparser.c` line 4088

Freed pointer not immediately set to NULL. Dangling pointer reuse corrupts heap and can lead to code execution.

```
g_free (buffer);
```

**Fix:** Set pointer to NULL immediately after free(). Enable AddressSanitizer in CI: -fsanitize=address.
---

### 290. [HIGH] Missing NULL check after allocation

**CWE-476** | `girepository/girparser.c` line 592

Return value of malloc/realloc not checked for NULL. On allocation failure the program dereferences NULL, causing a crash or exploitable condition.

```
type->unparsed = g_strdup (str);
```

**Fix:** Always check: ptr = malloc(n); if (!ptr) { handle_error(); return; }
---

### 291. [HIGH] Missing NULL check after allocation

**CWE-476** | `girepository/girparser.c` line 597

Return value of malloc/realloc not checked for NULL. On allocation failure the program dereferences NULL, causing a crash or exploitable condition.

```
temporary_type = g_strdup ("GLib.Type");
```

**Fix:** Always check: ptr = malloc(n); if (!ptr) { handle_error(); return; }
---

### 292. [HIGH] Missing NULL check after allocation

**CWE-476** | `girepository/girparser.c` line 901

Return value of malloc/realloc not checked for NULL. On allocation failure the program dereferences NULL, causing a crash or exploitable condition.

```
((GIIrNode *)boxed)->name = g_strdup (name);
```

**Fix:** Always check: ptr = malloc(n); if (!ptr) { handle_error(); return; }
---

### 293. [HIGH] Missing NULL check after allocation

**CWE-476** | `girepository/girparser.c` line 902

Return value of malloc/realloc not checked for NULL. On allocation failure the program dereferences NULL, causing a crash or exploitable condition.

```
boxed->gtype_name = g_strdup (typename);
```

**Fix:** Always check: ptr = malloc(n); if (!ptr) { handle_error(); return; }
---

### 294. [HIGH] Missing NULL check after allocation

**CWE-476** | `girepository/girparser.c` line 903

Return value of malloc/realloc not checked for NULL. On allocation failure the program dereferences NULL, causing a crash or exploitable condition.

```
boxed->gtype_init = g_strdup (typeinit);
```

**Fix:** Always check: ptr = malloc(n); if (!ptr) { handle_error(); return; }
---

### 295. [HIGH] Missing NULL check after allocation

**CWE-476** | `girepository/girparser.c` line 1005

Return value of malloc/realloc not checked for NULL. On allocation failure the program dereferences NULL, causing a crash or exploitable condition.

```
((GIIrNode *)function)->name = g_strdup (name);
```

**Fix:** Always check: ptr = malloc(n); if (!ptr) { handle_error(); return; }
---

### 296. [HIGH] Missing NULL check after allocation

**CWE-476** | `girepository/girparser.c` line 1006

Return value of malloc/realloc not checked for NULL. On allocation failure the program dereferences NULL, causing a crash or exploitable condition.

```
function->symbol = g_strdup (symbol);
```

**Fix:** Always check: ptr = malloc(n); if (!ptr) { handle_error(); return; }
---

### 297. [HIGH] Missing NULL check after allocation

**CWE-476** | `girepository/girparser.c` line 1030

Return value of malloc/realloc not checked for NULL. On allocation failure the program dereferences NULL, causing a crash or exploitable condition.

```
function->sync_func = g_strdup (sync_func);
```

**Fix:** Always check: ptr = malloc(n); if (!ptr) { handle_error(); return; }
---

### 298. [HIGH] Missing NULL check after allocation

**CWE-476** | `girepository/girparser.c` line 1045

Return value of malloc/realloc not checked for NULL. On allocation failure the program dereferences NULL, causing a crash or exploitable condition.

```
function->async_func = g_strdup (async_func);
```

**Fix:** Always check: ptr = malloc(n); if (!ptr) { handle_error(); return; }
---

### 299. [HIGH] Missing NULL check after allocation

**CWE-476** | `girepository/girparser.c` line 1059

Return value of malloc/realloc not checked for NULL. On allocation failure the program dereferences NULL, causing a crash or exploitable condition.

```
function->finish_func = g_strdup (finish_func);
```

**Fix:** Always check: ptr = malloc(n); if (!ptr) { handle_error(); return; }
---

### 300. [HIGH] Missing NULL check after allocation

**CWE-476** | `girepository/girparser.c` line 1076

Return value of malloc/realloc not checked for NULL. On allocation failure the program dereferences NULL, causing a crash or exploitable condition.

```
function->property = g_strdup (set_property);
```

**Fix:** Always check: ptr = malloc(n); if (!ptr) { handle_error(); return; }
---

### 301. [HIGH] Missing NULL check after allocation

**CWE-476** | `girepository/girparser.c` line 1082

Return value of malloc/realloc not checked for NULL. On allocation failure the program dereferences NULL, causing a crash or exploitable condition.

```
function->property = g_strdup (get_property);
```

**Fix:** Always check: ptr = malloc(n); if (!ptr) { handle_error(); return; }
---

### 302. [HIGH] Missing NULL check after allocation

**CWE-476** | `girepository/girparser.c` line 1359

Return value of malloc/realloc not checked for NULL. On allocation failure the program dereferences NULL, causing a crash or exploitable condition.

```
ctx->current_typed->name = g_strdup (name);
```

**Fix:** Always check: ptr = malloc(n); if (!ptr) { handle_error(); return; }
---

### 303. [HIGH] Missing NULL check after allocation

**CWE-476** | `girepository/girparser.c` line 1537

Return value of malloc/realloc not checked for NULL. On allocation failure the program dereferences NULL, causing a crash or exploitable condition.

```
((GIIrNode *)field)->name = g_strdup (name);
```

**Fix:** Always check: ptr = malloc(n); if (!ptr) { handle_error(); return; }
---

### 304. [HIGH] Missing NULL check after allocation

**CWE-476** | `girepository/girparser.c` line 1600

Return value of malloc/realloc not checked for NULL. On allocation failure the program dereferences NULL, causing a crash or exploitable condition.

```
((GIIrNode *)constant)->name = g_strdup (name);
```

**Fix:** Always check: ptr = malloc(n); if (!ptr) { handle_error(); return; }
---

### 305. [HIGH] Missing NULL check after allocation

**CWE-476** | `girepository/girparser.c` line 1601

Return value of malloc/realloc not checked for NULL. On allocation failure the program dereferences NULL, causing a crash or exploitable condition.

```
constant->value = g_strdup (branch);
```

**Fix:** Always check: ptr = malloc(n); if (!ptr) { handle_error(); return; }
---

### 306. [HIGH] Missing NULL check after allocation

**CWE-476** | `girepository/girparser.c` line 1633

Return value of malloc/realloc not checked for NULL. On allocation failure the program dereferences NULL, causing a crash or exploitable condition.

```
ctx->current_alias = g_strdup (name);
```

**Fix:** Always check: ptr = malloc(n); if (!ptr) { handle_error(); return; }
---

### 307. [HIGH] Missing NULL check after allocation

**CWE-476** | `girepository/girparser.c` line 1679

Return value of malloc/realloc not checked for NULL. On allocation failure the program dereferences NULL, causing a crash or exploitable condition.

```
((GIIrNode *)enum_)->name = g_strdup (name);
```

**Fix:** Always check: ptr = malloc(n); if (!ptr) { handle_error(); return; }
---

### 308. [HIGH] Missing NULL check after allocation

**CWE-476** | `girepository/girparser.c` line 1680

Return value of malloc/realloc not checked for NULL. On allocation failure the program dereferences NULL, causing a crash or exploitable condition.

```
enum_->gtype_name = g_strdup (typename);
```

**Fix:** Always check: ptr = malloc(n); if (!ptr) { handle_error(); return; }
---

### 309. [HIGH] Missing NULL check after allocation

**CWE-476** | `girepository/girparser.c` line 1681

Return value of malloc/realloc not checked for NULL. On allocation failure the program dereferences NULL, causing a crash or exploitable condition.

```
enum_->gtype_init = g_strdup (typeinit);
```

**Fix:** Always check: ptr = malloc(n); if (!ptr) { handle_error(); return; }
---

### 310. [HIGH] Missing NULL check after allocation

**CWE-476** | `girepository/girparser.c` line 1682

Return value of malloc/realloc not checked for NULL. On allocation failure the program dereferences NULL, causing a crash or exploitable condition.

```
enum_->error_domain = g_strdup (error_domain);
```

**Fix:** Always check: ptr = malloc(n); if (!ptr) { handle_error(); return; }
---

### 311. [HIGH] Missing NULL check after allocation

**CWE-476** | `girepository/girparser.c` line 1751

Return value of malloc/realloc not checked for NULL. On allocation failure the program dereferences NULL, causing a crash or exploitable condition.

```
((GIIrNode *)property)->name = g_strdup (name);
```

**Fix:** Always check: ptr = malloc(n); if (!ptr) { handle_error(); return; }
---

### 312. [HIGH] Missing NULL check after allocation

**CWE-476** | `girepository/girparser.c` line 1771

Return value of malloc/realloc not checked for NULL. On allocation failure the program dereferences NULL, causing a crash or exploitable condition.

```
property->setter = g_strdup (setter);
```

**Fix:** Always check: ptr = malloc(n); if (!ptr) { handle_error(); return; }
---

### 313. [HIGH] Missing NULL check after allocation

**CWE-476** | `girepository/girparser.c` line 1772

Return value of malloc/realloc not checked for NULL. On allocation failure the program dereferences NULL, causing a crash or exploitable condition.

```
property->getter = g_strdup (getter);
```

**Fix:** Always check: ptr = malloc(n); if (!ptr) { handle_error(); return; }
---

### 314. [HIGH] Missing NULL check after allocation

**CWE-476** | `girepository/girparser.c` line 1838

Return value of malloc/realloc not checked for NULL. On allocation failure the program dereferences NULL, causing a crash or exploitable condition.

```
((GIIrNode *)value_)->name = g_strdup (name);
```

**Fix:** Always check: ptr = malloc(n); if (!ptr) { handle_error(); return; }
---

### 315. [HIGH] Missing NULL check after allocation

**CWE-476** | `girepository/girparser.c` line 1849

Return value of malloc/realloc not checked for NULL. On allocation failure the program dereferences NULL, causing a crash or exploitable condition.

```
g_strdup (c_identifier));
```

**Fix:** Always check: ptr = malloc(n); if (!ptr) { handle_error(); return; }
---

### 316. [HIGH] Missing NULL check after allocation

**CWE-476** | `girepository/girparser.c` line 1916

Return value of malloc/realloc not checked for NULL. On allocation failure the program dereferences NULL, causing a crash or exploitable condition.

```
((GIIrNode *)constant)->name = g_strdup (name);
```

**Fix:** Always check: ptr = malloc(n); if (!ptr) { handle_error(); return; }
---

### 317. [HIGH] Missing NULL check after allocation

**CWE-476** | `girepository/girparser.c` line 1917

Return value of malloc/realloc not checked for NULL. On allocation failure the program dereferences NULL, causing a crash or exploitable condition.

```
constant->value = g_strdup (value);
```

**Fix:** Always check: ptr = malloc(n); if (!ptr) { handle_error(); return; }
---

### 318. [HIGH] Missing NULL check after allocation

**CWE-476** | `girepository/girparser.c` line 1989

Return value of malloc/realloc not checked for NULL. On allocation failure the program dereferences NULL, causing a crash or exploitable condition.

```
((GIIrNode *)iface)->name = g_strdup (name);
```

**Fix:** Always check: ptr = malloc(n); if (!ptr) { handle_error(); return; }
---

### 319. [HIGH] Missing NULL check after allocation

**CWE-476** | `girepository/girparser.c` line 1990

Return value of malloc/realloc not checked for NULL. On allocation failure the program dereferences NULL, causing a crash or exploitable condition.

```
iface->gtype_name = g_strdup (typename);
```

**Fix:** Always check: ptr = malloc(n); if (!ptr) { handle_error(); return; }
---

### 320. [HIGH] Missing NULL check after allocation

**CWE-476** | `girepository/girparser.c` line 1991

Return value of malloc/realloc not checked for NULL. On allocation failure the program dereferences NULL, causing a crash or exploitable condition.

```
iface->gtype_init = g_strdup (typeinit);
```

**Fix:** Always check: ptr = malloc(n); if (!ptr) { handle_error(); return; }
---

### 321. [HIGH] Missing NULL check after allocation

**CWE-476** | `girepository/girparser.c` line 1992

Return value of malloc/realloc not checked for NULL. On allocation failure the program dereferences NULL, causing a crash or exploitable condition.

```
iface->glib_type_struct = g_strdup (glib_type_struct);
```

**Fix:** Always check: ptr = malloc(n); if (!ptr) { handle_error(); return; }
---

### 322. [HIGH] Missing NULL check after allocation

**CWE-476** | `girepository/girparser.c` line 2067

Return value of malloc/realloc not checked for NULL. On allocation failure the program dereferences NULL, causing a crash or exploitable condition.

```
((GIIrNode *)iface)->name = g_strdup (name);
```

**Fix:** Always check: ptr = malloc(n); if (!ptr) { handle_error(); return; }
---

### 323. [HIGH] Missing NULL check after allocation

**CWE-476** | `girepository/girparser.c` line 2068

Return value of malloc/realloc not checked for NULL. On allocation failure the program dereferences NULL, causing a crash or exploitable condition.

```
iface->gtype_name = g_strdup (typename);
```

**Fix:** Always check: ptr = malloc(n); if (!ptr) { handle_error(); return; }
---

### 324. [HIGH] Missing NULL check after allocation

**CWE-476** | `girepository/girparser.c` line 2069

Return value of malloc/realloc not checked for NULL. On allocation failure the program dereferences NULL, causing a crash or exploitable condition.

```
iface->gtype_init = g_strdup (typeinit);
```

**Fix:** Always check: ptr = malloc(n); if (!ptr) { handle_error(); return; }
---

### 325. [HIGH] Missing NULL check after allocation

**CWE-476** | `girepository/girparser.c` line 2070

Return value of malloc/realloc not checked for NULL. On allocation failure the program dereferences NULL, causing a crash or exploitable condition.

```
iface->parent = g_strdup (parent);
```

**Fix:** Always check: ptr = malloc(n); if (!ptr) { handle_error(); return; }
---

### 326. [HIGH] Missing NULL check after allocation

**CWE-476** | `girepository/girparser.c` line 2071

Return value of malloc/realloc not checked for NULL. On allocation failure the program dereferences NULL, causing a crash or exploitable condition.

```
iface->glib_type_struct = g_strdup (glib_type_struct);
```

**Fix:** Always check: ptr = malloc(n); if (!ptr) { handle_error(); return; }
---

### 327. [HIGH] Missing NULL check after allocation

**CWE-476** | `girepository/girparser.c` line 2083

Return value of malloc/realloc not checked for NULL. On allocation failure the program dereferences NULL, causing a crash or exploitable condition.

```
iface->ref_func = g_strdup (ref_func);
```

**Fix:** Always check: ptr = malloc(n); if (!ptr) { handle_error(); return; }
---

### 328. [HIGH] Missing NULL check after allocation

**CWE-476** | `girepository/girparser.c` line 2085

Return value of malloc/realloc not checked for NULL. On allocation failure the program dereferences NULL, causing a crash or exploitable condition.

```
iface->unref_func = g_strdup (unref_func);
```

**Fix:** Always check: ptr = malloc(n); if (!ptr) { handle_error(); return; }
---

### 329. [HIGH] Missing NULL check after allocation

**CWE-476** | `girepository/girparser.c` line 2087

Return value of malloc/realloc not checked for NULL. On allocation failure the program dereferences NULL, causing a crash or exploitable condition.

```
iface->set_value_func = g_strdup (set_value_func);
```

**Fix:** Always check: ptr = malloc(n); if (!ptr) { handle_error(); return; }
---

### 330. [HIGH] Missing NULL check after allocation

**CWE-476** | `girepository/girparser.c` line 2089

Return value of malloc/realloc not checked for NULL. On allocation failure the program dereferences NULL, causing a crash or exploitable condition.

```
iface->get_value_func = g_strdup (get_value_func);
```

**Fix:** Always check: ptr = malloc(n); if (!ptr) { handle_error(); return; }
---

### 331. [HIGH] Missing NULL check after allocation

**CWE-476** | `girepository/girparser.c` line 2172

Return value of malloc/realloc not checked for NULL. On allocation failure the program dereferences NULL, causing a crash or exploitable condition.

```
value = g_strdup (name);
```

**Fix:** Always check: ptr = malloc(n); if (!ptr) { handle_error(); return; }
---

### 332. [HIGH] Missing NULL check after allocation

**CWE-476** | `girepository/girparser.c` line 2176

Return value of malloc/realloc not checked for NULL. On allocation failure the program dereferences NULL, causing a crash or exploitable condition.

```
value = g_strdup (name);
```

**Fix:** Always check: ptr = malloc(n); if (!ptr) { handle_error(); return; }
---

### 333. [HIGH] Missing NULL check after allocation

**CWE-476** | `girepository/girparser.c` line 2479

Return value of malloc/realloc not checked for NULL. On allocation failure the program dereferences NULL, causing a crash or exploitable condition.

```
g_hash_table_insert (ctx->current_typed->attributes, g_strdup (name), g_strdup (value));
```

**Fix:** Always check: ptr = malloc(n); if (!ptr) { handle_error(); return; }
---

### 334. [HIGH] Missing NULL check after allocation

**CWE-476** | `girepository/girparser.c` line 2483

Return value of malloc/realloc not checked for NULL. On allocation failure the program dereferences NULL, causing a crash or exploitable condition.

```
g_hash_table_insert (curnode->attributes, g_strdup (name), g_strdup (value));
```

**Fix:** Always check: ptr = malloc(n); if (!ptr) { handle_error(); return; }
---

### 335. [HIGH] Missing NULL check after allocation

**CWE-476** | `girepository/girparser.c` line 2583

Return value of malloc/realloc not checked for NULL. On allocation failure the program dereferences NULL, causing a crash or exploitable condition.

```
iface->interfaces = g_list_append (iface->interfaces, g_strdup (name));
```

**Fix:** Always check: ptr = malloc(n); if (!ptr) { handle_error(); return; }
---

### 336. [HIGH] Missing NULL check after allocation

**CWE-476** | `girepository/girparser.c` line 2630

Return value of malloc/realloc not checked for NULL. On allocation failure the program dereferences NULL, causing a crash or exploitable condition.

```
((GIIrNode *)signal)->name = g_strdup (name);
```

**Fix:** Always check: ptr = malloc(n); if (!ptr) { handle_error(); return; }
---

### 337. [HIGH] Missing NULL check after allocation

**CWE-476** | `girepository/girparser.c` line 2723

Return value of malloc/realloc not checked for NULL. On allocation failure the program dereferences NULL, causing a crash or exploitable condition.

```
((GIIrNode *)vfunc)->name = g_strdup (name);
```

**Fix:** Always check: ptr = malloc(n); if (!ptr) { handle_error(); return; }
---

### 338. [HIGH] Missing NULL check after allocation

**CWE-476** | `girepository/girparser.c` line 2788

Return value of malloc/realloc not checked for NULL. On allocation failure the program dereferences NULL, causing a crash or exploitable condition.

```
vfunc->sync_func = g_strdup (sync_func);
```

**Fix:** Always check: ptr = malloc(n); if (!ptr) { handle_error(); return; }
---

### 339. [HIGH] Missing NULL check after allocation

**CWE-476** | `girepository/girparser.c` line 2803

Return value of malloc/realloc not checked for NULL. On allocation failure the program dereferences NULL, causing a crash or exploitable condition.

```
vfunc->async_func = g_strdup (async_func);
```

**Fix:** Always check: ptr = malloc(n); if (!ptr) { handle_error(); return; }
---

### 340. [HIGH] Missing NULL check after allocation

**CWE-476** | `girepository/girparser.c` line 2817

Return value of malloc/realloc not checked for NULL. On allocation failure the program dereferences NULL, causing a crash or exploitable condition.

```
vfunc->finish_func = g_strdup (finish_func);
```

**Fix:** Always check: ptr = malloc(n); if (!ptr) { handle_error(); return; }
---

### 341. [HIGH] Missing NULL check after allocation

**CWE-476** | `girepository/girparser.c` line 2821

Return value of malloc/realloc not checked for NULL. On allocation failure the program dereferences NULL, causing a crash or exploitable condition.

```
vfunc->invoker = g_strdup (invoker);
```

**Fix:** Always check: ptr = malloc(n); if (!ptr) { handle_error(); return; }
---

### 342. [HIGH] Missing NULL check after allocation

**CWE-476** | `girepository/girparser.c` line 2893

Return value of malloc/realloc not checked for NULL. On allocation failure the program dereferences NULL, causing a crash or exploitable condition.

```
((GIIrNode *)struct_)->name = g_strdup (name ? name : "");
```

**Fix:** Always check: ptr = malloc(n); if (!ptr) { handle_error(); return; }
---

### 343. [HIGH] Missing NULL check after allocation

**CWE-476** | `girepository/girparser.c` line 2910

Return value of malloc/realloc not checked for NULL. On allocation failure the program dereferences NULL, causing a crash or exploitable condition.

```
struct_->gtype_name = g_strdup (gtype_name);
```

**Fix:** Always check: ptr = malloc(n); if (!ptr) { handle_error(); return; }
---

### 344. [HIGH] Missing NULL check after allocation

**CWE-476** | `girepository/girparser.c` line 2911

Return value of malloc/realloc not checked for NULL. On allocation failure the program dereferences NULL, causing a crash or exploitable condition.

```
struct_->gtype_init = g_strdup (gtype_init);
```

**Fix:** Always check: ptr = malloc(n); if (!ptr) { handle_error(); return; }
---

### 345. [HIGH] Missing NULL check after allocation

**CWE-476** | `girepository/girparser.c` line 2915

Return value of malloc/realloc not checked for NULL. On allocation failure the program dereferences NULL, causing a crash or exploitable condition.

```
struct_->copy_func = g_strdup (copy_func);
```

**Fix:** Always check: ptr = malloc(n); if (!ptr) { handle_error(); return; }
---

### 346. [HIGH] Missing NULL check after allocation

**CWE-476** | `girepository/girparser.c` line 2916

Return value of malloc/realloc not checked for NULL. On allocation failure the program dereferences NULL, causing a crash or exploitable condition.

```
struct_->free_func = g_strdup (free_func);
```

**Fix:** Always check: ptr = malloc(n); if (!ptr) { handle_error(); return; }
---

### 347. [HIGH] Missing NULL check after allocation

**CWE-476** | `girepository/girparser.c` line 2967

Return value of malloc/realloc not checked for NULL. On allocation failure the program dereferences NULL, causing a crash or exploitable condition.

```
((GIIrNode *)union_)->name = g_strdup (name ? name : "");
```

**Fix:** Always check: ptr = malloc(n); if (!ptr) { handle_error(); return; }
---

### 348. [HIGH] Missing NULL check after allocation

**CWE-476** | `girepository/girparser.c` line 2968

Return value of malloc/realloc not checked for NULL. On allocation failure the program dereferences NULL, causing a crash or exploitable condition.

```
union_->gtype_name = g_strdup (typename);
```

**Fix:** Always check: ptr = malloc(n); if (!ptr) { handle_error(); return; }
---

### 349. [HIGH] Missing NULL check after allocation

**CWE-476** | `girepository/girparser.c` line 2969

Return value of malloc/realloc not checked for NULL. On allocation failure the program dereferences NULL, causing a crash or exploitable condition.

```
union_->gtype_init = g_strdup (typeinit);
```

**Fix:** Always check: ptr = malloc(n); if (!ptr) { handle_error(); return; }
---

### 350. [HIGH] Missing NULL check after allocation

**CWE-476** | `girepository/girparser.c` line 2970

Return value of malloc/realloc not checked for NULL. On allocation failure the program dereferences NULL, causing a crash or exploitable condition.

```
union_->copy_func = g_strdup (copy_func);
```

**Fix:** Always check: ptr = malloc(n); if (!ptr) { handle_error(); return; }
---

### 351. [HIGH] Missing NULL check after allocation

**CWE-476** | `girepository/girparser.c` line 2971

Return value of malloc/realloc not checked for NULL. On allocation failure the program dereferences NULL, causing a crash or exploitable condition.

```
union_->free_func = g_strdup (free_func);
```

**Fix:** Always check: ptr = malloc(n); if (!ptr) { handle_error(); return; }
---

### 352. [HIGH] Missing NULL check after allocation

**CWE-476** | `girepository/girparser.c` line 3407

Return value of malloc/realloc not checked for NULL. On allocation failure the program dereferences NULL, causing a crash or exploitable condition.

```
iface->prerequisites = g_list_append (iface->prerequisites, g_strdup (name));
```

**Fix:** Always check: ptr = malloc(n); if (!ptr) { handle_error(); return; }
---

### 353. [HIGH] Missing NULL check after allocation

**CWE-476** | `girepository/gthash.c` line 81

Return value of malloc/realloc not checked for NULL. On allocation failure the program dereferences NULL, causing a crash or exploitable condition.

```
g_hash_table_insert (builder->strings, g_strdup (str), GUINT_TO_POINTER (value));
```

**Fix:** Always check: ptr = malloc(n); if (!ptr) { handle_error(); return; }
---

### 354. [HIGH] Missing NULL check after allocation

**CWE-476** | `girepository/gthash.c` line 111

Return value of malloc/realloc not checked for NULL. On allocation failure the program dereferences NULL, causing a crash or exploitable condition.

```
strs[i++] = g_strdup (str);
```

**Fix:** Always check: ptr = malloc(n); if (!ptr) { handle_error(); return; }
---

### 355. [HIGH] Use-after-free pattern

**CWE-416** | `fuzzing/fuzz_bookmark.c` line 32

Freed pointer not immediately set to NULL. Dangling pointer reuse corrupts heap and can lead to code execution.

```
g_bookmark_file_free (bookmark);
```

**Fix:** Set pointer to NULL immediately after free(). Enable AddressSanitizer in CI: -fsanitize=address.
---

### 356. [HIGH] Integer overflow in size calculation

**CWE-190** | `girepository/cmph/bmz8.c` line 330

Arithmetic in allocator argument can overflow to a small value, causing under-allocation and subsequent heap overflow.

```
unused_g_values = (cmph_uint8*)realloc(unused_g_values, ((size_t)(unused_g_values_capacity + BUFSIZ))*sizeof(cmph_uint8));
```

**Fix:** Validate sizes before arithmetic. Use calloc(n, size) for n*size. Check: if (n > SIZE_MAX / size) abort().
---

### 357. [HIGH] Integer overflow in size calculation

**CWE-190** | `girepository/cmph/bmz8.c` line 510

Arithmetic in allocator argument can overflow to a small value, causing under-allocation and subsequent heap overflow.

```
bmz8->hashes = (hash_state_t **)malloc(sizeof(hash_state_t *)*(size_t)(nhashes + 1));
```

**Fix:** Validate sizes before arithmetic. Use calloc(n, size) for n*size. Check: if (n > SIZE_MAX / size) abort().
---

### 358. [HIGH] Integer overflow in size calculation

**CWE-190** | `girepository/cmph/bmz8.c` line 529

Arithmetic in allocator argument can overflow to a small value, causing under-allocation and subsequent heap overflow.

```
bmz8->g = (cmph_uint8 *)malloc(sizeof(cmph_uint8)*bmz8->n);
```

**Fix:** Validate sizes before arithmetic. Use calloc(n, size) for n*size. Check: if (n > SIZE_MAX / size) abort().
---

### 359. [HIGH] Use-after-free pattern

**CWE-416** | `girepository/cmph/bmz8.c` line 41

Freed pointer not immediately set to NULL. Dangling pointer reuse corrupts heap and can lead to code execution.

```
free(data);
```

**Fix:** Set pointer to NULL immediately after free(). Enable AddressSanitizer in CI: -fsanitize=address.
---

### 360. [HIGH] Use-after-free pattern

**CWE-416** | `girepository/cmph/bmz8.c` line 171

Freed pointer not immediately set to NULL. Dangling pointer reuse corrupts heap and can lead to code execution.

```
free(used_edges);
```

**Fix:** Set pointer to NULL immediately after free(). Enable AddressSanitizer in CI: -fsanitize=address.
---

### 361. [HIGH] Use-after-free pattern

**CWE-416** | `girepository/cmph/bmz8.c` line 172

Freed pointer not immediately set to NULL. Dangling pointer reuse corrupts heap and can lead to code execution.

```
free(visited);
```

**Fix:** Set pointer to NULL immediately after free(). Enable AddressSanitizer in CI: -fsanitize=address.
---

### 362. [HIGH] Use-after-free pattern

**CWE-416** | `girepository/cmph/bmz8.c` line 316

Freed pointer not immediately set to NULL. Dangling pointer reuse corrupts heap and can lead to code execution.

```
free(unused_g_values);
```

**Fix:** Set pointer to NULL immediately after free(). Enable AddressSanitizer in CI: -fsanitize=address.
---

### 363. [HIGH] Use-after-free pattern

**CWE-416** | `girepository/cmph/bmz8.c` line 363

Freed pointer not immediately set to NULL. Dangling pointer reuse corrupts heap and can lead to code execution.

```
free(unused_g_values);
```

**Fix:** Set pointer to NULL immediately after free(). Enable AddressSanitizer in CI: -fsanitize=address.
---

### 364. [HIGH] Use-after-free pattern

**CWE-416** | `girepository/cmph/bmz8.c` line 474

Freed pointer not immediately set to NULL. Dangling pointer reuse corrupts heap and can lead to code execution.

```
free(buf);
```

**Fix:** Set pointer to NULL immediately after free(). Enable AddressSanitizer in CI: -fsanitize=address.
---

### 365. [HIGH] Use-after-free pattern

**CWE-416** | `girepository/cmph/bmz8.c` line 480

Freed pointer not immediately set to NULL. Dangling pointer reuse corrupts heap and can lead to code execution.

```
free(buf);
```

**Fix:** Set pointer to NULL immediately after free(). Enable AddressSanitizer in CI: -fsanitize=address.
---

### 366. [HIGH] Use-after-free pattern

**CWE-416** | `girepository/cmph/bmz8.c` line 522

Freed pointer not immediately set to NULL. Dangling pointer reuse corrupts heap and can lead to code execution.

```
free(buf);
```

**Fix:** Set pointer to NULL immediately after free(). Enable AddressSanitizer in CI: -fsanitize=address.
---

### 367. [HIGH] Use-after-free pattern

**CWE-416** | `girepository/cmph/bmz8.c` line 562

Freed pointer not immediately set to NULL. Dangling pointer reuse corrupts heap and can lead to code execution.

```
free(data);
```

**Fix:** Set pointer to NULL immediately after free(). Enable AddressSanitizer in CI: -fsanitize=address.
---

### 368. [HIGH] Use-after-free pattern

**CWE-416** | `girepository/cmph/bmz8.c` line 563

Freed pointer not immediately set to NULL. Dangling pointer reuse corrupts heap and can lead to code execution.

```
free(mphf);
```

**Fix:** Set pointer to NULL immediately after free(). Enable AddressSanitizer in CI: -fsanitize=address.
---

### 369. [HIGH] Missing NULL check after allocation

**CWE-476** | `girepository/cmph/bmz8.c` line 26

Return value of malloc/realloc not checked for NULL. On allocation failure the program dereferences NULL, causing a crash or exploitable condition.

```
bmz8 = (bmz8_config_data_t *)malloc(sizeof(bmz8_config_data_t));
```

**Fix:** Always check: ptr = malloc(n); if (!ptr) { handle_error(); return; }
---

### 370. [HIGH] Missing NULL check after allocation

**CWE-476** | `girepository/cmph/bmz8.c` line 82

Return value of malloc/realloc not checked for NULL. On allocation failure the program dereferences NULL, causing a crash or exploitable condition.

```
bmz8->hashes = (hash_state_t **)malloc(sizeof(hash_state_t *)*3);
```

**Fix:** Always check: ptr = malloc(n); if (!ptr) { handle_error(); return; }
---

### 371. [HIGH] Missing NULL check after allocation

**CWE-476** | `girepository/cmph/bmz8.c` line 141

Return value of malloc/realloc not checked for NULL. On allocation failure the program dereferences NULL, causing a crash or exploitable condition.

```
visited = (cmph_uint8 *)malloc((size_t)bmz8->n/8 + 1);
```

**Fix:** Always check: ptr = malloc(n); if (!ptr) { handle_error(); return; }
---

### 372. [HIGH] Missing NULL check after allocation

**CWE-476** | `girepository/cmph/bmz8.c` line 143

Return value of malloc/realloc not checked for NULL. On allocation failure the program dereferences NULL, causing a crash or exploitable condition.

```
used_edges = (cmph_uint8 *)malloc((size_t)bmz8->m/8 + 1);
```

**Fix:** Always check: ptr = malloc(n); if (!ptr) { handle_error(); return; }
---

### 373. [HIGH] Missing NULL check after allocation

**CWE-476** | `girepository/cmph/bmz8.c` line 146

Return value of malloc/realloc not checked for NULL. On allocation failure the program dereferences NULL, causing a crash or exploitable condition.

```
bmz8->g = (cmph_uint8 *)calloc((size_t)bmz8->n, sizeof(cmph_uint8));
```

**Fix:** Always check: ptr = malloc(n); if (!ptr) { handle_error(); return; }
---

### 374. [HIGH] Missing NULL check after allocation

**CWE-476** | `girepository/cmph/bmz8.c` line 181

Return value of malloc/realloc not checked for NULL. On allocation failure the program dereferences NULL, causing a crash or exploitable condition.

```
mphf = (cmph_t *)malloc(sizeof(cmph_t));
```

**Fix:** Always check: ptr = malloc(n); if (!ptr) { handle_error(); return; }
---

### 375. [HIGH] Missing NULL check after allocation

**CWE-476** | `girepository/cmph/bmz8.c` line 183

Return value of malloc/realloc not checked for NULL. On allocation failure the program dereferences NULL, causing a crash or exploitable condition.

```
bmz8f = (bmz8_data_t *)malloc(sizeof(bmz8_data_t));
```

**Fix:** Always check: ptr = malloc(n); if (!ptr) { handle_error(); return; }
---

### 376. [HIGH] Missing NULL check after allocation

**CWE-476** | `girepository/cmph/bmz8.c` line 330

Return value of malloc/realloc not checked for NULL. On allocation failure the program dereferences NULL, causing a crash or exploitable condition.

```
unused_g_values = (cmph_uint8*)realloc(unused_g_values, ((size_t)(unused_g_values_capacity + BUFSIZ))*sizeof(cmph_uint8));
```

**Fix:** Always check: ptr = malloc(n); if (!ptr) { handle_error(); return; }
---

### 377. [HIGH] Missing NULL check after allocation

**CWE-476** | `girepository/cmph/bmz8.c` line 505

Return value of malloc/realloc not checked for NULL. On allocation failure the program dereferences NULL, causing a crash or exploitable condition.

```
bmz8_data_t *bmz8 = (bmz8_data_t *)malloc(sizeof(bmz8_data_t));
```

**Fix:** Always check: ptr = malloc(n); if (!ptr) { handle_error(); return; }
---

### 378. [HIGH] Missing NULL check after allocation

**CWE-476** | `girepository/cmph/bmz8.c` line 510

Return value of malloc/realloc not checked for NULL. On allocation failure the program dereferences NULL, causing a crash or exploitable condition.

```
bmz8->hashes = (hash_state_t **)malloc(sizeof(hash_state_t *)*(size_t)(nhashes + 1));
```

**Fix:** Always check: ptr = malloc(n); if (!ptr) { handle_error(); return; }
---

### 379. [HIGH] Missing NULL check after allocation

**CWE-476** | `girepository/cmph/bmz8.c` line 518

Return value of malloc/realloc not checked for NULL. On allocation failure the program dereferences NULL, causing a crash or exploitable condition.

```
buf = (char *)malloc((size_t)buflen);
```

**Fix:** Always check: ptr = malloc(n); if (!ptr) { handle_error(); return; }
---

### 380. [HIGH] Missing NULL check after allocation

**CWE-476** | `girepository/cmph/bmz8.c` line 529

Return value of malloc/realloc not checked for NULL. On allocation failure the program dereferences NULL, causing a crash or exploitable condition.

```
bmz8->g = (cmph_uint8 *)malloc(sizeof(cmph_uint8)*bmz8->n);
```

**Fix:** Always check: ptr = malloc(n); if (!ptr) { handle_error(); return; }
---

### 381. [CRITICAL] Format string vulnerability

**CWE-134** | `glib/gvariant.h` line 107

User-controlled string passed as printf format argument. Attacker reads stack memory or overwrites return addresses via %n.

```
GVariant *                      g_variant_new_printf                    (const gchar          *format_string,
```

**Fix:** Use a literal format string: printf("%s", user_input). Never pass user data as the format argument.
---

### 382. [HIGH] Use-after-free pattern

**CWE-416** | `glib/gmem.c` line 49

Freed pointer not immediately set to NULL. Dangling pointer reuse corrupts heap and can lead to code execution.

```
# define aligned_free(x) _aligned_free (x)
```

**Fix:** Set pointer to NULL immediately after free(). Enable AddressSanitizer in CI: -fsanitize=address.
---

### 383. [HIGH] Use-after-free pattern

**CWE-416** | `glib/gmem.c` line 51

Freed pointer not immediately set to NULL. Dangling pointer reuse corrupts heap and can lead to code execution.

```
# define aligned_free(x) free (x)
```

**Fix:** Set pointer to NULL immediately after free(). Enable AddressSanitizer in CI: -fsanitize=address.
---

### 384. [HIGH] Use-after-free pattern

**CWE-416** | `glib/gmem.c` line 180

Freed pointer not immediately set to NULL. Dangling pointer reuse corrupts heap and can lead to code execution.

```
free (mem);
```

**Fix:** Set pointer to NULL immediately after free(). Enable AddressSanitizer in CI: -fsanitize=address.
---

### 385. [HIGH] Use-after-free pattern

**CWE-416** | `glib/gmem.c` line 208

Freed pointer not immediately set to NULL. Dangling pointer reuse corrupts heap and can lead to code execution.

```
free (mem);
```

**Fix:** Set pointer to NULL immediately after free(). Enable AddressSanitizer in CI: -fsanitize=address.
---

### 386. [HIGH] Use-after-free pattern

**CWE-416** | `glib/gmem.c` line 238

Freed pointer not immediately set to NULL. Dangling pointer reuse corrupts heap and can lead to code execution.

```
free (mem);
```

**Fix:** Set pointer to NULL immediately after free(). Enable AddressSanitizer in CI: -fsanitize=address.
---

### 387. [HIGH] Use-after-free pattern

**CWE-416** | `glib/gmem.c` line 375

Freed pointer not immediately set to NULL. Dangling pointer reuse corrupts heap and can lead to code execution.

```
free (mem);
```

**Fix:** Set pointer to NULL immediately after free(). Enable AddressSanitizer in CI: -fsanitize=address.
---

### 388. [HIGH] Use-after-free pattern

**CWE-416** | `glib/gmem.c` line 744

Freed pointer not immediately set to NULL. Dangling pointer reuse corrupts heap and can lead to code execution.

```
aligned_free (mem);
```

**Fix:** Set pointer to NULL immediately after free(). Enable AddressSanitizer in CI: -fsanitize=address.
---

### 389. [HIGH] Use-after-free pattern

**CWE-416** | `glib/gmem.c` line 773

Freed pointer not immediately set to NULL. Dangling pointer reuse corrupts heap and can lead to code execution.

```
aligned_free (mem);
```

**Fix:** Set pointer to NULL immediately after free(). Enable AddressSanitizer in CI: -fsanitize=address.
---

### 390. [HIGH] Missing NULL check after allocation

**CWE-476** | `glib/gmem.c` line 100

Return value of malloc/realloc not checked for NULL. On allocation failure the program dereferences NULL, causing a crash or exploitable condition.

```
mem = malloc (n_bytes);
```

**Fix:** Always check: ptr = malloc(n); if (!ptr) { handle_error(); return; }
---

### 391. [HIGH] Missing NULL check after allocation

**CWE-476** | `glib/gmem.c` line 133

Return value of malloc/realloc not checked for NULL. On allocation failure the program dereferences NULL, causing a crash or exploitable condition.

```
mem = calloc (1, n_bytes);
```

**Fix:** Always check: ptr = malloc(n); if (!ptr) { handle_error(); return; }
---

### 392. [HIGH] Missing NULL check after allocation

**CWE-476** | `glib/gmem.c` line 171

Return value of malloc/realloc not checked for NULL. On allocation failure the program dereferences NULL, causing a crash or exploitable condition.

```
newmem = realloc (mem, n_bytes);
```

**Fix:** Always check: ptr = malloc(n); if (!ptr) { handle_error(); return; }
---

### 393. [HIGH] Missing NULL check after allocation

**CWE-476** | `glib/gmem.c` line 319

Return value of malloc/realloc not checked for NULL. On allocation failure the program dereferences NULL, causing a crash or exploitable condition.

```
mem = malloc (n_bytes);
```

**Fix:** Always check: ptr = malloc(n); if (!ptr) { handle_error(); return; }
---

### 394. [HIGH] Missing NULL check after allocation

**CWE-476** | `glib/gmem.c` line 344

Return value of malloc/realloc not checked for NULL. On allocation failure the program dereferences NULL, causing a crash or exploitable condition.

```
mem = calloc (1, n_bytes);
```

**Fix:** Always check: ptr = malloc(n); if (!ptr) { handle_error(); return; }
---

### 395. [HIGH] Missing NULL check after allocation

**CWE-476** | `glib/gmem.c` line 371

Return value of malloc/realloc not checked for NULL. On allocation failure the program dereferences NULL, causing a crash or exploitable condition.

```
newmem = realloc (mem, n_bytes);
```

**Fix:** Always check: ptr = malloc(n); if (!ptr) { handle_error(); return; }
---

### 396. [HIGH] Missing NULL check after allocation

**CWE-476** | `glib/gmem.c` line 410

Return value of malloc/realloc not checked for NULL. On allocation failure the program dereferences NULL, causing a crash or exploitable condition.

```
return g_malloc (len);
```

**Fix:** Always check: ptr = malloc(n); if (!ptr) { handle_error(); return; }
---

### 397. [HIGH] Missing NULL check after allocation

**CWE-476** | `glib/gmem.c` line 470

Return value of malloc/realloc not checked for NULL. On allocation failure the program dereferences NULL, causing a crash or exploitable condition.

```
return g_realloc (mem, len);
```

**Fix:** Always check: ptr = malloc(n); if (!ptr) { handle_error(); return; }
---

### 398. [HIGH] Missing NULL check after allocation

**CWE-476** | `glib/gmem.c` line 493

Return value of malloc/realloc not checked for NULL. On allocation failure the program dereferences NULL, causing a crash or exploitable condition.

```
return g_try_malloc (len);
```

**Fix:** Always check: ptr = malloc(n); if (!ptr) { handle_error(); return; }
---

### 399. [HIGH] Missing NULL check after allocation

**CWE-476** | `glib/gmem.c` line 541

Return value of malloc/realloc not checked for NULL. On allocation failure the program dereferences NULL, causing a crash or exploitable condition.

```
return g_try_realloc (mem, len);
```

**Fix:** Always check: ptr = malloc(n); if (!ptr) { handle_error(); return; }
---

### 400. [HIGH] Use-after-free pattern

**CWE-416** | `glib/tests/642026.c` line 90

Freed pointer not immediately set to NULL. Dangling pointer reuse corrupts heap and can lead to code execution.

```
g_cond_free (cond);
```

**Fix:** Set pointer to NULL immediately after free(). Enable AddressSanitizer in CI: -fsanitize=address.
---

### 401. [HIGH] Use-after-free pattern

**CWE-416** | `glib/tests/642026.c` line 92

Freed pointer not immediately set to NULL. Dangling pointer reuse corrupts heap and can lead to code execution.

```
g_mutex_free (mutex);
```

**Fix:** Set pointer to NULL immediately after free(). Enable AddressSanitizer in CI: -fsanitize=address.
---
