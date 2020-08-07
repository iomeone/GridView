/*
  ==============================================================================

    TUICommon.cpp
    Created: 7 Aug 2020 4:47:26pm
    Author:  user

  ==============================================================================
*/

#include "TUICommon.h"



DrawablePath * getDockablePath(const int type, const bool on, const bool over)
{
	DrawablePath * drawable = new DrawablePath();

	Path path;

	static const unsigned char pathData[] = { 110,109,0,128,252,67,154,89,221,67,108,102,166,202,67,0,128,171,67,98,102,102,200,67,0,64,169,67,153,89,197,67,0,0,168,67,102,38,194,67,0,0,168,67,108,0,0,186,67,0,0,168,67,98,205,204,199,67,154,89,150,67,0,0,208,67,102,38,128,67,0,0,208,67,0,0,80,67,
98,0,0,208,67,51,51,186,66,51,115,161,67,0,0,0,0,0,0,80,67,0,0,0,0,98,52,51,186,66,0,0,0,0,0,0,0,0,51,51,186,66,0,0,0,0,0,0,80,67,98,0,0,0,0,51,115,161,67,51,51,186,66,0,0,208,67,0,0,80,67,0,0,208,67,98,102,38,128,67,0,0,208,67,154,89,150,67,205,204,
199,67,0,0,168,67,0,0,186,67,108,0,0,168,67,102,38,194,67,98,0,0,168,67,153,89,197,67,0,64,169,67,102,102,200,67,0,128,171,67,102,166,202,67,108,154,89,221,67,0,128,252,67,98,205,12,226,67,154,153,0,68,103,166,233,67,154,153,0,68,205,76,238,67,0,128,
252,67,108,51,115,252,67,154,89,238,67,98,51,147,0,68,103,166,233,67,51,147,0,68,205,12,226,67,0,128,252,67,154,89,221,67,99,109,0,0,80,67,0,0,168,67,98,205,76,9,67,0,0,168,67,0,0,160,66,102,102,139,67,0,0,160,66,0,0,80,67,98,0,0,160,66,205,76,9,67,51,
51,9,67,0,0,160,66,0,0,80,67,0,0,160,66,98,154,89,139,67,0,0,160,66,0,0,168,67,51,51,9,67,0,0,168,67,0,0,80,67,98,0,0,168,67,154,89,139,67,102,102,139,67,0,0,168,67,0,0,80,67,0,0,168,67,99,101,0,0 };


	path.loadPathFromData(pathData, sizeof(pathData));


	drawable->setPath(path);

	if (on)
	{
		if (over)
			drawable->setFill(FillType(Colour(0xffcccccc)));
		else
			drawable->setFill(FillType(Colour(0xff999999)));
	}
	else
	{
		if (over)
			drawable->setFill(FillType(Colour(0xff999999)));
		else
			drawable->setFill(FillType(Colour(0xff4c4c4c)));
	}
	return drawable;
}
/*
DrawablePath * getDockablePath(const int type, const bool on, const bool over);
{
	DrawablePath * drawable = new DrawablePath();

	Path path;
	switch (type)
	{
	case TOP:
		if (on)
		{
			for (int i = 0; i < 5; ++i)
			{
				Line<float> line(0.0f + (0.1f*i), 0.0f + (0.2f*i), 1.0f - (0.1f*i), 0.0f + (0.2f*i));
				path.addLineSegment(line, 0.05f);
			}
		}
		else
			path.addTriangle(0.0f, 1.0f, 1.0f, 1.0f, 0.5f, 0.0f);
		break;

	case LEFT:
		if (on)
		{
			for (int i = 0; i < 5; ++i)
			{
				Line<float> line(0.0f + (0.2f*i), 0.0f + (0.1f*i), 0.0f + (0.2f*i), 1.0f - (0.1f*i));
				path.addLineSegment(line, 0.05f);
			}
		}
		else
			path.addTriangle(0.0f, 0.5f, 1.0f, 1.0f, 1.0f, 0.0f);
		break;

	case RIGHT:
		if (on)
		{
			for (int i = 0; i < 5; ++i)
			{
				Line<float> line(1.0f - (0.2f*i), 0.0f + (0.1f*i), 1.0f - (0.2f*i), 1.0f - (0.1f*i));
				path.addLineSegment(line, 0.05f);
			}
		}
		else
			path.addTriangle(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 0.5f);
		break;

	case BOTTOM:
		if (on)
		{
			for (int i = 0; i < 5; ++i)
			{
				Line<float> line(0.0f + (0.1f*i), 1.0f - (0.2f*i), 1.0f - (0.1f*i), 1.0f - (0.2f*i));
				path.addLineSegment(line, 0.05f);
			}
		}
		else
			path.addTriangle(0.0f, 0.0f, 1.0f, 0.0f, 0.5f, 1.0f);
		break;
	};
	drawable->setPath(path);

	if (on)
	{
		if (over)
			drawable->setFill(FillType(Colour(0xffcccccc)));
		else
			drawable->setFill(FillType(Colour(0xff999999)));
	}
	else
	{
		if (over)
			drawable->setFill(FillType(Colour(0xff999999)));
		else
			drawable->setFill(FillType(Colour(0xff4c4c4c)));
	}
	return drawable;
}
*/