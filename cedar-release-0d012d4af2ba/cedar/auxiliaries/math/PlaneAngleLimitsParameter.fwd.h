/*======================================================================================================================

    Copyright 2011, 2012, 2013, 2014, 2015 Institut fuer Neuroinformatik, Ruhr-Universitaet Bochum, Germany
 
    This file is part of cedar.

    cedar is free software: you can redistribute it and/or modify it under
    the terms of the GNU Lesser General Public License as published by the
    Free Software Foundation, either version 3 of the License, or (at your
    option) any later version.

    cedar is distributed in the hope that it will be useful, but WITHOUT ANY
    WARRANTY; without even the implied warranty of MERCHANTABILITY or
    FITNESS FOR A PARTICULAR PURPOSE. See the GNU Lesser General Public
    License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with cedar. If not, see <http://www.gnu.org/licenses/>.

========================================================================================================================

    Institute:   Ruhr-Universitaet Bochum
                 Institut fuer Neuroinformatik

    File:        PlaneAngleLimitsParameter.fwd.h

    Maintainer:  Oliver Lomp
    Email:       oliver.lomp@ini.ruhr-uni-bochum.de
    Date:        2014 01 17

    Description: Forward declaration file for the class cedar::aux::math::PlaneAngleLimitsParameter.

    Credits:

======================================================================================================================*/

#ifndef CEDAR_AUX_MATH_PLANE_ANGLE_LIMITS_PARAMETER_FWD_H
#define CEDAR_AUX_MATH_PLANE_ANGLE_LIMITS_PARAMETER_FWD_H

// CEDAR CONFIGURATION
#include "cedar/configuration.h"

// CEDAR INCLUDES
#include "cedar/auxiliaries/lib.h"
#include "cedar/units/PlaneAngle.h"

// FORWARD DECLARATIONS
#include "cedar/auxiliaries/math/LimitsParameter.fwd.h"

// SYSTEM INCLUDES
#ifndef Q_MOC_RUN
  #include <boost/smart_ptr.hpp>
#endif // Q_MOC_RUN

//!@cond SKIPPED_DOCUMENTATION
namespace cedar
{
  namespace aux
  {
    namespace math
    {
      typedef LimitsParameter<cedar::unit::PlaneAngle> PlaneAngleLimitsParameter;
      CEDAR_GENERATE_POINTER_TYPES_INTRUSIVE(PlaneAngleLimitsParameter);
    }
  }
}

//!@endcond

#endif // CEDAR_AUX_MATH_PLANE_ANGLE_LIMITS_PARAMETER_FWD_H

