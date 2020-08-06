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
//[/Headers]



//==============================================================================
/**
                                                                    //[Comments]
    An auto-generated component, created by the Projucer.

    Describe your class and how it works here!
                                                                    //[/Comments]
*/
class TStyleComponent  : public Component
{
public:
    //==============================================================================
    TStyleComponent (String styleText);
    ~TStyleComponent();

    //==============================================================================
    //[UserMethods]     -- You can add your own custom methods in this section.
	int getIdealWidth()
	{
		juce::AttributedString attributedText;
		attributedText.append(_lblStyleText->getText(), _lblStyleText->getFont());
		attributedText.setJustification(juce::Justification::left);
		int textWidth;
		int textHeight;
		TryToFit(attributedText, getWidth(), getHeight(), textWidth, textHeight);

		return int(_expectHeight * 1.5 + textWidth) + 1;
	}


	void TryToFit(juce::AttributedString & text, int tryWidth, int tryHeight, int & resultWidth, int & resultHeight)
	{
		juce::TextLayout textLayout;
		textLayout.createLayoutWithBalancedLineLengths(text, tryWidth, tryHeight);
		resultWidth = (int)ceil(textLayout.getWidth());
		resultHeight = (int)ceil(textLayout.getHeight());
	}

    //[/UserMethods]

    void paint (Graphics& g) override;
    void resized() override;



private:
    //[UserVariables]   -- You can add your own custom variables in this section.
	juce::Rectangle<float> _circleRect;
	juce::Rectangle<int> _lableRect;
	std::unique_ptr<juce::Label>  _lblStyleText;
	String _styleText;

public:
	static float _expectHeight  ;
    //[/UserVariables]

    //==============================================================================


    //==============================================================================
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (TStyleComponent)
};

//[EndFile] You can add extra defines here...
//[/EndFile]

