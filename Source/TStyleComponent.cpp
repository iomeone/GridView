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

//[Headers] You can add your own extra header files here...
//[/Headers]

#include "TStyleComponent.h"


//[MiscUserDefs] You can add your own user definitions and misc code here...
float TStyleComponent::_expectHeight = 40;
//[/MiscUserDefs]

//==============================================================================
TStyleComponent::TStyleComponent (String styleText)
    : _styleText(styleText)
{
    //[Constructor_pre] You can add your own custom stuff here..
	_lblStyleText.reset(new Label("new label",
		TRANS(_styleText)));
	addAndMakeVisible(_lblStyleText.get());
	_lblStyleText->setFont(Font(20.00f, Font::bold).withTypefaceStyle("Regular"));
	_lblStyleText->setJustificationType(Justification::centred);
	_lblStyleText->setEditable(false, false, false);
	_lblStyleText->setColour(TextEditor::textColourId, Colours::black);
	_lblStyleText->setColour(TextEditor::backgroundColourId, Colour(0x00000000));

    //[/Constructor_pre]


    //[UserPreSize]
    //[/UserPreSize]

    setSize (600, 400);


    //[Constructor] You can add your own custom stuff here..
    //[/Constructor]
}

TStyleComponent::~TStyleComponent()
{
    //[Destructor_pre]. You can add your own custom destruction code here..
    //[/Destructor_pre]



    //[Destructor]. You can add your own custom destruction code here..
    //[/Destructor]
}

//==============================================================================
void TStyleComponent::paint (Graphics& g)
{
    //[UserPrePaint] Add your own custom painting code here..
    //[/UserPrePaint]

    g.fillAll (Colour (0xff323e44));

    //[UserPaint] Add your own custom painting code here..
	Colour fillColour = Colour(0xff3c684b);
	g.setColour(fillColour);
	g.fillEllipse(_circleRect);

    //[/UserPaint]
}

void TStyleComponent::resized()
{
    //[UserPreResize] Add your own custom resize code here..
    //[/UserPreResize]

    //[UserResized] Add your own custom resize handling here..
	float h = getHeight();
	float w = getWidth();

	float hq = h / 4;

	_circleRect.setBounds(hq, hq, hq*2.f, hq*2.f);

	_lableRect.setBounds(hq * 4.f, hq, w - hq * 6.0f, hq *2.f);

	_lblStyleText->setBounds(_lableRect);
    //[/UserResized]
}



//[MiscUserCode] You can add your own definitions of your custom methods or any other code here...
//[/MiscUserCode]


//==============================================================================
#if 0
/*  -- Projucer information section --

    This is where the Projucer stores the metadata that describe this GUI layout, so
    make changes in here at your peril!

BEGIN_JUCER_METADATA

<JUCER_COMPONENT documentType="Component" className="TStyleComponent" componentName=""
                 parentClasses="public Component" constructorParams="String styleText"
                 variableInitialisers="_styleText(styleText)" snapPixels="8" snapActive="1"
                 snapShown="1" overlayOpacity="0.330" fixedSize="0" initialWidth="600"
                 initialHeight="400">
  <BACKGROUND backgroundColour="ff323e44"/>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif


//[EndFile] You can add extra defines here...
//[/EndFile]

