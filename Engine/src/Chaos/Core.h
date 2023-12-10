//
// Created by luizh on 07/12/2023.
//

#ifndef CORE_H
#define CORE_H

#define BIT(x) (1 << x)

#ifdef CHAOS_ENABLE_ASSERTS
    #define CHAOS_ASSERT(x, ...) { if(!(x)) { CHAOS_ERROR("Assertion Failed: {0}", __VA_ARGS__); __debugbreak(); } }
    #define CHAOS_CORE_ASSERT(x, ...) { if(!(x)) { CHAOS_CORE_ERROR("Assertion Failed: {0}", __VA_ARGS__); __debugbreak(); } }
#else
    #define CHAOS_ASSERT(x, ...)
    #define CHAOS_CORE_ASSERT(x, ...)
#endif //CHAOS_ENABLE_ASSERTS

#endif //CORE_H
