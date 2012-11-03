//
// Dynamic Array Toolset for Maya
//
// Copyright (C) 2012  Jeroen Hoolmans
//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.
//

#ifndef DA_GRIDGENERATOR_H
#define DA_GRIDGENERATOR_H

#include <maya/MPxNode.h>
#include <maya/MDataBlock.h>
#include <maya/MDataHandle.h>
#include <maya/MPlug.h>


class DA_GridGenerator
{
public:
    DA_GridGenerator();
    virtual ~DA_GridGenerator();

    virtual MStatus compute(const MPlug &plug, MDataBlock &data);
    static void * creator();
    static MStatus initialize();

public:
    static MTypeId id;
};

#endif // DA_GRIDGENERATOR_H
