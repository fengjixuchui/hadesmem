// Copyright Joshua Boyce 2010-2012.
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
// http://www.boost.org/LICENSE_1_0.txt)
// This file is part of HadesMem.
// <http://www.raptorfactor.com/> <raptorfactor@raptorfactor.com>

#pragma once

#include "hadesmem/config.hpp"

namespace hadesmem
{

namespace detail
{

#ifndef HADESMEM_NO_VARIADIC_TEMPLATES
 
template <typename FuncT>
struct FuncArgs
{ };

template <typename R, typename... Args>
struct FuncArgs<R (*)(Args...)>
{
  typedef std::tuple<Args...> type;
};

#else // #ifndef HADESMEM_NO_VARIADIC_TEMPLATES
  
template <typename FuncT>
struct FuncArgs
{ };

template <typename R>
struct FuncArgs<R (*)()>
{ };

template <typename R, typename A0>
struct FuncArgs<R (*)(A0)>
{
  typedef std::tuple<A0> type;
};

template <typename R, typename A0, typename A1>
struct FuncArgs<R (*)(A0, A1)>
{
  typedef std::tuple<A0, A1> type;
};

template <typename R, typename A0, typename A1, typename A2>
struct FuncArgs<R (*)(A0, A1, A2)>
{
  typedef std::tuple<A0, A1, A2> type;
};

template <typename R, typename A0, typename A1, typename A2, typename A3>
struct FuncArgs<R (*)(A0, A1, A2, A3)>
{
  typedef std::tuple<A0, A1, A2, A3> type;
};

template <typename R, typename A0, typename A1, typename A2, typename A3, 
  typename A4>
struct FuncArgs<R (*)(A0, A1, A2, A3, A4)>
{
  typedef std::tuple<A0, A1, A2, A3, A4> type;
};

template <typename R, typename A0, typename A1, typename A2, typename A3, 
  typename A4, typename A5>
struct FuncArgs<R (*)(A0, A1, A2, A3, A4, A5)>
{
  typedef std::tuple<A0, A1, A2, A3, A4, A5> type;
};

template <typename R, typename A0, typename A1, typename A2, typename A3, 
  typename A4, typename A5, typename A6>
struct FuncArgs<R (*)(A0, A1, A2, A3, A4, A5, A6)>
{
  typedef std::tuple<A0, A1, A2, A3, A4, A5, A6> type;
};

template <typename R, typename A0, typename A1, typename A2, typename A3, 
  typename A4, typename A5, typename A6, typename A7>
struct FuncArgs<R (*)(A0, A1, A2, A3, A4, A5, A6, A7)>
{
  typedef std::tuple<A0, A1, A2, A3, A4, A5, A6, A7> type;
};

template <typename R, typename A0, typename A1, typename A2, typename A3, 
  typename A4, typename A5, typename A6, typename A7, typename A8>
struct FuncArgs<R (*)(A0, A1, A2, A3, A4, A5, A6, A7, A8)>
{
  typedef std::tuple<A0, A1, A2, A3, A4, A5, A6, A7, A8> type;
};

template <typename R, typename A0, typename A1, typename A2, typename A3, 
  typename A4, typename A5, typename A6, typename A7, typename A8, typename A9>
struct FuncArgs<R (*)(A0, A1, A2, A3, A4, A5, A6, A7, A8, A9)>
{
  typedef std::tuple<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9> type;
};

#endif // #ifndef HADESMEM_NO_VARIADIC_TEMPLATES

}

}