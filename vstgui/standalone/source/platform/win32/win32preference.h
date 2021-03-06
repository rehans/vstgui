// This file is part of VSTGUI. It is subject to the license terms 
// in the LICENSE file found in the top-level directory of this
// distribution and at http://github.com/steinbergmedia/vstgui/LICENSE

#pragma once

#include "../../../include/ipreference.h"
#include <windows.h>

//------------------------------------------------------------------------
namespace VSTGUI {
namespace Standalone {
namespace Platform {
namespace Win32 {

//------------------------------------------------------------------------
class Win32Preference : public IPreference
{
public:
	Win32Preference ();
	~Win32Preference ();

	bool set (const UTF8String& key, const UTF8String& value) override;
	Optional<UTF8String> get (const UTF8String& key) override;

private:
	HKEY hKey {nullptr};
};

//------------------------------------------------------------------------
} // Mac
} // Platform
} // Standalone
} // VSTGUI
