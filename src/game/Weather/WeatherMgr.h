/*
 * Copyright (C) 2016+     AzerothCore <www.azerothcore.org>, released under GNU GPL v2 license: http://github.com/azerothcore/azerothcore-wotlk/LICENSE-GPL2
 * Copyright (C) 2008-2016 TrinityCore <http://www.trinitycore.org/>
 * Copyright (C) 2005-2009 MaNGOS <http://getmangos.com/>
 */

/// \addtogroup world
/// @{
/// \file

#ifndef __WEATHERMGR_H
#define __WEATHERMGR_H

#include "Define.h"

class Weather;
class Player;

namespace WeatherMgr
{
    void LoadWeatherData();

    Weather* FindWeather(uint32 id);
    Weather* AddWeather(uint32 zone_id);
    void RemoveWeather(uint32 zone_id);

    void SendFineWeatherUpdateToPlayer(Player* player);

    void Update(uint32 diff);
}

#endif
