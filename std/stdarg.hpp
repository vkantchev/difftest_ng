/*************************************************************************
** Written by Thomas Richter (THOR Software) for Accusoft	        **
** All Rights Reserved							**
**************************************************************************

This source file is part of difftest_ng, a universal image measuring
and conversion framework.

    difftest_ng is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    difftest_ng is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with difftest_ng.  If not, see <http://www.gnu.org/licenses/>.

*************************************************************************/

/*
** This is an Os abstraction of the stdlib
** include file. It might possibly contain fixes for
** various Os derivations from the intended stdlib.
**
** $Id: stdarg.hpp,v 1.5 2017/01/31 11:58:05 thor Exp $
*/

#ifndef STDARG_HPP
#define STDARG_HPP
#include "config.h"

#if defined(HAVE_STDARG_H)
#include <stdarg.h>
#else
#error "No stdarg.h header available, won't compile without"
#endif

#endif
