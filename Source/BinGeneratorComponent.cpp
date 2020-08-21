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

#include "BinGeneratorComponent.h"


//[MiscUserDefs] You can add your own user definitions and misc code here...
//[/MiscUserDefs]

//==============================================================================
BinGeneratorComponent::BinGeneratorComponent ()
    : DocumentWindow("Document Window", Colours::darkgreen, DocumentWindow::allButtons)
{
    //[Constructor_pre] You can add your own custom stuff here..

    //[/Constructor_pre]

    _labelTexturePng.reset (new Label ("new label",
                                       TRANS("texture png\n")));
    addAndMakeVisible (_labelTexturePng.get());
    _labelTexturePng->setFont (Font (15.00f, Font::plain).withTypefaceStyle ("Regular"));
    _labelTexturePng->setJustificationType (Justification::centredLeft);
    _labelTexturePng->setEditable (false, false, false);
    _labelTexturePng->setColour (TextEditor::textColourId, Colours::black);
    _labelTexturePng->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    _labelTexturePng->setBounds (40, 48, 150, 24);

    _textEditorTexturePng.reset (new TextEditor ("texturePng"));
    addAndMakeVisible (_textEditorTexturePng.get());
    _textEditorTexturePng->setMultiLine (false);
    _textEditorTexturePng->setReturnKeyStartsNewLine (false);
    _textEditorTexturePng->setReadOnly (false);
    _textEditorTexturePng->setScrollbarsShown (true);
    _textEditorTexturePng->setCaretVisible (true);
    _textEditorTexturePng->setPopupMenuEnabled (true);
    _textEditorTexturePng->setText (String());

    _textEditorTexturePng->setBounds (216, 48, 472, 24);

    _textButtonTexturePng.reset (new TextButton ("_openTexturePng"));
    addAndMakeVisible (_textButtonTexturePng.get());
    _textButtonTexturePng->setButtonText (TRANS("open"));
    _textButtonTexturePng->addListener (this);

    _textButtonTexturePng->setBounds (720, 48, 150, 24);

    _textButtonxmlSheet.reset (new TextButton ("_openxmlSheet"));
    addAndMakeVisible (_textButtonxmlSheet.get());
    _textButtonxmlSheet->setButtonText (TRANS("open"));
    _textButtonxmlSheet->addListener (this);

    _textButtonxmlSheet->setBounds (728, 120, 150, 24);

    _textEditorxmlSheet.reset (new TextEditor ("xmlSheet"));
    addAndMakeVisible (_textEditorxmlSheet.get());
    _textEditorxmlSheet->setMultiLine (false);
    _textEditorxmlSheet->setReturnKeyStartsNewLine (false);
    _textEditorxmlSheet->setReadOnly (false);
    _textEditorxmlSheet->setScrollbarsShown (true);
    _textEditorxmlSheet->setCaretVisible (true);
    _textEditorxmlSheet->setPopupMenuEnabled (true);
    _textEditorxmlSheet->setText (String());

    _textEditorxmlSheet->setBounds (216, 120, 472, 24);

    _labelXmlSheet.reset (new Label ("XmlSheet",
                                     TRANS("XmlSheet")));
    addAndMakeVisible (_labelXmlSheet.get());
    _labelXmlSheet->setFont (Font (15.00f, Font::plain).withTypefaceStyle ("Regular"));
    _labelXmlSheet->setJustificationType (Justification::centredLeft);
    _labelXmlSheet->setEditable (false, false, false);
    _labelXmlSheet->setColour (TextEditor::textColourId, Colours::black);
    _labelXmlSheet->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    _labelXmlSheet->setBounds (40, 120, 150, 24);

    _textButtonParticleFragment.reset (new TextButton ("_openParticleFragment"));
    addAndMakeVisible (_textButtonParticleFragment.get());
    _textButtonParticleFragment->setButtonText (TRANS("open"));
    _textButtonParticleFragment->addListener (this);

    _textButtonParticleFragment->setBounds (732, 205, 150, 24);

    _textEditorParticleFragment.reset (new TextEditor ("ParticleFragment"));
    addAndMakeVisible (_textEditorParticleFragment.get());
    _textEditorParticleFragment->setMultiLine (false);
    _textEditorParticleFragment->setReturnKeyStartsNewLine (false);
    _textEditorParticleFragment->setReadOnly (false);
    _textEditorParticleFragment->setScrollbarsShown (true);
    _textEditorParticleFragment->setCaretVisible (true);
    _textEditorParticleFragment->setPopupMenuEnabled (true);
    _textEditorParticleFragment->setText (String());

    _textEditorParticleFragment->setBounds (220, 205, 472, 24);

    _labelParticleFragment.reset (new Label ("ParticleFragment",
                                             TRANS("ParticleFragment")));
    addAndMakeVisible (_labelParticleFragment.get());
    _labelParticleFragment->setFont (Font (15.00f, Font::plain).withTypefaceStyle ("Regular"));
    _labelParticleFragment->setJustificationType (Justification::centredLeft);
    _labelParticleFragment->setEditable (false, false, false);
    _labelParticleFragment->setColour (TextEditor::textColourId, Colours::black);
    _labelParticleFragment->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    _labelParticleFragment->setBounds (44, 205, 150, 24);

    _textButtonParticleVetex.reset (new TextButton ("_openParticleVetex"));
    addAndMakeVisible (_textButtonParticleVetex.get());
    _textButtonParticleVetex->setButtonText (TRANS("open"));
    _textButtonParticleVetex->addListener (this);

    _textButtonParticleVetex->setBounds (737, 264, 150, 24);

    _textEditorParticleVetex.reset (new TextEditor ("ParticleVetex"));
    addAndMakeVisible (_textEditorParticleVetex.get());
    _textEditorParticleVetex->setMultiLine (false);
    _textEditorParticleVetex->setReturnKeyStartsNewLine (false);
    _textEditorParticleVetex->setReadOnly (false);
    _textEditorParticleVetex->setScrollbarsShown (true);
    _textEditorParticleVetex->setCaretVisible (true);
    _textEditorParticleVetex->setPopupMenuEnabled (true);
    _textEditorParticleVetex->setText (String());

    _textEditorParticleVetex->setBounds (216, 264, 472, 24);

    _labelParticleVetex.reset (new Label ("ParticleVetex",
                                          TRANS("ParticleVetex")));
    addAndMakeVisible (_labelParticleVetex.get());
    _labelParticleVetex->setFont (Font (15.00f, Font::plain).withTypefaceStyle ("Regular"));
    _labelParticleVetex->setJustificationType (Justification::centredLeft);
    _labelParticleVetex->setEditable (false, false, false);
    _labelParticleVetex->setColour (TextEditor::textColourId, Colours::black);
    _labelParticleVetex->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    _labelParticleVetex->setBounds (40, 264, 150, 24);

    _textButtonstaffFragment.reset (new TextButton ("_openstaffFragment"));
    addAndMakeVisible (_textButtonstaffFragment.get());
    _textButtonstaffFragment->setButtonText (TRANS("open"));
    _textButtonstaffFragment->addListener (this);

    _textButtonstaffFragment->setBounds (732, 398, 150, 24);

    _textEditorstaffFragment2.reset (new TextEditor ("staffFragment"));
    addAndMakeVisible (_textEditorstaffFragment2.get());
    _textEditorstaffFragment2->setMultiLine (false);
    _textEditorstaffFragment2->setReturnKeyStartsNewLine (false);
    _textEditorstaffFragment2->setReadOnly (false);
    _textEditorstaffFragment2->setScrollbarsShown (true);
    _textEditorstaffFragment2->setCaretVisible (true);
    _textEditorstaffFragment2->setPopupMenuEnabled (true);
    _textEditorstaffFragment2->setText (String());

    _textEditorstaffFragment2->setBounds (220, 398, 472, 24);

    _labelstaffFragment.reset (new Label ("staffFragment",
                                          TRANS("staffFragment")));
    addAndMakeVisible (_labelstaffFragment.get());
    _labelstaffFragment->setFont (Font (15.00f, Font::plain).withTypefaceStyle ("Regular"));
    _labelstaffFragment->setJustificationType (Justification::centredLeft);
    _labelstaffFragment->setEditable (false, false, false);
    _labelstaffFragment->setColour (TextEditor::textColourId, Colours::black);
    _labelstaffFragment->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    _labelstaffFragment->setBounds (44, 398, 150, 24);

    _textButtonstaffVetex.reset (new TextButton ("_openstaffVetex"));
    addAndMakeVisible (_textButtonstaffVetex.get());
    _textButtonstaffVetex->setButtonText (TRANS("open"));
    _textButtonstaffVetex->addListener (this);

    _textButtonstaffVetex->setBounds (737, 457, 150, 24);

    _textEditorstaffVetex.reset (new TextEditor ("staffVetex"));
    addAndMakeVisible (_textEditorstaffVetex.get());
    _textEditorstaffVetex->setMultiLine (false);
    _textEditorstaffVetex->setReturnKeyStartsNewLine (false);
    _textEditorstaffVetex->setReadOnly (false);
    _textEditorstaffVetex->setScrollbarsShown (true);
    _textEditorstaffVetex->setCaretVisible (true);
    _textEditorstaffVetex->setPopupMenuEnabled (true);
    _textEditorstaffVetex->setText (String());

    _textEditorstaffVetex->setBounds (216, 457, 472, 24);

    _labelstaffVetex.reset (new Label ("staffVetex",
                                       TRANS("staffVetex")));
    addAndMakeVisible (_labelstaffVetex.get());
    _labelstaffVetex->setFont (Font (15.00f, Font::plain).withTypefaceStyle ("Regular"));
    _labelstaffVetex->setJustificationType (Justification::centredLeft);
    _labelstaffVetex->setEditable (false, false, false);
    _labelstaffVetex->setColour (TextEditor::textColourId, Colours::black);
    _labelstaffVetex->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    _labelstaffVetex->setBounds (40, 457, 150, 24);

    _textButtonTieFragment2.reset (new TextButton ("_openTieFragment"));
    addAndMakeVisible (_textButtonTieFragment2.get());
    _textButtonTieFragment2->setButtonText (TRANS("open"));
    _textButtonTieFragment2->addListener (this);

    _textButtonTieFragment2->setBounds (728, 606, 150, 24);

    _textEditorTieFragment3.reset (new TextEditor ("TieFragment"));
    addAndMakeVisible (_textEditorTieFragment3.get());
    _textEditorTieFragment3->setMultiLine (false);
    _textEditorTieFragment3->setReturnKeyStartsNewLine (false);
    _textEditorTieFragment3->setReadOnly (false);
    _textEditorTieFragment3->setScrollbarsShown (true);
    _textEditorTieFragment3->setCaretVisible (true);
    _textEditorTieFragment3->setPopupMenuEnabled (true);
    _textEditorTieFragment3->setText (String());

    _textEditorTieFragment3->setBounds (216, 606, 472, 24);

    _labelTieFragment.reset (new Label ("TiefFragment",
                                        TRANS("TieFragment")));
    addAndMakeVisible (_labelTieFragment.get());
    _labelTieFragment->setFont (Font (15.00f, Font::plain).withTypefaceStyle ("Regular"));
    _labelTieFragment->setJustificationType (Justification::centredLeft);
    _labelTieFragment->setEditable (false, false, false);
    _labelTieFragment->setColour (TextEditor::textColourId, Colours::black);
    _labelTieFragment->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    _labelTieFragment->setBounds (40, 606, 150, 24);

    _textButtonTieVetex.reset (new TextButton ("_openTieVetex"));
    addAndMakeVisible (_textButtonTieVetex.get());
    _textButtonTieVetex->setButtonText (TRANS("open"));
    _textButtonTieVetex->addListener (this);

    _textButtonTieVetex->setBounds (733, 665, 150, 24);

    _textEditorTieVetex.reset (new TextEditor ("TieVetex"));
    addAndMakeVisible (_textEditorTieVetex.get());
    _textEditorTieVetex->setMultiLine (false);
    _textEditorTieVetex->setReturnKeyStartsNewLine (false);
    _textEditorTieVetex->setReadOnly (false);
    _textEditorTieVetex->setScrollbarsShown (true);
    _textEditorTieVetex->setCaretVisible (true);
    _textEditorTieVetex->setPopupMenuEnabled (true);
    _textEditorTieVetex->setText (String());

    _textEditorTieVetex->setBounds (212, 665, 472, 24);

    _labelTieVetex2.reset (new Label ("TieVetex",
                                      TRANS("TieVetex")));
    addAndMakeVisible (_labelTieVetex2.get());
    _labelTieVetex2->setFont (Font (15.00f, Font::plain).withTypefaceStyle ("Regular"));
    _labelTieVetex2->setJustificationType (Justification::centredLeft);
    _labelTieVetex2->setEditable (false, false, false);
    _labelTieVetex2->setColour (TextEditor::textColourId, Colours::black);
    _labelTieVetex2->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    _labelTieVetex2->setBounds (36, 665, 150, 24);


    //[UserPreSize]
    //[/UserPreSize]

    setSize (600, 400);


    //[Constructor] You can add your own custom stuff here..
	setSize(1920 * 0.75, 1200 * 0.75);
    //[/Constructor]
}

