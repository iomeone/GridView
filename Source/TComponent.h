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
//[/Headers]



//==============================================================================
/**
                                                                    //[Comments]
    An auto-generated component, created by the Projucer.

    Describe your class and how it works here!
                                                                    //[/Comments]
*/
class TComponent  : public Component
{
public:
    //==============================================================================
    TComponent (String s);
    ~TComponent() override;

    //==============================================================================
    //[UserMethods]     -- You can add your own custom methods in this section.
    //[/UserMethods]

    void paint (juce::Graphics& g) override;
    void resized() override;



private:
    //[UserVariables]   -- You can add your own custom variables in this section.
	std::unique_ptr< DrawableButton> _starBtn1;
	std::unique_ptr< DrawableButton> _starBtn2;
	std::unique_ptr< DrawableButton> _starBtn3;

	std::unique_ptr< DrawableButton> _starBtn4;
	std::unique_ptr< DrawableButton> _starBtn5;
	std::unique_ptr< DrawableButton> _starBtn6;

	std::unique_ptr<Label> _diffiText;
	juce::String _s{ "unknow" };


    //[/UserVariables]

    //==============================================================================


    //==============================================================================
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (TComponent)
};

//[EndFile] You can add extra defines here...
//[/EndFile]

