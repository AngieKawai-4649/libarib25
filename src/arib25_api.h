
#ifndef ARIB25_API_EXPORT_H
#define ARIB25_API_EXPORT_H

#ifdef ARIB25_API_STATIC_DEFINE
#  define ARIB25_API_EXPORT
#  define ARIB25_API_NO_EXPORT
#else
#  ifndef ARIB25_API_EXPORT
#    ifdef ARIB25_DLL
        /* We are building this library */
#      define ARIB25_API_EXPORT __attribute__((visibility("default")))
#    else
        /* We are using this library */
#      define ARIB25_API_EXPORT __attribute__((visibility("default")))
#    endif
#  endif

#  ifndef ARIB25_API_NO_EXPORT
#    define ARIB25_API_NO_EXPORT __attribute__((visibility("hidden")))
#  endif
#endif

#ifndef ARIB25_API_DEPRECATED
#  define ARIB25_API_DEPRECATED __attribute__ ((__deprecated__))
#endif

#ifndef ARIB25_API_DEPRECATED_EXPORT
#  define ARIB25_API_DEPRECATED_EXPORT ARIB25_API_EXPORT ARIB25_API_DEPRECATED
#endif

#ifndef ARIB25_API_DEPRECATED_NO_EXPORT
#  define ARIB25_API_DEPRECATED_NO_EXPORT ARIB25_API_NO_EXPORT ARIB25_API_DEPRECATED
#endif

#if 0 /* DEFINE_NO_DEPRECATED */
#  ifndef ARIB25_API_NO_DEPRECATED
#    define ARIB25_API_NO_DEPRECATED
#  endif
#endif

#endif /* ARIB25_API_EXPORT_H */
