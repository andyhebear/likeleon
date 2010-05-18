#pragma once

//When compiling OgreMain for the first time LINK_TO_MOGRE should be 0 (since Mogre.dll doesn't
//exist yet). After compiling OgreMain and Mogre, build OgreMain with LINK_TO_MOGRE = 1 so
//that OgreMain can link to Mogre to instantiate Mogre's classes.
#define LINK_TO_MOGRE 1