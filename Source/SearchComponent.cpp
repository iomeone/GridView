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

#include "SearchComponent.h"


//[MiscUserDefs] You can add your own user definitions and misc code here...
#include "TUICommon.h"
//[/MiscUserDefs]

//==============================================================================
SearchComponent::SearchComponent ()
{
    //[Constructor_pre] You can add your own custom stuff here..
    //[/Constructor_pre]

    textEditor.reset (new TextEditor ("new text editor"));
    addAndMakeVisible (textEditor.get());
    textEditor->setMultiLine (false);
    textEditor->setReturnKeyStartsNewLine (false);
    textEditor->setReadOnly (false);
    textEditor->setScrollbarsShown (false);
    textEditor->setCaretVisible (true);
    textEditor->setPopupMenuEnabled (true);
    textEditor->setColour (TextEditor::backgroundColourId, Colour (0x40565849));
    textEditor->setColour (TextEditor::outlineColourId, Colour (0x00992020));
    textEditor->setText (String());

    _btnSearch.reset (new DrawableButton ("searchButton", DrawableButton::ImageFitted));
    addAndMakeVisible (_btnSearch.get());
    _btnSearch->setName ("searchButton");


    //[UserPreSize]
	auto f = textEditor->getFont();
	f.setHeight(30);
	textEditor->setFont(f);
	textEditor->setColour(TextEditor::outlineColourId, Colours::transparentBlack);
	textEditor->setColour(TextEditor::focusedOutlineColourId, Colours::transparentBlack);


	Drawable * normalImage, *overImage, *downImage, *disabledImage;
	Drawable * normalImageOn, *overImageOn, *downImageOn, *disabledImageOn;

	normalImage = getDockablePath(TOP, false, false);
	overImage = getDockablePath(TOP, false, true);
	normalImageOn = getDockablePath(TOP, true, false);
	overImageOn = getDockablePath(TOP, true, true);

	downImage = 0; downImageOn = 0;
	disabledImage = 0; disabledImageOn = 0;

	_btnSearch->setImages(normalImage, overImage, downImage, disabledImage,
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

SearchComponent::~SearchComponent()
{
    //[Destructor_pre]. You can add your own custom destruction code here..
    //[/Destructor_pre]

    textEditor = nullptr;
    _btnSearch = nullptr;


    //[Destructor]. You can add your own custom destruction code here..
    //[/Destructor]
}

//==============================================================================
void SearchComponent::paint (Graphics& g)
{
    //[UserPrePaint] Add your own custom painting code here..
    //[/UserPrePaint]

    {
        float x = 2.0f, y = 2.0f, width = static_cast<float> (getWidth() - 4), height = static_cast<float> (getHeight() - 4);
        Colour strokeColour = Colours::aliceblue;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (strokeColour);
        g.drawRoundedRectangle (x, y, width, height, 20.000f, 2.000f);
    }

    //[UserPaint] Add your own custom painting code here..
    //[/UserPaint]
}

void SearchComponent::resized()
{
    //[UserPreResize] Add your own custom resize code here..
    //[/UserPreResize]

    textEditor->setBounds (5, 5, getWidth() - 40, getHeight() - 10);
    _btnSearch->setBounds (getWidth() - 50, 4, 40, 40);
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

<JUCER_COMPONENT documentType="Component" className="SearchComponent" componentName=""
                 parentClasses="public Component" constructorParams="" variableInitialisers=""
                 snapPixels="8" snapActive="1" snapShown="1" overlayOpacity="0.330"
                 fixedSize="0" initialWidth="600" initialHeight="400">
  <BACKGROUND backgroundColour="0">
    <ROUNDRECT pos="2 2 4M 4M" cornerSize="20.0" fill="solid: 0" hasStroke="1"
               stroke="2, mitered, butt" strokeColour="solid: fff0f8ff"/>
  </BACKGROUND>
  <TEXTEDITOR name="new text editor" id="d6c1ca47e83c789f" memberName="textEditor"
              virtualName="" explicitFocusOrder="0" pos="5 5 40M 10M" bkgcol="40565849"
              outlinecol="992020" initialText="" multiline="0" retKeyStartsLine="0"
              readonly="0" scrollbars="0" caret="1" popupmenu="1"/>
  <GENERICCOMPONENT name="searchButton" id="c2a79b23342d64d5" memberName="_btnSearch"
                    virtualName="DrawableButton" explicitFocusOrder="0" pos="50R 4 40 40"
                    class="DrawableButton" params="&quot;searchButton&quot;, DrawableButton::ImageFitted"/>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif


//[EndFile] You can add extra defines here...
//[/EndFile]

