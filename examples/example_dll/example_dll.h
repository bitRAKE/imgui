// The following ifdef block is the standard way of creating macros which make exporting
// from a DLL simpler. All files within this DLL are compiled with the EXAMPLEDLL_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see
// EXAMPLEDLL_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef EXAMPLEDLL_EXPORTS
#define EXAMPLEDLL_API __declspec(dllexport)
#else
#define EXAMPLEDLL_API __declspec(dllimport)
#endif

// This class is exported from the dll
class EXAMPLEDLL_API Cexampledll {
public:
	Cexampledll(void);
	// TODO: add your methods here.
};

extern EXAMPLEDLL_API int nexampledll;

EXAMPLEDLL_API int fnexampledll(void);