BinGeneratorComponent::~BinGeneratorComponent()
{
    //[Destructor_pre]. You can add your own custom destruction code here..
    //[/Destructor_pre]

    _labelTexturePng = nullptr;
    _textEditorTexturePng = nullptr;
    _textButtonTexturePng = nullptr;
    _textButtonxmlSheet = nullptr;
    _textEditorxmlSheet = nullptr;
    _labelXmlSheet = nullptr;
    _textButtonParticleFragment = nullptr;
    _textEditorParticleFragment = nullptr;
    _labelParticleFragment = nullptr;
    _textButtonParticleVetex = nullptr;
    _textEditorParticleVetex = nullptr;
    _labelParticleVetex = nullptr;
    _textButtonstaffFragment = nullptr;
    _textEditorstaffFragment2 = nullptr;
    _labelstaffFragment = nullptr;
    _textButtonstaffVetex = nullptr;
    _textEditorstaffVetex = nullptr;
    _labelstaffVetex = nullptr;
    _textButtonTieFragment2 = nullptr;
    _textEditorTieFragment3 = nullptr;
    _labelTieFragment = nullptr;
    _textButtonTieVetex = nullptr;
    _textEditorTieVetex = nullptr;
    _labelTieVetex2 = nullptr;


    //[Destructor]. You can add your own custom destruction code here..
    //[/Destructor]
}

