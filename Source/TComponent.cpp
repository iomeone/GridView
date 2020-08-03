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

#include "TComponent.h"


//[MiscUserDefs] You can add your own user definitions and misc code here...
//[/MiscUserDefs]

//==============================================================================
TComponent::TComponent (String s)
    : _s(s)
{
    //[Constructor_pre] You can add your own custom stuff here..

	DrawablePath normal, over;

	Path p;
	p.addStar({}, 5, 20.0f, 50.0f, 0.f);
	normal.setPath(p);
	normal.setFill(Colours::lightblue);
	normal.setStrokeFill(Colours::black);
	normal.setStrokeThickness(4.0f);

	over.setPath(p);
	over.setFill(Colours::blue);
	over.setStrokeFill(Colours::black);
	over.setStrokeThickness(4.0f);

	_starBtn1.reset(new DrawableButton(String(1) + " points", DrawableButton::ImageFitted));
	_starBtn1->setImages(&normal, &over, nullptr);
	_starBtn1->setClickingTogglesState(true);
	_starBtn1->setRadioGroupId(23456);
	addAndMakeVisible(_starBtn1.get());

	_starBtn2.reset(new DrawableButton(String(2) + " points", DrawableButton::ImageFitted));
	_starBtn2->setImages(&normal, &over, nullptr);
	_starBtn2->setClickingTogglesState(true);
	_starBtn2->setRadioGroupId(23456);
	addAndMakeVisible(_starBtn2.get());

	_starBtn3.reset(new DrawableButton(String(3) + " points", DrawableButton::ImageFitted));
	_starBtn3->setImages(&normal, &over, nullptr);
	_starBtn3->setClickingTogglesState(true);
	_starBtn3->setRadioGroupId(23456);
	addAndMakeVisible(_starBtn3.get());

	_starBtn4.reset(new DrawableButton(String(4) + " points", DrawableButton::ImageFitted));
	_starBtn4->setImages(&normal, &over, nullptr);
	_starBtn4->setClickingTogglesState(true);
	_starBtn4->setRadioGroupId(23456);
	addAndMakeVisible(_starBtn4.get());

	_starBtn5.reset(new DrawableButton(String(5) + " points", DrawableButton::ImageFitted));
	_starBtn5->setImages(&normal, &over, nullptr);
	_starBtn5->setClickingTogglesState(true);
	_starBtn5->setRadioGroupId(23456);
	addAndMakeVisible(_starBtn5.get());

	_starBtn6.reset(new DrawableButton(String(6) + " points", DrawableButton::ImageFitted));
	_starBtn6->setImages(&normal, &over, nullptr);
	_starBtn6->setClickingTogglesState(true);
	_starBtn6->setRadioGroupId(23456);

	addAndMakeVisible(_starBtn6.get());

	_diffiText.reset(new juce::Label("lbldiff", _s));
	auto f = _diffiText->getFont();

	f.setSizeAndStyle(30, Font::FontStyleFlags::bold, 1.0, 0);
	_diffiText->setFont(f);
	_diffiText->setJustificationType(Justification::centred);
	addAndMakeVisible(_diffiText.get());
    //[/Constructor_pre]


    //[UserPreSize]
    //[/UserPreSize]

    setSize (600, 400);


    //[Constructor] You can add your own custom stuff here..
    //[/Constructor]
}

TComponent::~TComponent()
{
    //[Destructor_pre]. You can add your own custom destruction code here..
    //[/Destructor_pre]



    //[Destructor]. You can add your own custom destruction code here..
    //[/Destructor]
}

//==============================================================================
void TComponent::paint (Graphics& g)
{
    //[UserPrePaint] Add your own custom painting code here..

	//int buttonSize = 50;
	//db->setBounds(25 + i * buttonSize, 180, buttonSize, buttonSize);

	//if (i == 0)
	//	db->setToggleState(true, dontSendNotification);


    //[/UserPrePaint]

    g.fillAll (Colours::black);

    //[UserPaint] Add your own custom painting code here..

    //[/UserPaint]
}

void TComponent::resized()
{
    //[UserPreResize] Add your own custom resize code here..
    //[/UserPreResize]

    //[UserResized] Add your own custom resize handling here..
	int difftextheight = 30;
	int perWidth = proportionOfWidth(0.1666667);
	int perheight = getHeight()- difftextheight;
	int i = 0;
	_starBtn1->setBounds(0 + i * perWidth, 0, perWidth, perheight);

	i++;
	_starBtn2->setBounds(0 + i * perWidth, 0, perWidth, perheight);

	i++;
	_starBtn3->setBounds(0 + i * perWidth, 0, perWidth, perheight);

	i++;
	_starBtn4->setBounds(0 + i * perWidth, 0, perWidth, perheight);

	i++;
	_starBtn5->setBounds(0 + i * perWidth, 0, perWidth, perheight);

	i++;
	_starBtn6->setBounds(0 + i * perWidth, 0, perWidth, perheight);

	_diffiText->setBounds(0, perheight, getWidth(), difftextheight);
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

<JUCER_COMPONENT documentType="Component" className="TComponent" componentName=""
                 parentClasses="public Component" constructorParams="String s"
                 variableInitialisers="_s(s)" snapPixels="8" snapActive="1" snapShown="1"
                 overlayOpacity="0.330" fixedSize="0" initialWidth="600" initialHeight="400">
  <BACKGROUND backgroundColour="ff000000"/>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif


//[EndFile] You can add extra defines here...
//[/EndFile]

