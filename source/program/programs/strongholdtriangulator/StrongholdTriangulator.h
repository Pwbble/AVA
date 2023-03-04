//
// Created by family on 3/1/23.
//

#ifndef AVA_STRONGHOLDTRIANGULATOR_H
#define AVA_STRONGHOLDTRIANGULATOR_H

#include "../../SubProgram.h"
#include "Location.h"

namespace STri {
    class StrongholdTriangulator : public SubProgram {
    public:
        explicit StrongholdTriangulator(const std::string_view &name);

        Location triangulate(Location& pos1, Location& pos2);

        Location getLocation(int id);

        int run() override;
    };
}

#endif // AVA_STRONGHOLDTRIANGULATOR_H