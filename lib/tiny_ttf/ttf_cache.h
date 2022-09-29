#ifndef LV_INT_CACHE_H
#define LV_INT_CACHE_H
typedef void* ttf_cache_handle_t;
#ifdef __cplusplus
extern "C" {
#endif
ttf_cache_handle_t ttf_cache_create(int max_size, int buckets);
void* ttf_cache_get(ttf_cache_handle_t handle, int key);
void* ttf_cache_add(ttf_cache_handle_t handle, int key, int size);
void ttf_cache_destroy(ttf_cache_handle_t handle);
void ttf_cache_clear(ttf_cache_handle_t handle);
#ifdef __cplusplus
}
#endif
#endif // LV_INT_CACHE_H