//==============================================================================
void BinGeneratorComponent::paint (Graphics& g)
{
    //[UserPrePaint] Add your own custom painting code here..
    //[/UserPrePaint]

    g.fillAll (Colour (0xff323e44));

    //[UserPaint] Add your own custom painting code here..
    //[/UserPaint]
}

void BinGeneratorComponent::resized()
{
    //[UserPreResize] Add your own custom resize code here..
    //[/UserPreResize]

    //[UserResized] Add your own custom resize handling here..
    //[/UserResized]
}

void BinGeneratorComponent::buttonClicked (Button* buttonThatWasClicked)
{
    //[UserbuttonClicked_Pre]
    //[/UserbuttonClicked_Pre]

    if (buttonThatWasClicked == _textButtonTexturePng.get())
    {
        //[UserButtonCode__textButtonTexturePng] -- add your button handler code here..
		FileChooser myChooser("Please select the Texture Png File.",
			File::getCurrentWorkingDirectory(),
			//File("C:/Users/user/Desktop/test"),
			"*.txt;*.svg"); //"*.dll; *.*""
		if (myChooser.browseForFileToOpen())
		{
			juce::File textureFile = myChooser.getResult();
			_textEditorTexturePng->setText(textureFile.getFullPathName());
		}

        //[/UserButtonCode__textButtonTexturePng]
    }
    else if (buttonThatWasClicked == _textButtonxmlSheet.get())
    {
        //[UserButtonCode__textButtonxmlSheet] -- add your button handler code here..
        //[/UserButtonCode__textButtonxmlSheet]
    }
    else if (buttonThatWasClicked == _textButtonParticleFragment.get())
    {
        //[UserButtonCode__textButtonParticleFragment] -- add your button handler code here..
        //[/UserButtonCode__textButtonParticleFragment]
    }
    else if (buttonThatWasClicked == _textButtonParticleVetex.get())
    {
        //[UserButtonCode__textButtonParticleVetex] -- add your button handler code here..
        //[/UserButtonCode__textButtonParticleVetex]
    }
    else if (buttonThatWasClicked == _textButtonstaffFragment.get())
    {
        //[UserButtonCode__textButtonstaffFragment] -- add your button handler code here..
        //[/UserButtonCode__textButtonstaffFragment]
    }
    else if (buttonThatWasClicked == _textButtonstaffVetex.get())
    {
        //[UserButtonCode__textButtonstaffVetex] -- add your button handler code here..
        //[/UserButtonCode__textButtonstaffVetex]
    }
    else if (buttonThatWasClicked == _textButtonTieFragment2.get())
    {
        //[UserButtonCode__textButtonTieFragment2] -- add your button handler code here..
        //[/UserButtonCode__textButtonTieFragment2]
    }
    else if (buttonThatWasClicked == _textButtonTieVetex.get())
    {
        //[UserButtonCode__textButtonTieVetex] -- add your button handler code here..
        //[/UserButtonCode__textButtonTieVetex]
    }

    //[UserbuttonClicked_Post]
    //[/UserbuttonClicked_Post]
}



