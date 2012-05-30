#pragma once

#include <exception>

#if defined(HADES_MSVC)
#pragma warning(push, 1)
#endif // #if defined(HADES_MSVC)
#if defined(HADES_INTEL)
#pragma warning(push)
#pragma warning(disable: 367 869 1628 1879)
#endif // #if defined(HADES_INTEL)
#include <boost/exception/all.hpp>
#if defined(HADES_MSVC)
#pragma warning(pop)
#endif // #if defined(HADES_MSVC)
#if defined(HADES_INTEL)
#pragma warning(pop)
#endif // #if defined(HADES_INTEL)

namespace hadesmem
{

class HadesMemError : public virtual std::exception, 
  public virtual boost::exception
{ };

typedef boost::error_info<struct TagErrorFunc, std::string> ErrorFunction;
typedef boost::error_info<struct TagErrorString, std::string> ErrorString;
typedef boost::error_info<struct TagErrorCodeWinRet, DWORD_PTR> 
  ErrorCodeWinRet;
typedef boost::error_info<struct TagErrorCodeWinLast, DWORD> ErrorCodeWinLast;
typedef boost::error_info<struct TagErrorCodeWinOther, DWORD_PTR> 
  ErrorCodeWinOther;
typedef boost::error_info<struct TagErrorCodeOther, DWORD_PTR> ErrorCodeOther;

}