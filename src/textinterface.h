/**
    Copyright (C) 2014-2016 dhcrawl - Probe DHCP servers to see what offers are sent

    Written by Tobias Eliasson <arnestig@gmail.com>.

    This file is part of dhcrawl https://github.com/arnestig/dhcrawl

    dhcrawl is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    dhcrawl is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with dhcrawl.  If not, see <http://www.gnu.org/licenses/>.
**/

#ifndef __TEXT_INTERFACE__H
#define __TEXT_INTERFACE__H

#include "userinterface.h"

class TextGUI : public UserInterface
{
    public:
        TextGUI( bool showdetails );
        ~TextGUI();

        void init();
        void work( void *context );
        void resizeScreen(){};

    private:
        void printDetails( DHCPMessage *message );
		void printMessage( DHCPMessage *message );
};

#endif

