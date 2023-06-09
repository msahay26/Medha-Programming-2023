using namespace vex;

extern brain Brain;

// VEXcode devices
extern motor leftm;
extern motor rightm;
extern inertial Inertial3;

/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Pro.
 * 
 * This should be called at the start of your int main function.
 */
void  vexcodeInit( void );