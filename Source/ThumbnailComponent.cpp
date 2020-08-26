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

#include "ThumbnailComponent.h"


//[MiscUserDefs] You can add your own user definitions and misc code here...
#include "TUICommon.h"
//[/MiscUserDefs]

//==============================================================================
ThumbnailComponent::ThumbnailComponent ()
{
    //[Constructor_pre] You can add your own custom stuff here..
    //[/Constructor_pre]

    _btnThumbnail.reset (new DrawableButton ("ThumbnailButton", DrawableButton::ImageFitted));
    addAndMakeVisible (_btnThumbnail.get());
    _btnThumbnail->setName ("ThumbnailButton");


    //[UserPreSize]


	Drawable * normalImage, *overImage, *downImage, *disabledImage;
	Drawable * normalImageOn, *overImageOn, *downImageOn, *disabledImageOn;

	normalImage = getThumbnailPath(TOP, false, false);
	overImage = getThumbnailPath(TOP, false, true);
	normalImageOn = getThumbnailPath(TOP, true, false);
	overImageOn = getThumbnailPath(TOP, true, true);

	downImage = 0; downImageOn = 0;
	disabledImage = 0; disabledImageOn = 0;

	_btnThumbnail->setImages(normalImage, overImage, downImage, disabledImage,
		normalImageOn, overImageOn, downImageOn, disabledImageOn);



	delete normalImage; delete normalImageOn;
	delete overImage; delete overImageOn;
	delete downImage; delete downImageOn;
	delete disabledImage; delete disabledImageOn;


    //[/UserPreSize]

    setSize (600, 400);


    //[Constructor] You can add your own custom stuff here..
    //[/Constructor]
}

ThumbnailComponent::~ThumbnailComponent()
{
    //[Destructor_pre]. You can add your own custom destruction code here..
    //[/Destructor_pre]

    _btnThumbnail = nullptr;


    //[Destructor]. You can add your own custom destruction code here..
    //[/Destructor]
}

//==============================================================================
void ThumbnailComponent::paint (Graphics& g)
{
    //[UserPrePaint] Add your own custom painting code here..
    //[/UserPrePaint]

    g.fillAll (Colour (0xff323e44));

    //[UserPaint] Add your own custom painting code here..
    //[/UserPaint]
}

void ThumbnailComponent::resized()
{
    //[UserPreResize] Add your own custom resize code here..
    //[/UserPreResize]

    _btnThumbnail->setBounds (0, 0, proportionOfWidth (1.0000f), proportionOfHeight (0.6180f));
    //[UserResized] Add your own custom resize handling here..
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

<JUCER_COMPONENT documentType="Component" className="ThumbnailComponent" componentName=""
                 parentClasses="public Component" constructorParams="" variableInitialisers=""
                 snapPixels="8" snapActive="1" snapShown="1" overlayOpacity="0.330"
                 fixedSize="0" initialWidth="600" initialHeight="400">
  <BACKGROUND backgroundColour="ff323e44"/>
  <GENERICCOMPONENT name="ThumbnailButton" id="e1dd5cf488f648b" memberName="_btnThumbnail"
                    virtualName="DrawableButton" explicitFocusOrder="0" pos="0 0 100% 61.841%"
                    class="DrawableButton" params="&quot;ThumbnailButton&quot;, DrawableButton::ImageFitted"/>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif


//[EndFile] You can add extra defines here...
//[/EndFile]

