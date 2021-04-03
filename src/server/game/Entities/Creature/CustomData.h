/*
* Copyright (C) 2020-2021 Trickerer <https://github.com/trickerer/>
*
* This program is free software; you can redistribute it and/or modify it
* under the terms of the GNU General Public License as published by the
* Free Software Foundation; either version 2 of the License, or (at your
* option) any later version.
*
* This program is distributed in the hope that it will be useful, but WITHOUT
* ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
* FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for
* more details.
*
* You should have received a copy of the GNU General Public License along
* with this program. If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef _CUSTOM_DATA_H
#define _CUSTOM_DATA_H

struct CreatureCustomData
{
    explicit CreatureCustomData(uint32 count = 0, float dmg = 0.f, float hpRate = 0.f, float manaRate = 0.f, float armorRate = 0.f, uint8 selLevel = 0) :
            instancePlayerCount(count), selectedLevel(selLevel), damageMultiplier(dmg), healthMultiplier(hpRate), manaMultiplier(manaRate),
            armorMultiplier(armorRate) {}

    uint32 instancePlayerCount;
    uint8 selectedLevel;
    uint32 entry;
    float damageMultiplier;
    float healthMultiplier;
    float manaMultiplier;
    float armorMultiplier;

private:
    CreatureCustomData(CreatureCustomData const&);
};

struct MapCustomData
{
    explicit MapCustomData(uint32 count = 0, uint8 selLevel = 0) : playerCount(count), mapLevel(selLevel) {}

    uint32 playerCount;
    uint8 mapLevel;

private:
    MapCustomData(MapCustomData const&);
};

#endif
