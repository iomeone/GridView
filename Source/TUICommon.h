/*
  ==============================================================================

    TUICommon.h
    Created: 7 Aug 2020 4:47:25pm
    Author:  user

  ==============================================================================
*/

#pragma once

#include "../JuceLibraryCode/JuceHeader.h"

#define TOP		0
#define BOTTOM	1
#define LEFT	2
#define RIGHT	3
#define CENTER	4
DrawablePath * getThumbnailPath(const int type, const bool on, const bool over);
DrawablePath * getDockablePath(const int type, const bool on, const bool over);
