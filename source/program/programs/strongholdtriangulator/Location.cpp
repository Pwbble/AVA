//
// Created by family on 3/3/23.
//

#include "Location.h"

STri::Location::Location(const float x, const float z, const float yaw) : x(x),
                                                                          z(z),
                                                                          yaw(yaw),
                                                                          yawRad(degToRad(mcDegToDeg(yaw))) {}