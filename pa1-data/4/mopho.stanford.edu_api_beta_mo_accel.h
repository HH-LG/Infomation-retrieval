name mo_accel h desc mopho api for accelerometer authors nick bryan jieun oh jorge herrera ge wang date fall 2009 version 0.2 stanford mobile phone orchestra http mopho stanford edu ifndef __mo_accel_h__ define __mo_accel_h__ include mo_def h include vector interface acceldelegate nsobject uiaccelerometerdelegate end type definition for accelerometer callback function typedef void moaccelcallback double x double y double z void data name class moaccel desc accelerometer stuff singleton class moaccel public setting values set the global update interval static void setupdateinterval double seconds get the global update interval static double getupdateinterval public getting values returns current x y z values for polling static void getxyz double & px double & py double & pz returns current x value for polling static double getx returns current y value for polling static double gety returns current z value for polling static double getz public callbacks register a callback to be invoked on subsequent updates static void addcallback const moaccelcallback & callback void data unregister a callback static void removecallback const moaccelcallback & callback static const double max_accel_rate public this should be called on new values uiaccelerometerdelegate static void update double x double y double z private check if one time set up is needed static void checksetup current values static double m_x static double m_y static double m_z update interval static double m_updateinterval accelerometer delegate static acceldelegate acceldelegate queue of callbacks static std vector moaccelcallback m_clients static std vector void m_clientdata todo update the add and remove functions with the void data endif
