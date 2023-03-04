/**
 * Name: Location.h
 * Description: Header for Location class
 * Created: Dec 23, 2023
 */

#ifndef AVA_LOCATION_H
#define AVA_LOCATION_H

#include <iostream>

namespace STri {
    class Location {
        // Fields
        const float x, z, yaw;
        const float yawRad;
    private:

        inline float mcDegToDeg(float yaw) {
            return yaw - 90; // Effectively rotates the Minecraft yaw to be used with trig function tangent.
        }

        inline float degToRad(float deg) {
            return 0.01745F * deg;
        }

    public:

        Location(float x, float z, float yaw);

        inline static bool isYawGood(float yaw) {
            return -180 <= yaw && yaw <= 180;
        }

        float getX() {
            return x;
        }

        float getZ() {
            return z;
        }

        float getYawRad() {
            return yawRad;
        }
    };
}

#endif // AVA_LOCATION_H