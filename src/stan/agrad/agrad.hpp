#ifndef __STAN__AGRAD__AGRAD_HPP__
#define __STAN__AGRAD__AGRAD_HPP__

#include <stan/agrad/rev/var_stack.hpp>
#include <stan/agrad/rev/chainable.hpp>
#include <stan/agrad/rev/vari.hpp>
#include <stan/agrad/rev/var.hpp>
#include <stan/agrad/rev/print_stack.hpp>

#include <stan/agrad/rev/op/v_vari.hpp>
#include <stan/agrad/rev/op/vv_vari.hpp>
#include <stan/agrad/rev/op/vd_vari.hpp>
#include <stan/agrad/rev/op/dv_vari.hpp>
#include <stan/agrad/rev/op/vvv_vari.hpp>
#include <stan/agrad/rev/op/vvd_vari.hpp>
#include <stan/agrad/rev/op/vdv_vari.hpp>
#include <stan/agrad/rev/op/vdd_vari.hpp>
#include <stan/agrad/rev/op/dvv_vari.hpp>
#include <stan/agrad/rev/op/dvd_vari.hpp>
#include <stan/agrad/rev/op/ddv_vari.hpp>
#include <stan/agrad/rev/precomp_v_vari.hpp>

#include <stan/agrad/rev/operator_unary_negative.hpp>
#include <stan/agrad/rev/operator_equal.hpp>
#include <stan/agrad/rev/operator_not_equal.hpp>
#include <stan/agrad/rev/operator_greater_than.hpp>
#include <stan/agrad/rev/operator_greater_than_or_equal.hpp>
#include <stan/agrad/rev/operator_less_than.hpp>
#include <stan/agrad/rev/operator_less_than_or_equal.hpp>
#include <stan/agrad/rev/operator_unary_not.hpp>
#include <stan/agrad/rev/operator_unary_plus.hpp>
#include <stan/agrad/rev/operator_addition.hpp>
#include <stan/agrad/rev/operator_subtraction.hpp>
#include <stan/agrad/rev/operator_multiplication.hpp>
#include <stan/agrad/rev/operator_division.hpp>
#include <stan/agrad/rev/operator_unary_increment.hpp>
#include <stan/agrad/rev/operator_unary_decrement.hpp>

#include <stan/agrad/rev/exp.hpp>
#include <stan/agrad/rev/log.hpp>
#include <stan/agrad/rev/log10.hpp>
#include <stan/agrad/rev/sqrt.hpp>
#include <stan/agrad/rev/pow.hpp>
#include <stan/agrad/rev/cos.hpp>
#include <stan/agrad/rev/sin.hpp>
#include <stan/agrad/rev/tan.hpp>
#include <stan/agrad/rev/acos.hpp>
#include <stan/agrad/rev/asin.hpp>
#include <stan/agrad/rev/atan.hpp>
#include <stan/agrad/rev/atan2.hpp>
#include <stan/agrad/rev/cosh.hpp>
#include <stan/agrad/rev/sinh.hpp>
#include <stan/agrad/rev/tanh.hpp>
#include <stan/agrad/rev/fabs.hpp>
#include <stan/agrad/rev/floor.hpp>
#include <stan/agrad/rev/ceil.hpp>
#include <stan/agrad/rev/fmod.hpp>
#include <stan/agrad/rev/abs.hpp>
#include <stan/agrad/rev/jacobian.hpp>

#include <stan/agrad/rev/operator_plus_equal.hpp>
#include <stan/agrad/rev/operator_minus_equal.hpp>
#include <stan/agrad/rev/operator_multiply_equal.hpp>

#include <stan/agrad/rev/numeric_limits.hpp>

#include <stan/memory/stack_alloc.hpp>

namespace stan {

  namespace agrad {

    template <typename T>
    inline bool is_uninitialized(T x) {
      return false;
    }
    inline bool is_uninitialized(var x) {
      return x.is_uninitialized();
    }


  }
}
#endif
