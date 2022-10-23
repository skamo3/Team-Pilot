/*
* This file was generated by the CommonAPI Generators.
* Used org.genivi.commonapi.someip 3.1.12.v201907221223.
* Used org.franca.core 0.9.1.201412191134.
*
* This Source Code Form is subject to the terms of the Mozilla Public License, v. 2.0.
* If a copy of the MPL was not distributed with this file, You can obtain one at
* http://mozilla.org/MPL/2.0/.
*/

#ifndef V1_COMMONAPI_Hello_World_SOMEIP_DEPLOYMENT_HPP_
#define V1_COMMONAPI_Hello_World_SOMEIP_DEPLOYMENT_HPP_


#if !defined (COMMONAPI_INTERNAL_COMPILATION)
#define COMMONAPI_INTERNAL_COMPILATION
#endif
#include <CommonAPI/SomeIP/Deployment.hpp>
#undef COMMONAPI_INTERNAL_COMPILATION

namespace v1 {
namespace commonapi {
namespace HelloWorld_ {

// Interface-specific deployment types
typedef CommonAPI::SomeIP::StructDeployment<
    CommonAPI::SomeIP::IntegerDeployment<int32_t>,
    CommonAPI::SomeIP::StringDeployment,
    CommonAPI::SomeIP::IntegerDeployment<int32_t>,
    CommonAPI::SomeIP::StringDeployment,
    CommonAPI::SomeIP::IntegerDeployment<int32_t>,
    CommonAPI::SomeIP::StringDeployment,
    CommonAPI::SomeIP::IntegerDeployment<int32_t>,
    CommonAPI::SomeIP::StringDeployment,
    CommonAPI::SomeIP::IntegerDeployment<int32_t>,
    CommonAPI::SomeIP::StringDeployment
> testStructDeployment_t;

// Type-specific deployments

// Attribute-specific deployments

// Argument-specific deployment

// Broadcast-specific deployments

} // namespace HelloWorld_
} // namespace commonapi
} // namespace v1

#endif // V1_COMMONAPI_Hello_World_SOMEIP_DEPLOYMENT_HPP_
