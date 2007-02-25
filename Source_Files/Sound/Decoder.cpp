/*

	Copyright (C) 2007 Gregory Smith
	and the "Aleph One" developers.
 
	This program is free software; you can redistribute it and/or modify
	it under the terms of the GNU General Public License as published by
	the Free Software Foundation; either version 2 of the License, or
	(at your option) any later version.

	This program is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY; without even the implied warranty of
	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
	GNU General Public License for more details.

	This license is contained in the file "COPYING",
	which is included with this source code; it is available online at
	http://www.gnu.org/licenses/gpl.html

	Decodes music and external sounds

*/

#include "Decoder.h"
#include "BasicIFFDecoder.h"
#include <memory>

using std::auto_ptr;

Decoder *Decoder::Get(FileSpecifier& File)
{
	{
		auto_ptr<BasicIFFDecoder> iffDecoder(new BasicIFFDecoder);
		if (iffDecoder->Open(File))
			return iffDecoder.release();
	}
}