//
//  Copyright (C) 2010 Alexey Bobkov
//
//  This file is part of Fb2toepub converter.
//
//  Fb2toepub converter is free software: you can redistribute it and/or modify
//  it under the terms of the GNU General Public License as published by
//  the Free Software Foundation, either version 3 of the License, or
//  (at your option) any later version.
//
//  Fb2toepub converter is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//  GNU General Public License for more details.
//
//  You should have received a copy of the GNU General Public License
//  along with Fb2toepub converter.  If not, see <http://www.gnu.org/licenses/>.
//


#ifndef FB2TOEPUB__FB2TOEPUBCONV_H
#define FB2TOEPUB__FB2TOEPUBCONV_H

#include "streamzip.h"
#include "translit.h"

namespace Fb2ToEpub
{

    int FB2TOEPUB_DECL PrintInfo(const String &in);
    int FB2TOEPUB_DECL Convert (InStm *pin, const strvector &css, const strvector &fonts, const strvector &mfonts,
                                XlitConv *xlitConv, OutPackStm *pout);

};  //namespace Fb2ToEpub

#endif
