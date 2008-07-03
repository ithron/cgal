
// TODO: Add licence
//
// This file is provided AS IS with NO WARRANTY OF ANY KIND, INCLUDING THE
// WARRANTY OF DESIGN, MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
//
// $URL:$
// $Id: $
// 
//
// Author(s)     : Michael Kerber <mkerber@mpi-inf.mpg.de>
//
// ============================================================================

// This file defines several instances of Algebraic_curve_kernel_2 
// specializations that are often
// used in tests and demos. 

#ifndef CGAL_PREFERED_ALGEBRAIC_CURVE_KERNEL_H
#define CGAL_PREFERED_ALGEBRAIC_CURVE_KERNEL_H 1

#include <CGAL/basic.h>

#include <CGAL/Arithmetic_kernel.h>
#include <CGAL/Algebraic_curve_kernel_2.h>
#include <CGAL/Filtered_algebraic_curve_kernel_2.h>
#include <CGAL/Preferred_algebraic_kernels_1.h>

CGAL_BEGIN_NAMESPACE

template<typename Coefficient, 
         typename Boundary = typename Get_arithmetic_kernel< Coefficient >::Arithmetic_kernel::Rational>
struct Get_algebraic_curve_kernel_2 {

    // Unfiltered kernels

    typedef CGAL::Algebraic_curve_kernel_2 
    < typename CGAL::Get_algebraic_kernel_1<Coefficient,Boundary>
        ::Default_algebraic_kernel_1 >
        Default_algebraic_curve_kernel_2;

    typedef CGAL::Algebraic_curve_kernel_2 
    < typename CGAL::Get_algebraic_kernel_1<Coefficient,Boundary>
        ::Algebraic_kernel_with_bisection_and_descartes_1 >
        Algebraic_curve_kernel_with_bisection_and_descartes_2;

    typedef CGAL::Algebraic_curve_kernel_2 
    < typename CGAL::Get_algebraic_kernel_1<Coefficient,Boundary>
        ::Algebraic_kernel_with_qir_and_bitstream_1 >
         Algebraic_curve_kernel_with_qir_and_bitstream_2;

    // Filtered kernels

    typedef CGAL::Filtered_algebraic_curve_kernel_2 
    < typename CGAL::Get_algebraic_kernel_1<Coefficient,Boundary>
        ::Default_algebraic_kernel_1 >
        Default_filtered_algebraic_curve_kernel_2;

    typedef CGAL::Filtered_algebraic_curve_kernel_2 
    < typename CGAL::Get_algebraic_kernel_1<Coefficient,Boundary>
        ::Algebraic_kernel_with_bisection_and_descartes_1 >
        Filtered_algebraic_curve_kernel_with_bisection_and_descartes_2;

    typedef CGAL::Filtered_algebraic_curve_kernel_2 
    < typename CGAL::Get_algebraic_kernel_1<Coefficient,Boundary>
        ::Algebraic_kernel_with_qir_and_bitstream_1 >
         Filtered_algebraic_curve_kernel_with_qir_and_bitstream_2;

};

CGAL_END_NAMESPACE


#endif
