#pragma once

#ifdef PROJECTDll_EXPORTS
#define PROJECTDll_API extern "C" __declspec(dllexport)
#else
#define PROJECTDll_API extern "C" __declspec(dllimport)
#endif

PROJECTDll_API int PalindromeCounter(const wchar_t* text);