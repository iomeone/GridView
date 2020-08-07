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
    textEditor->setColour (TextEditor::backgroundColourId, Colour (0x00495358));
    textEditor->setText (String());



    //[UserPreSize]
	textEditor->setColour(TextEditor::outlineColourId, Colours::transparentBlack);
	textEditor->setColour(TextEditor::focusedOutlineColourId, Colours::transparentBlack);
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

    textEditor->setBounds (10, 10, getWidth() - 20, getHeight() - 20);
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
              virtualName="" explicitFocusOrder="0" pos="10 10 20M 20M" bkgcol="495358"
              initialText="" multiline="0" retKeyStartsLine="0" readonly="0"
              scrollbars="0" caret="1" popupmenu="1"/>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif


//[EndFile] You can add extra defines here...
//[/EndFile]

