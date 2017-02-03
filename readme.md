[license]: https://tldrlegal.com/l/mit

# GTASA Additionnal maps [![License](http://img.shields.io/badge/license-MIT-lightgrey.svg?style=flat)][License]

Additionnal scenes for gta sa. Gift to www.sa-mp.com.

## Supported Platforms
 * SA-MP - _Provides support for the [SA-MP](http://www.sa-mp.com/) server_
 
## Required Dependencies
 * YSI only if you compile all sources - Libraries links  : [GitHub](https://github.com/Misiur/YSI) or [Forum.SA-MP](http://forum.sa-mp.com/showthread.php?t=570883)
 * Incognito Streamer - Library link : [GitHub](https://github.com/samp-incognito/samp-streamer-plugin/releases/tag/v2.82)

## Compiling Source
 * You do not have to compile all the project it if you want just to take some mappings in the repository. But if you want to install easily all of my maps, you can follow my instructions.

 1. Download the [zip](https://github.com/BenBout/GTASA-scenes/archive/master.zip) archive or folk the repository.

 2. Extract archive in your server directory.

 3. Download the required dependencies and install to your server project.

 4. Add required references in your main file `#include <streamer>` and `#include <YSI\y_hooks>` (optional).

 5. Add samaps reference in your main file `#include <sa_scenes.inc>`.

## Enable / Disable scenes

 1. Open samaps_index.inc in your pawno include folder.
 
 2. Comment / Uncomment `//` include lines you want to enable/desable.

 3. Save File.
 
 4. Compile project.
 
## retrieve scenes positions & interiorworld

 1. Open sa_scenes directory in your pawno\include.
 
 2. Open scene file you want.
 
 3. Get pos in. Some scenes are in specific interior world, to get interior number, look at the end of an object line
	*exemple : `,-1,13,-1,100.000,100.000);` Interior world is 13. For more details, consult incognito streamer doc.
	
## Special
 If you use jefferson_remastered.inc, please [do not modify] `line 90` it is a tribute to [Michael Brown](https://en.wikipedia.org/wiki/Shooting_of_Michael_Brown) . Thank you.

 ## Reporting texture or object bug

Contact me on github or sa-mp forum.
