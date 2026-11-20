#ifndef MATCHCPP_20261117
#define MATCHCPP_20261117

// Bypass xkeycheck.h keyword macro checks
#ifndef _ALLOW_KEYWORD_MACROS
#define _ALLOW_KEYWORD_MACROS
#endif // _ALLOW_KEYWORD_MACROS

#ifdef match
#if defined(_MSC_VER)
#pragma message("Matchcpp: 'match' macro already defined, undefining it.")
#else
#warning "Matchcpp: 'match' macro already defined, undefining it."
#endif
#undef match
#endif // match

#ifdef case
#if defined(_MSC_VER)
#pragma message("Matchcpp: 'case' macro already defined, undefining it.")
#else
#warning "Matchcpp: 'case' macro already defined, undefining it."
#endif
#undef case
#endif // case

#ifdef default
#if defined(_MSC_VER)
#pragma message("Matchcpp: 'default' macro already defined, undefining it.")
#else
#warning "Matchcpp: 'default' macro already defined, undefining it."
#endif
#undef default
#endif // default


#define match(...) \
    for (bool private_match_matched = true; private_match_matched; private_match_matched = false) \
        for (const auto& _ = (__VA_ARGS__); private_match_matched; private_match_matched = false)

#define case(...) \
    if (_ == (__VA_ARGS__)) \
        if (private_match_matched = false, false) {} \
        else

#define default() \
    if (private_match_matched) \
        if (private_match_matched = false, false) {} \
        else

#endif // MATCHCPP_20261117