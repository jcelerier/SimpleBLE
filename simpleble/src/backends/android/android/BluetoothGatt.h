#pragma once

#include "jni/Common.hpp"
#include "BluetoothGattService.h"

#include <vector>
#include <cstdint>

namespace SimpleBLE {
namespace Android {

class BluetoothGatt {
public:
    BluetoothGatt();
    BluetoothGatt(JNI::Object obj);

    void close();
    bool connect();
    void disconnect();
    bool discoverServices();
    std::vector<BluetoothGattService> getServices();

    // void abortReliableWrite(BluetoothDevice mDevice);
    // void abortReliableWrite();
    // bool beginReliableWrite();
    // bool executeReliableWrite();
    // std::list<BluetoothDevice> getConnectedDevices();
    // int getConnectionState(BluetoothDevice device);
    // BluetoothDevice getDevice();
    // std::list<BluetoothDevice> getDevicesMatchingConnectionStates(std::vector<int>& states);
    // BluetoothGattService getService(UUID uuid);
    // std::list<BluetoothGattService> getServices();
    // bool readCharacteristic(BluetoothGattCharacteristic characteristic);
    // bool readDescriptor(BluetoothGattDescriptor descriptor);
    // void readPhy();
    // bool readRemoteRssi();
    // bool requestConnectionPriority(int connectionPriority);
    // bool requestMtu(int mtu);
    // bool setCharacteristicNotification(BluetoothGattCharacteristic characteristic, bool enable);
    // void setPreferredPhy(int txPhy, int rxPhy, int phyOptions);
    // bool writeCharacteristic(BluetoothGattCharacteristic characteristic);
    // int writeCharacteristic(BluetoothGattCharacteristic characteristic, std::vector<byte>& value, int writeType);
    // bool writeDescriptor(BluetoothGattDescriptor descriptor);
    // int writeDescriptor(BluetoothGattDescriptor descriptor, std::vector<byte>& value);

private:
    static JNI::Class _cls;
    static jmethodID _method_close;
    static jmethodID _method_connect;
    static jmethodID _method_disconnect;
    static jmethodID _method_discoverServices;

    static void initialize();


    JNI::Object _obj;



};

}  // namespace Android
}  // namespace SimpleBLE
