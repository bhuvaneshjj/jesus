/*
 * Copyright 2012-2013 Falltergeist Developers.
 *
 * This file is part of Falltergeist.
 *
 * Falltergeist is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Falltergeist is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Falltergeist.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef FALLTERGEIST_NEWGAMESTATE_H
#define FALLTERGIEST_NEWGAMESTATE_H

#include "../Engine/State.h"
#include "../Engine/Surface.h"
#include <vector>

namespace Falltergeist
{
class GcdFileType;
class Surface;
class SurfaceSet;
class TextArea;
class Player;

class NewGameState : public State
{
protected:
    SurfaceSet * _characterImages;
    std::vector<Player *> * _characters;
    TextArea * _playerStats1;
    TextArea * _playerStats2;
    TextArea * _playerBio;
    TextArea * _playerName;
    unsigned char _selectedCharacter;
public:    
    NewGameState(Game * game);
    virtual ~NewGameState();
    void changeCharacter();
    void init();
    const char * statToString(unsigned int stat);
    void think();
    void onBackButtonClick();
    void onEditButtonClick();
    void onCreateButtonClick();
    void onPrevCharacterButtonClick();
    void onNextCharacterButtonClick();
};

}
#endif // FALLTERGEIST_NEWGAMESTATE_H