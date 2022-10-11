/*
* This file was generated by the CommonAPI Generators.
* Used org.genivi.commonapi.dbus 3.1.12.v201907221221.
* Used org.franca.core 0.9.1.201412191134.
*
* This Source Code Form is subject to the terms of the Mozilla Public License, v. 2.0.
* If a copy of the MPL was not distributed with this file, You can obtain one at
* http://mozilla.org/MPL/2.0/.
*/
#ifndef V1_COMMONAPI_IPC_DBUS_STUB_ADAPTER_HPP_
#define V1_COMMONAPI_IPC_DBUS_STUB_ADAPTER_HPP_

#include <v1/commonapi/IPCStub.hpp>
#include "v1/commonapi/IPCDBusDeployment.hpp"
#include <v1/commonapi/IPCDBusDeployment.hpp>

#if !defined (COMMONAPI_INTERNAL_COMPILATION)
#define COMMONAPI_INTERNAL_COMPILATION
#endif

#include <CommonAPI/DBus/DBusAddressTranslator.hpp>
#include <CommonAPI/DBus/DBusFactory.hpp>
#include <CommonAPI/DBus/DBusStubAdapterHelper.hpp>
#include <CommonAPI/DBus/DBusStubAdapter.hpp>
#include <CommonAPI/DBus/DBusDeployment.hpp>

#undef COMMONAPI_INTERNAL_COMPILATION

namespace v1 {
namespace commonapi {

template <typename _Stub = ::v1::commonapi::IPCStub, typename... _Stubs>
class IPCDBusStubAdapterInternal
    : public virtual IPCStubAdapter,
      public CommonAPI::DBus::DBusStubAdapterHelper< _Stub, _Stubs...>
     {
public:
    typedef CommonAPI::DBus::DBusStubAdapterHelper< _Stub, _Stubs...> IPCDBusStubAdapterHelper;

    ~IPCDBusStubAdapterInternal() {
        deactivateManagedInstances();
        IPCDBusStubAdapterHelper::deinit();
    }

    virtual bool hasFreedesktopProperties() {
        return false;
    }

    inline static const char* getInterface() {
        return IPC::getInterface();
    }

    void deactivateManagedInstances() {
    }

    static CommonAPI::DBus::DBusGetAttributeStubDispatcher<
        ::v1::commonapi::IPCStub,
        CommonAPI::Version
        > getIPCInterfaceVersionStubDispatcher;

    
    static CommonAPI::DBus::DBusMethodWithReplyStubDispatcher<
        ::v1::commonapi::IPCStub,
        std::tuple< int32_t>,
        std::tuple< IPC::CanData>,
        std::tuple< CommonAPI::DBus::IntegerDeployment>,
        std::tuple< ::v1::commonapi::IPC_::CanDataDeployment_t>
    
        > canDataMethodStubDispatcher;

    IPCDBusStubAdapterInternal(
        const CommonAPI::DBus::DBusAddress &_address,
        const std::shared_ptr<CommonAPI::DBus::DBusProxyConnection> &_connection,
        const std::shared_ptr<_Stub> &_stub)
    : CommonAPI::DBus::DBusStubAdapter(_address, _connection,false),
      IPCDBusStubAdapterHelper(_address, _connection, false, _stub) {
        IPCDBusStubAdapterHelper::addStubDispatcher({ "canDataMethod", "i" }, &canDataMethodStubDispatcher);
        IPCDBusStubAdapterHelper::addStubDispatcher({ "getInterfaceVersion", "" }, &getIPCInterfaceVersionStubDispatcher);
    }

protected:
    virtual const char* getMethodsDBusIntrospectionXmlData() const {
        static const std::string introspectionData =
            "<method name=\"getInterfaceVersion\">\n"
                "<arg name=\"value\" type=\"uu\" direction=\"out\" />"
            "</method>\n"
            "<method name=\"canDataMethod\">\n"
            "<arg name=\"_id\" type=\"i\" direction=\"in\" />\n"
            "<arg name=\"_canFrame\" type=\"(iiii)\" direction=\"out\" />\n"
            "</method>\n"
            ;
        return introspectionData.c_str();
    }

private:
};


template <typename _Stub, typename... _Stubs>
CommonAPI::DBus::DBusGetAttributeStubDispatcher<
    ::v1::commonapi::IPCStub,
    CommonAPI::Version
    > IPCDBusStubAdapterInternal<_Stub, _Stubs...>::getIPCInterfaceVersionStubDispatcher(&IPCStub::lockInterfaceVersionAttribute, &IPCStub::getInterfaceVersion, "uu");


template <typename _Stub, typename... _Stubs>
CommonAPI::DBus::DBusMethodWithReplyStubDispatcher<
    ::v1::commonapi::IPCStub,
    std::tuple< int32_t>,
    std::tuple< IPC::CanData>,
    std::tuple< CommonAPI::DBus::IntegerDeployment>,
    std::tuple< ::v1::commonapi::IPC_::CanDataDeployment_t>

    > IPCDBusStubAdapterInternal<_Stub, _Stubs...>::canDataMethodStubDispatcher(
    &IPCStub::canDataMethod, "(iiii)",
    std::make_tuple(static_cast< CommonAPI::DBus::IntegerDeployment* >(nullptr)),
    std::make_tuple(static_cast< ::v1::commonapi::IPC_::CanDataDeployment_t* >(nullptr)));


template <typename _Stub = ::v1::commonapi::IPCStub, typename... _Stubs>
class IPCDBusStubAdapter
    : public IPCDBusStubAdapterInternal<_Stub, _Stubs...>,
      public std::enable_shared_from_this< IPCDBusStubAdapter<_Stub, _Stubs...>> {
public:
    IPCDBusStubAdapter(
        const CommonAPI::DBus::DBusAddress &_address,
        const std::shared_ptr<CommonAPI::DBus::DBusProxyConnection> &_connection,
        const std::shared_ptr<_Stub> &_stub)
        : CommonAPI::DBus::DBusStubAdapter(
            _address,
            _connection,
            false),
          IPCDBusStubAdapterInternal<_Stub, _Stubs...>(
            _address,
            _connection,
            _stub) {
    }
};

} // namespace commonapi
} // namespace v1

#endif // V1_COMMONAPI_IPC_DBUS_STUB_ADAPTER_HPP_
