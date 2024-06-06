#ifndef _LIMITS_H_
#define _LIMITS_H_

#ifdef __cplusplus
extern "C" {
#endif

#define SCHAR_MIN (-0x7F - 1)
#define SCHAR_MAX 0x7F
#define UCHAR_MAX 0xFFU

#if defined(__MWERKS__) && __option(unsigned_char)
#define CHAR_MIN 0U
#define CHAR_MAX UCHAR_MAX
#else
#define CHAR_MIN SCHAR_MIN
#define CHAR_MAX SCHAR_MAX
#endif

#define SHRT_MIN (-0x7FFF - 1)
#define SHRT_MAX 0x7FFF
#define USHRT_MAX 0xFFFFU

#define INT_MIN (-0x7FFFFFFF - 1)
#define INT_MAX 0x7FFFFFFF
#define UINT_MAX 0xFFFFFFFFU

#define LONG_MIN (-0x7FFFFFFFL - 1)
#define LONG_MAX 0x7FFFFFFFL
#define ULONG_MAX 0xFFFFFFFFUL

#ifdef __cplusplus
} // extern "C"

namespace std {
template <typename T>
class numeric_limits {
public:
	inline static T min();
	inline static T max();
};

template <>
class numeric_limits<char> {
public:
	inline static char min() { return -0x80; }
	inline static char max() { return 0x7F; }
};

template <>
class numeric_limits<short> {
public:
	inline static short min() { return -0x8000; }
	inline static short max() { return 0x7FFF; }
};

template <>
class numeric_limits<int> {
public:
	inline static int min() { return -0x80000000; }
	inline static int max() { return 0x7FFFFFFF; }
};

template <>
class numeric_limits<long> {
public:
	inline static long min() { return -0x80000000; }
	inline static long max() { return 0x7FFFFFFF; }
};

template <>
class numeric_limits<unsigned char> {
public:
	inline static unsigned char min() { return 0x0; }
	inline static unsigned char max() { return 0xFF; }
};

template <>
class numeric_limits<unsigned short> {
public:
	inline static unsigned short min() { return 0x0; }
	inline static unsigned short max() { return 0xFFFF; }
};

template <>
class numeric_limits<unsigned int> {
public:
	inline static unsigned int min() { return 0x0; }
	inline static unsigned int max() { return 0xFFFFFFFF; }
};

template <>
class numeric_limits<unsigned long> {
public:
	inline static unsigned long min() { return 0x0; }
	inline static unsigned long max() { return 0xFFFFFFFF; }
};

} // namespace std
#endif

#endif
