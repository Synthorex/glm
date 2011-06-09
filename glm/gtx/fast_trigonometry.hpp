///////////////////////////////////////////////////////////////////////////////////
/// OpenGL Mathematics (glm.g-truc.net)
///
/// Copyright (c) 2005 - 2011 G-Truc Creation (www.g-truc.net)
/// Permission is hereby granted, free of charge, to any person obtaining a copy
/// of this software and associated documentation files (the "Software"), to deal
/// in the Software without restriction, including without limitation the rights
/// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
/// copies of the Software, and to permit persons to whom the Software is
/// furnished to do so, subject to the following conditions:
/// 
/// The above copyright notice and this permission notice shall be included in
/// all copies or substantial portions of the Software.
/// 
/// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
/// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
/// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
/// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
/// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
/// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
/// THE SOFTWARE.
///
/// @ref gtx_fast_trigonometry
/// @file glm/gtx/fast_trigonometry.hpp
/// @date 2006-01-08 / 2011-06-07
/// @author Christophe Riccio
///
/// @see core (dependence)
///
/// @defgroup gtx_fast_trigonometry GLM_GTX_fast_trigonometry: Fast trigonometric functions
/// @ingroup gtx
/// 
/// @brief Fast but less accurate implementations of trigonometric functions.
/// 
/// <glm/gtx/fast_trigonometry.hpp> need to be included to use these functionalities.
///////////////////////////////////////////////////////////////////////////////////

#ifndef glm_gtx_fast_trigonometry
#define glm_gtx_fast_trigonometry

// Dependency:
#include "../glm.hpp"

#if(defined(GLM_MESSAGES) && !defined(glm_ext))
#	pragma message("GLM: GLM_GTX_fast_trigonometry extension included")
#endif

namespace glm{
namespace gtx
{
	/// @addtogroup gtx_fast_trigonometry
	/// @{

	//! Faster than the common sin function but less accurate. 
	//! Defined between -2pi and 2pi. 
	//! From GLM_GTX_fast_trigonometry extension.
    template <typename T> 
	T fastSin(const T& angle);

    //! Faster than the common cos function but less accurate.
	//! Defined between -2pi and 2pi.
	//! From GLM_GTX_fast_trigonometry extension.
	template <typename T> 
	T fastCos(const T& angle);

    //! Faster than the common tan function but less accurate. 
	//! Defined between -2pi and 2pi. 
	//! From GLM_GTX_fast_trigonometry extension.
	template <typename T> 
	T fastTan(const T& angle);

    //! Faster than the common asin function but less accurate. 
	//! Defined between -2pi and 2pi.
	//! From GLM_GTX_fast_trigonometry extension.
	template <typename T> 
	T fastAsin(const T& angle);

	//! Faster than the common acos function but less accurate. 
	//! Defined between -2pi and 2pi. 
	//! From GLM_GTX_fast_trigonometry extension.
    template <typename T> 
	T fastAcos(const T& angle);

	//! Faster than the common atan function but less accurate.
	//! Defined between -2pi and 2pi. 
	//! From GLM_GTX_fast_trigonometry extension.
	template <typename T> 
	T fastAtan(const T& y, const T& x);

	//! Faster than the common atan function but less accurate. 
	//! Defined between -2pi and 2pi.
	//! From GLM_GTX_fast_trigonometry extension.
    template <typename T> 
	T fastAtan(const T& angle);

	/// @}
}//namespace gtx
}//namespace glm

#include "fast_trigonometry.inl"

#endif//glm_gtx_fast_trigonometry
