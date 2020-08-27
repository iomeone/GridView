/*
  ==============================================================================

  This is an automatically generated GUI class created by the Projucer!

  Be careful when adding custom code to these files, as only the code within
  the "//[xyz]" and "//[/xyz]" sections will be retained when the file is loaded
  and re-saved.

  Created with Projucer version: 5.4.5

  ------------------------------------------------------------------------------

  The Projucer is part of the JUCE library.
  Copyright (c) 2017 - ROLI Ltd.

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
    ~ContentComponent();

    //==============================================================================
    //[UserMethods]     -- You can add your own custom methods in this section.
	int getIdealHeight();
    //[/UserMethods]

    void paint (Graphics& g) override;
    void resized() override;

    // Binary resources:
    static const char* title____bin;
    static const int title____binSize;


private:
    //[UserVariables]   -- You can add your own custom variables in this section.
	float fontSize{ 100.0 };
	TComponent c1;
	TComponent c2;
	TComponent c3;
	juce::OwnedArray< TStyleComponent> styles1;
	std::unique_ptr< juce::Label> bookLibrary;

	std::unique_ptr< SearchComponent> _searchCom;


	juce::OwnedArray< ThumbnailComponent> _thumbnails;

	std::vector<String> _styles { "CHORDS","CLASSICAL","ELECTRONIC","FOLK","FUNK","GOSPEL","HIP","HOP","JAZZ","KIDS","POP","RAP","RHYTHM","AND","BLUES","ROCK","SOUL","THEMES"};

    //[/UserVariables]

    //==============================================================================


    //==============================================================================
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (ContentComponent)
};

//[EndFile] You can add extra defines here...
//[/EndFile]

