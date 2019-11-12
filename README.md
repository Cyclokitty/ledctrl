# LEDCTRL

LED Controller that lets me send a signal via Bluetooth from my Android phone to my Arduino Uno.

The Uno is equipped with an HC-05 Bluetooth module and a LED.

## Crazy stuff:

1. I had to comment out and @Override in the RCTBluetoothSerialPackage.java 
    * line 23 of RCTBluetoothSerialPackage.java that is found by going to the folders:
        * android/src/main/java/com/rusel/RCTBluetoothSerial/RCTBluetoothSerialPackage.java

## Things To Do:
1. Make the layout look nicer.
1. Split up the code.
1. MOR REUSABLE COMPONENTS
1. More complex Arduino project because a LED that only turns on and off isn't terribly interesting.