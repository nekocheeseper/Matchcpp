#ifndef MATCHCPP_20261117
#define MATCHCPP_20261117

#ifndef _ALLOW_KEYWORD_MACROS
#define _ALLOW_KEYWORD_MACROS
#endif

#ifdef match
    #if defined(_MSC_VER)
        #pragma message("Matchcpp: 'match' macro already defined, undefining it.")
    #else
        #warning "Matchcpp: 'match' macro already defined, undefining it."
    #endif
#undef match
#endif

#ifdef case
    #if defined(_MSC_VER)
        #pragma message("Matchcpp: 'match' macro already defined, undefining it.")
    #else
        #warning "Matchcpp: 'match' macro already defined, undefining it."
    #endif
#undef case
#endif

#ifdef default
    #if defined(_MSC_VER)
        #pragma message("Matchcpp: 'match' macro already defined, undefining it.")
    #else
        #warning "Matchcpp: 'match' macro already defined, undefining it."
    #endif
#undef default
#endif


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

#endif
