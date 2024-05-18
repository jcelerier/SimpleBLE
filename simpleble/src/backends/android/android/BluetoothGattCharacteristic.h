#pragma once

#include <string>
#include <vector>
#include "BluetoothGattDescriptor.h"
#include "BluetoothGattService.h"
#include "jni/Common.hpp"

namespace SimpleBLE {
namespace Android {

class BluetoothGattCharacteristic {
  public:
    BluetoothGattCharacteristic();
    BluetoothGattCharacteristic(JNI::Object obj);

//    bool addDescriptor(BluetoothGattDescriptor descriptor);
//    BluetoothGattDescriptor getDescriptor(std::string uuid);
//    std::vector<BluetoothGattDescriptor> getDescriptors();
    int getInstanceId();
    int getPermissions();
    int getProperties();
    std::string getUuid();
    int getWriteType();
    void setWriteType(int writeType);

    JNI::Object getObject() const { return _obj; }

  private:
    JNI::Object _obj;
    static JNI::Class _cls;
    static jmethodID _method_addDescriptor;
    static jmethodID _method_getDescriptor;
    static jmethodID _method_getDescriptors;
    static jmethodID _method_getInstanceId;
    static jmethodID _method_getPermissions;
    static jmethodID _method_getProperties;
    static jmethodID _method_getService;
    static jmethodID _method_getUuid;
    static jmethodID _method_getWriteType;
    static jmethodID _method_setWriteType;

    void initialize();
};

}  // namespace Android
}  // namespace SimpleBLE
