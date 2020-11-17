/*
  ==============================================================================

  This is an automatically generated GUI class created by the Projucer!

  Be careful when adding custom code to these files, as only the code within
  the "//[xyz]" and "//[/xyz]" sections will be retained when the file is loaded
  and re-saved.

  Created with Projucer version: 6.0.4

  ------------------------------------------------------------------------------

  The Projucer is part of the JUCE library.
  Copyright (c) 2020 - Raw Material Software Limited.

  ==============================================================================
*/

#pragma once

//[Headers]     -- You can add your own extra header files here --
#include "../JuceLibraryCode/JuceHeader.h"

#include "TComponent.h"
#include "TStyleComponent.h"
#include "SearchComponent.h"
#include "ThumbnailComponent.h"
//[/Headers]



//==============================================================================
/**
                                                                    //[Comments]
    An auto-generated component, created by the Projucer.

    Describe your class and how it works here!
                                                                    //[/Comments]
*/
class ContentComponent  : public Component
{
public:
    //==============================================================================
    ContentComponent ();
    ~ContentComponent() override;

    //==============================================================================
    //[UserMethods]     -- You can add your own custom methods in this section.
	int getIdealHeight();
    //[/UserMethods]

    void paint (juce::Graphics& g) override;
    void resized() override;

    // Binary resources:
    static const char* title____bin;
    static const int title____binSize;


private:
    //[UserVariables]   -- You can add your own custom variables in this section.
	float fontSize{ 70.0 };
	TComponent c1;
	TComponent c2;
	TComponent c3;
	juce::OwnedArray< TStyleComponent> styles1;
	std::unique_ptr< juce::Label> bookLibrary;

	std::unique_ptr< SearchComponent> _searchCom;


	juce::OwnedArray< ThumbnailComponent> _thumbnails;

	struct TStyle {
		String s;
		Colour c;
	};
	std::vector<TStyle> _styles{ {"CHORDS", Colour(173, 109, 219)},
								{"CLASSICAL", Colour(51, 226, 247)},
								{"ELECTRONIC", Colour(158, 69, 51)},
								{"FOLK", Colour(18, 18, 18)},
								{"FUNK", Colour(143, 8, 156)},
								{"GOSPEL", Colour(7, 245, 134)},
								{"HIP HOP", Colour(227, 34, 34)},
								{"JAZZ", Colour(145, 15, 3)},
								{"KIDS", Colour(228, 254, 3)},
								{"POP", Colour(253, 35, 96)},
								{"RAP",  Colour(219, 98, 42)},
								{"RHYTHM AND BLUES", Colour(5, 61, 158)},

								{"ROCK", Colour(5, 125, 2)},
								{"SOUL", Colour(146, 5, 150)},
								{"THEMES", Colour(255, 212, 27)}
	};

    //[/UserVariables]

    //==============================================================================


    //==============================================================================
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (ContentComponent)
};

//[EndFile] You can add extra defines here...
//[/EndFile]

