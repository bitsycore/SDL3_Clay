#ifndef COLORS_H
#define COLORS_H

#include "../../vendor/clay.h"

#define COLOR_LIGHT		(Clay_Color){224, 215, 210, 0}
#define COLOR_RED 		(Clay_Color){168, 66, 28, 120}
#define COLOR_ORANGE 	(Clay_Color){225, 138, 50, 120}

Clay_Color alphaOverride(Clay_Color in, float alpha);

#endif //COLORS_H