//[MiscUserCode] You can add your own definitions of your custom methods or any other code here...
//[/MiscUserCode]


//==============================================================================
#if 0
/*  -- Projucer information section --

    This is where the Projucer stores the metadata that describe this GUI layout, so
    make changes in here at your peril!

BEGIN_JUCER_METADATA

<JUCER_COMPONENT documentType="Component" className="BinGeneratorComponent" componentName=""
                 parentClasses="public DocumentWindow" constructorParams="" variableInitialisers=" DocumentWindow(&quot;Document Window&quot;, Colours::darkgreen, DocumentWindow::allButtons)"
                 snapPixels="8" snapActive="1" snapShown="1" overlayOpacity="0.330"
                 fixedSize="0" initialWidth="600" initialHeight="400">
  <BACKGROUND backgroundColour="ff323e44"/>
  <LABEL name="new label" id="d77da4bf617327bb" memberName="_labelTexturePng"
         virtualName="" explicitFocusOrder="0" pos="40 48 150 24" edTextCol="ff000000"
         edBkgCol="0" labelText="texture png&#10;" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15.0" kerning="0.0" bold="0" italic="0" justification="33"/>
  <TEXTEDITOR name="texturePng" id="67d003976302167" memberName="_textEditorTexturePng"
              virtualName="" explicitFocusOrder="0" pos="216 48 472 24" initialText=""
              multiline="0" retKeyStartsLine="0" readonly="0" scrollbars="1"
              caret="1" popupmenu="1"/>
  <TEXTBUTTON name="_openTexturePng" id="60b09a8dcd1deaf6" memberName="_textButtonTexturePng"
              virtualName="" explicitFocusOrder="0" pos="720 48 150 24" buttonText="open"
              connectedEdges="0" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="_openxmlSheet" id="107f1754d581f00e" memberName="_textButtonxmlSheet"
              virtualName="" explicitFocusOrder="0" pos="728 120 150 24" buttonText="open"
              connectedEdges="0" needsCallback="1" radioGroupId="0"/>
  <TEXTEDITOR name="xmlSheet" id="1095a4a1e3f3cb21" memberName="_textEditorxmlSheet"
              virtualName="" explicitFocusOrder="0" pos="216 120 472 24" initialText=""
              multiline="0" retKeyStartsLine="0" readonly="0" scrollbars="1"
              caret="1" popupmenu="1"/>
  <LABEL name="XmlSheet" id="e9697c6ffb3ad626" memberName="_labelXmlSheet"
         virtualName="" explicitFocusOrder="0" pos="40 120 150 24" edTextCol="ff000000"
         edBkgCol="0" labelText="XmlSheet" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15.0"
         kerning="0.0" bold="0" italic="0" justification="33"/>
  <TEXTBUTTON name="_openParticleFragment" id="63d8fd3e8952293" memberName="_textButtonParticleFragment"
              virtualName="" explicitFocusOrder="0" pos="732 205 150 24" buttonText="open"
              connectedEdges="0" needsCallback="1" radioGroupId="0"/>
  <TEXTEDITOR name="ParticleFragment" id="59b14c8ae5fda44e" memberName="_textEditorParticleFragment"
              virtualName="" explicitFocusOrder="0" pos="220 205 472 24" initialText=""
              multiline="0" retKeyStartsLine="0" readonly="0" scrollbars="1"
              caret="1" popupmenu="1"/>
  <LABEL name="ParticleFragment" id="ce839e0227766d97" memberName="_labelParticleFragment"
         virtualName="" explicitFocusOrder="0" pos="44 205 150 24" edTextCol="ff000000"
         edBkgCol="0" labelText="ParticleFragment" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15.0" kerning="0.0" bold="0" italic="0" justification="33"/>
  <TEXTBUTTON name="_openParticleVetex" id="27680997b515b97f" memberName="_textButtonParticleVetex"
              virtualName="" explicitFocusOrder="0" pos="737 264 150 24" buttonText="open"
              connectedEdges="0" needsCallback="1" radioGroupId="0"/>
  <TEXTEDITOR name="ParticleVetex" id="7d6ed9ebe0c6a94e" memberName="_textEditorParticleVetex"
              virtualName="" explicitFocusOrder="0" pos="216 264 472 24" initialText=""
              multiline="0" retKeyStartsLine="0" readonly="0" scrollbars="1"
              caret="1" popupmenu="1"/>
  <LABEL name="ParticleVetex" id="bd0c1bbbf0971c22" memberName="_labelParticleVetex"
         virtualName="" explicitFocusOrder="0" pos="40 264 150 24" edTextCol="ff000000"
         edBkgCol="0" labelText="ParticleVetex" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15.0" kerning="0.0" bold="0" italic="0" justification="33"/>
  <TEXTBUTTON name="_openstaffFragment" id="fdbb90a7e463f5c2" memberName="_textButtonstaffFragment"
              virtualName="" explicitFocusOrder="0" pos="732 398 150 24" buttonText="open"
              connectedEdges="0" needsCallback="1" radioGroupId="0"/>
  <TEXTEDITOR name="staffFragment" id="89d6efd204450ea0" memberName="_textEditorstaffFragment2"
              virtualName="" explicitFocusOrder="0" pos="220 398 472 24" initialText=""
              multiline="0" retKeyStartsLine="0" readonly="0" scrollbars="1"
              caret="1" popupmenu="1"/>
  <LABEL name="staffFragment" id="f6d4e2dbf5a84c10" memberName="_labelstaffFragment"
         virtualName="" explicitFocusOrder="0" pos="44 398 150 24" edTextCol="ff000000"
         edBkgCol="0" labelText="staffFragment" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15.0" kerning="0.0" bold="0" italic="0" justification="33"/>
  <TEXTBUTTON name="_openstaffVetex" id="2293d53ddcdc496" memberName="_textButtonstaffVetex"
              virtualName="" explicitFocusOrder="0" pos="737 457 150 24" buttonText="open"
              connectedEdges="0" needsCallback="1" radioGroupId="0"/>
  <TEXTEDITOR name="staffVetex" id="8a3fc2adfb5d8e77" memberName="_textEditorstaffVetex"
              virtualName="" explicitFocusOrder="0" pos="216 457 472 24" initialText=""
              multiline="0" retKeyStartsLine="0" readonly="0" scrollbars="1"
              caret="1" popupmenu="1"/>
  <LABEL name="staffVetex" id="9e9223961494bdf8" memberName="_labelstaffVetex"
         virtualName="" explicitFocusOrder="0" pos="40 457 150 24" edTextCol="ff000000"
         edBkgCol="0" labelText="staffVetex" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15.0"
         kerning="0.0" bold="0" italic="0" justification="33"/>
  <TEXTBUTTON name="_openTieFragment" id="75ee31e2d4714000" memberName="_textButtonTieFragment2"
              virtualName="" explicitFocusOrder="0" pos="728 606 150 24" buttonText="open"
              connectedEdges="0" needsCallback="1" radioGroupId="0"/>
  <TEXTEDITOR name="TieFragment" id="22882ca1c86950d" memberName="_textEditorTieFragment3"
              virtualName="" explicitFocusOrder="0" pos="216 606 472 24" initialText=""
              multiline="0" retKeyStartsLine="0" readonly="0" scrollbars="1"
              caret="1" popupmenu="1"/>
  <LABEL name="TiefFragment" id="5753dea5002b258b" memberName="_labelTieFragment"
         virtualName="" explicitFocusOrder="0" pos="40 606 150 24" edTextCol="ff000000"
         edBkgCol="0" labelText="TieFragment" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15.0" kerning="0.0" bold="0" italic="0" justification="33"/>
  <TEXTBUTTON name="_openTieVetex" id="aa57d4730aee5fe3" memberName="_textButtonTieVetex"
              virtualName="" explicitFocusOrder="0" pos="733 665 150 24" buttonText="open"
              connectedEdges="0" needsCallback="1" radioGroupId="0"/>
  <TEXTEDITOR name="TieVetex" id="fb24e9bc42dace0e" memberName="_textEditorTieVetex"
              virtualName="" explicitFocusOrder="0" pos="212 665 472 24" initialText=""
              multiline="0" retKeyStartsLine="0" readonly="0" scrollbars="1"
              caret="1" popupmenu="1"/>
  <LABEL name="TieVetex" id="42bbac015cf07f06" memberName="_labelTieVetex2"
         virtualName="" explicitFocusOrder="0" pos="36 665 150 24" edTextCol="ff000000"
         edBkgCol="0" labelText="TieVetex" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15.0"
         kerning="0.0" bold="0" italic="0" justification="33"/>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif


//[EndFile] You can add extra defines here...
//[/EndFile]

