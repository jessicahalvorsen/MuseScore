/*
 * SPDX-License-Identifier: GPL-3.0-only
 * MuseScore-CLA-applies
 *
 * MuseScore
 * Music Composition & Notation
 *
 * Copyright (C) 2021 MuseScore BVBA and others
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 3 as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 */

#ifndef MU_VST_VSTCONFIGURATION_H
#define MU_VST_VSTCONFIGURATION_H

#include "ivstconfiguration.h"

namespace mu::vst {
class VstConfiguration : public IVstConfiguration
{
public:
    void init();

    io::paths userVstDirectories() const override;
    void setUserVstDirectories(const io::paths& paths) override;
    async::Channel<io::paths> userVstDirectoriesChanged() const override;

private:
    async::Channel<io::paths> m_userVstDirsChanged;
};
}

#endif // MU_VST_VSTCONFIGURATION_H
