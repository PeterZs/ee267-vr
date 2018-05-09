#include "OrientationMath.h"

/** TODO: see documentation in header file */
double computeAccPitch(double acc[3]) {

  return 0.0;

}

/** TODO: see documentation in header file */
double computeAccRoll(double acc[3]) {

  return 0.0;

}

/** TODO: see documentation in header file */
double computeFlatlandRollGyr(double flatlandRollGyrPrev, double gyr[3], double deltaT) {
  return flatlandRollGyrPrev + gyr[2]*deltaT;
  //return 0.0;

}

/** TODO: see documentation in header file */
double computeFlatlandRollAcc(double acc[3]) {
  return atan2(acc[0], acc[1])*180/PI;
  //return 0.0;

}

/** TODO: see documentation in header file */
double computeFlatlandRollComp(double flatlandRollCompPrev, double gyr[3], double flatlandRollAcc, double deltaT, double alpha) {
  double gyrTerm = computeFlatlandRollGyr(flatlandRollCompPrev, gyr, deltaT);
  double accTerm = flatlandRollAcc;
  return alpha*gyrTerm + (1 - alpha)*accTerm;
  //return 0.0;

}


/** TODO: see documentation in header file */
void updateQuaternionGyr(Quaternion& q, double gyr[3], double deltaT) {
  // q is the previous quaternion estimate
  // update it to be the new quaternion estimate

}


/** TODO: see documentation in header file */
void updateQuaternionComp(Quaternion& q, double gyr[3], double acc[3], double deltaT, double alpha) {
  // q is the previous quaternion estimate
  // update it to be the new quaternion estimate


}
