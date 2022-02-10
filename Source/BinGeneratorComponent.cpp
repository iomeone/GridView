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

    _labelTexturePng.reset (new juce::Label ("new label",
                                             TRANS("texture png\n")));
    addAndMakeVisible (_labelTexturePng.get());
    _labelTexturePng->setFont (juce::Font (15.00f, juce::Font::plain).withTypefaceStyle ("Regular"));
    _labelTexturePng->setJustificationType (juce::Justification::centredLeft);
    _labelTexturePng->setEditable (false, false, false);
    _labelTexturePng->setColour (juce::TextEditor::textColourId, juce::Colours::black);
    _labelTexturePng->setColour (juce::TextEditor::backgroundColourId, juce::Colour (0x00000000));

    _labelTexturePng->setBounds (40, 152, 150, 24);

    _textEditorTexturePng.reset (new juce::TextEditor ("texturePng"));
    addAndMakeVisible (_textEditorTexturePng.get());
    _textEditorTexturePng->setMultiLine (false);
    _textEditorTexturePng->setReturnKeyStartsNewLine (false);
    _textEditorTexturePng->setReadOnly (false);
    _textEditorTexturePng->setScrollbarsShown (true);
    _textEditorTexturePng->setCaretVisible (true);
    _textEditorTexturePng->setPopupMenuEnabled (true);
    _textEditorTexturePng->setText (juce::String());

    _textEditorTexturePng->setBounds (216, 152, 472, 24);

    _textButtonTexturePng.reset (new juce::TextButton ("_openTexturePng"));
    addAndMakeVisible (_textButtonTexturePng.get());
    _textButtonTexturePng->setButtonText (TRANS("open"));
    _textButtonTexturePng->addListener (this);

    _textButtonTexturePng->setBounds (740, 152, 150, 24);

    _textButtonxmlSheet.reset (new juce::TextButton ("_openxmlSheet"));
    addAndMakeVisible (_textButtonxmlSheet.get());
    _textButtonxmlSheet->setButtonText (TRANS("open"));
    _textButtonxmlSheet->addListener (this);

    _textButtonxmlSheet->setBounds (740, 80, 150, 24);

    _textEditorxmlSheet.reset (new juce::TextEditor ("xmlSheet"));
    addAndMakeVisible (_textEditorxmlSheet.get());
    _textEditorxmlSheet->setMultiLine (false);
    _textEditorxmlSheet->setReturnKeyStartsNewLine (false);
    _textEditorxmlSheet->setReadOnly (false);
    _textEditorxmlSheet->setScrollbarsShown (true);
    _textEditorxmlSheet->setCaretVisible (true);
    _textEditorxmlSheet->setPopupMenuEnabled (true);
    _textEditorxmlSheet->setText (juce::String());

    _textEditorxmlSheet->setBounds (216, 80, 472, 24);

    _labelXmlSheet.reset (new juce::Label ("XmlSheet",
                                           TRANS("XmlSheet")));
    addAndMakeVisible (_labelXmlSheet.get());
    _labelXmlSheet->setFont (juce::Font (15.00f, juce::Font::plain).withTypefaceStyle ("Regular"));
    _labelXmlSheet->setJustificationType (juce::Justification::centredLeft);
    _labelXmlSheet->setEditable (false, false, false);
    _labelXmlSheet->setColour (juce::TextEditor::textColourId, juce::Colours::black);
    _labelXmlSheet->setColour (juce::TextEditor::backgroundColourId, juce::Colour (0x00000000));

    _labelXmlSheet->setBounds (40, 80, 150, 24);

    _textButtonParticleFragment.reset (new juce::TextButton ("_openParticleFragment"));
    addAndMakeVisible (_textButtonParticleFragment.get());
    _textButtonParticleFragment->setButtonText (TRANS("open"));
    _textButtonParticleFragment->addListener (this);

    _textButtonParticleFragment->setBounds (740, 205, 150, 24);

    _textEditorParticleFragment.reset (new juce::TextEditor ("ParticleFragment"));
    addAndMakeVisible (_textEditorParticleFragment.get());
    _textEditorParticleFragment->setMultiLine (false);
    _textEditorParticleFragment->setReturnKeyStartsNewLine (false);
    _textEditorParticleFragment->setReadOnly (false);
    _textEditorParticleFragment->setScrollbarsShown (true);
    _textEditorParticleFragment->setCaretVisible (true);
    _textEditorParticleFragment->setPopupMenuEnabled (true);
    _textEditorParticleFragment->setText (juce::String());

    _textEditorParticleFragment->setBounds (216, 200, 472, 24);

    _labelParticleFragment.reset (new juce::Label ("ParticleFragment",
                                                   TRANS("ParticleFragment")));
    addAndMakeVisible (_labelParticleFragment.get());
    _labelParticleFragment->setFont (juce::Font (15.00f, juce::Font::plain).withTypefaceStyle ("Regular"));
    _labelParticleFragment->setJustificationType (juce::Justification::centredLeft);
    _labelParticleFragment->setEditable (false, false, false);
    _labelParticleFragment->setColour (juce::TextEditor::textColourId, juce::Colours::black);
    _labelParticleFragment->setColour (juce::TextEditor::backgroundColourId, juce::Colour (0x00000000));

    _labelParticleFragment->setBounds (40, 205, 150, 24);

    _textButtonParticleVetex.reset (new juce::TextButton ("_openParticleVetex"));
    addAndMakeVisible (_textButtonParticleVetex.get());
    _textButtonParticleVetex->setButtonText (TRANS("open"));
    _textButtonParticleVetex->addListener (this);

    _textButtonParticleVetex->setBounds (740, 248, 150, 24);

    _textEditorParticleVetex.reset (new juce::TextEditor ("ParticleVetex"));
    addAndMakeVisible (_textEditorParticleVetex.get());
    _textEditorParticleVetex->setMultiLine (false);
    _textEditorParticleVetex->setReturnKeyStartsNewLine (false);
    _textEditorParticleVetex->setReadOnly (false);
    _textEditorParticleVetex->setScrollbarsShown (true);
    _textEditorParticleVetex->setCaretVisible (true);
    _textEditorParticleVetex->setPopupMenuEnabled (true);
    _textEditorParticleVetex->setText (juce::String());

    _textEditorParticleVetex->setBounds (224, 248, 472, 24);

    _labelParticleVetex.reset (new juce::Label ("ParticleVetex",
                                                TRANS("ParticleVetex")));
    addAndMakeVisible (_labelParticleVetex.get());
    _labelParticleVetex->setFont (juce::Font (15.00f, juce::Font::plain).withTypefaceStyle ("Regular"));
    _labelParticleVetex->setJustificationType (juce::Justification::centredLeft);
    _labelParticleVetex->setEditable (false, false, false);
    _labelParticleVetex->setColour (juce::TextEditor::textColourId, juce::Colours::black);
    _labelParticleVetex->setColour (juce::TextEditor::backgroundColourId, juce::Colour (0x00000000));

    _labelParticleVetex->setBounds (40, 248, 150, 24);

    _textButtonstaffFragment.reset (new juce::TextButton ("_openstaffFragment"));
    addAndMakeVisible (_textButtonstaffFragment.get());
    _textButtonstaffFragment->setButtonText (TRANS("open"));
    _textButtonstaffFragment->addListener (this);

    _textButtonstaffFragment->setBounds (740, 312, 150, 24);

    _textEditorstaffFragment2.reset (new juce::TextEditor ("staffFragment"));
    addAndMakeVisible (_textEditorstaffFragment2.get());
    _textEditorstaffFragment2->setMultiLine (false);
    _textEditorstaffFragment2->setReturnKeyStartsNewLine (false);
    _textEditorstaffFragment2->setReadOnly (false);
    _textEditorstaffFragment2->setScrollbarsShown (true);
    _textEditorstaffFragment2->setCaretVisible (true);
    _textEditorstaffFragment2->setPopupMenuEnabled (true);
    _textEditorstaffFragment2->setText (juce::String());

    _textEditorstaffFragment2->setBounds (220, 310, 472, 24);

    _labelstaffFragment.reset (new juce::Label ("staffFragment",
                                                TRANS("staffFragment")));
    addAndMakeVisible (_labelstaffFragment.get());
    _labelstaffFragment->setFont (juce::Font (15.00f, juce::Font::plain).withTypefaceStyle ("Regular"));
    _labelstaffFragment->setJustificationType (juce::Justification::centredLeft);
    _labelstaffFragment->setEditable (false, false, false);
    _labelstaffFragment->setColour (juce::TextEditor::textColourId, juce::Colours::black);
    _labelstaffFragment->setColour (juce::TextEditor::backgroundColourId, juce::Colour (0x00000000));

    _labelstaffFragment->setBounds (40, 310, 150, 24);

    _textButtonstaffVetex.reset (new juce::TextButton ("_openstaffVetex"));
    addAndMakeVisible (_textButtonstaffVetex.get());
    _textButtonstaffVetex->setButtonText (TRANS("open"));
    _textButtonstaffVetex->addListener (this);

    _textButtonstaffVetex->setBounds (740, 352, 150, 24);

    _textEditorstaffVetex.reset (new juce::TextEditor ("staffVetex"));
    addAndMakeVisible (_textEditorstaffVetex.get());
    _textEditorstaffVetex->setMultiLine (false);
    _textEditorstaffVetex->setReturnKeyStartsNewLine (false);
    _textEditorstaffVetex->setReadOnly (false);
    _textEditorstaffVetex->setScrollbarsShown (true);
    _textEditorstaffVetex->setCaretVisible (true);
    _textEditorstaffVetex->setPopupMenuEnabled (true);
    _textEditorstaffVetex->setText (juce::String());

    _textEditorstaffVetex->setBounds (224, 353, 472, 24);

    _labelstaffVetex.reset (new juce::Label ("staffVetex",
                                             TRANS("staffVetex")));
    addAndMakeVisible (_labelstaffVetex.get());
    _labelstaffVetex->setFont (juce::Font (15.00f, juce::Font::plain).withTypefaceStyle ("Regular"));
    _labelstaffVetex->setJustificationType (juce::Justification::centredLeft);
    _labelstaffVetex->setEditable (false, false, false);
    _labelstaffVetex->setColour (juce::TextEditor::textColourId, juce::Colours::black);
    _labelstaffVetex->setColour (juce::TextEditor::backgroundColourId, juce::Colour (0x00000000));

    _labelstaffVetex->setBounds (40, 353, 150, 24);

    _textButtonTieFragment2.reset (new juce::TextButton ("_openTieFragment"));
    addAndMakeVisible (_textButtonTieFragment2.get());
    _textButtonTieFragment2->setButtonText (TRANS("open"));
    _textButtonTieFragment2->addListener (this);

    _textButtonTieFragment2->setBounds (740, 408, 150, 24);

    _textEditorTieFragment3.reset (new juce::TextEditor ("TieFragment"));
    addAndMakeVisible (_textEditorTieFragment3.get());
    _textEditorTieFragment3->setMultiLine (false);
    _textEditorTieFragment3->setReturnKeyStartsNewLine (false);
    _textEditorTieFragment3->setReadOnly (false);
    _textEditorTieFragment3->setScrollbarsShown (true);
    _textEditorTieFragment3->setCaretVisible (true);
    _textEditorTieFragment3->setPopupMenuEnabled (true);
    _textEditorTieFragment3->setText (juce::String());

    _textEditorTieFragment3->setBounds (224, 406, 472, 24);

    _labelTieFragment.reset (new juce::Label ("TiefFragment",
                                              TRANS("TieFragment")));
    addAndMakeVisible (_labelTieFragment.get());
    _labelTieFragment->setFont (juce::Font (15.00f, juce::Font::plain).withTypefaceStyle ("Regular"));
    _labelTieFragment->setJustificationType (juce::Justification::centredLeft);
    _labelTieFragment->setEditable (false, false, false);
    _labelTieFragment->setColour (juce::TextEditor::textColourId, juce::Colours::black);
    _labelTieFragment->setColour (juce::TextEditor::backgroundColourId, juce::Colour (0x00000000));

    _labelTieFragment->setBounds (40, 406, 150, 24);

    _textButtonTieVetex.reset (new juce::TextButton ("_openTieVetex"));
    addAndMakeVisible (_textButtonTieVetex.get());
    _textButtonTieVetex->setButtonText (TRANS("open"));
    _textButtonTieVetex->addListener (this);

    _textButtonTieVetex->setBounds (740, 465, 150, 24);

    _textEditorTieVetex.reset (new juce::TextEditor ("TieVetex"));
    addAndMakeVisible (_textEditorTieVetex.get());
    _textEditorTieVetex->setMultiLine (false);
    _textEditorTieVetex->setReturnKeyStartsNewLine (false);
    _textEditorTieVetex->setReadOnly (false);
    _textEditorTieVetex->setScrollbarsShown (true);
    _textEditorTieVetex->setCaretVisible (true);
    _textEditorTieVetex->setPopupMenuEnabled (true);
    _textEditorTieVetex->setText (juce::String());

    _textEditorTieVetex->setBounds (220, 465, 472, 24);

    _labelTieVetex2.reset (new juce::Label ("TieVetex",
                                            TRANS("TieVetex")));
    addAndMakeVisible (_labelTieVetex2.get());
    _labelTieVetex2->setFont (juce::Font (15.00f, juce::Font::plain).withTypefaceStyle ("Regular"));
    _labelTieVetex2->setJustificationType (juce::Justification::centredLeft);
    _labelTieVetex2->setEditable (false, false, false);
    _labelTieVetex2->setColour (juce::TextEditor::textColourId, juce::Colours::black);
    _labelTieVetex2->setColour (juce::TextEditor::backgroundColourId, juce::Colour (0x00000000));

    _labelTieVetex2->setBounds (40, 465, 150, 24);

    _difficulty.reset (new juce::Label ("difficulty",
                                        TRANS("difficulty\n")));
    addAndMakeVisible (_difficulty.get());
    _difficulty->setFont (juce::Font (15.00f, juce::Font::plain).withTypefaceStyle ("Regular"));
    _difficulty->setJustificationType (juce::Justification::centredLeft);
    _difficulty->setEditable (false, false, false);
    _difficulty->setColour (juce::TextEditor::textColourId, juce::Colours::black);
    _difficulty->setColour (juce::TextEditor::backgroundColourId, juce::Colour (0x00000000));

    _difficulty->setBounds (48, 736, 150, 24);

    _textEditorDifficulty.reset (new juce::TextEditor ("textofdifficulty"));
    addAndMakeVisible (_textEditorDifficulty.get());
    _textEditorDifficulty->setMultiLine (false);
    _textEditorDifficulty->setReturnKeyStartsNewLine (false);
    _textEditorDifficulty->setReadOnly (false);
    _textEditorDifficulty->setScrollbarsShown (true);
    _textEditorDifficulty->setCaretVisible (true);
    _textEditorDifficulty->setPopupMenuEnabled (true);
    _textEditorDifficulty->setText (TRANS("1"));

    _textEditorDifficulty->setBounds (208, 736, 160, 24);

    _Type.reset (new juce::Label ("Type",
                                  TRANS("Type")));
    addAndMakeVisible (_Type.get());
    _Type->setFont (juce::Font (15.00f, juce::Font::plain).withTypefaceStyle ("Regular"));
    _Type->setJustificationType (juce::Justification::centredLeft);
    _Type->setEditable (false, false, false);
    _Type->setColour (juce::TextEditor::textColourId, juce::Colours::black);
    _Type->setColour (juce::TextEditor::backgroundColourId, juce::Colour (0x00000000));

    _Type->setBounds (48, 776, 150, 24);

    _textEditorType.reset (new juce::TextEditor ("textofType"));
    addAndMakeVisible (_textEditorType.get());
    _textEditorType->setMultiLine (false);
    _textEditorType->setReturnKeyStartsNewLine (false);
    _textEditorType->setReadOnly (false);
    _textEditorType->setScrollbarsShown (true);
    _textEditorType->setCaretVisible (true);
    _textEditorType->setPopupMenuEnabled (true);
    _textEditorType->setText (TRANS("CLASSICAL"));

    _textEditorType->setBounds (208, 776, 160, 24);

    _Title.reset (new juce::Label ("Title",
                                   TRANS("Title")));
    addAndMakeVisible (_Title.get());
    _Title->setFont (juce::Font (15.00f, juce::Font::plain).withTypefaceStyle ("Regular"));
    _Title->setJustificationType (juce::Justification::centredLeft);
    _Title->setEditable (false, false, false);
    _Title->setColour (juce::TextEditor::textColourId, juce::Colours::black);
    _Title->setColour (juce::TextEditor::backgroundColourId, juce::Colour (0x00000000));

    _Title->setBounds (44, 821, 150, 24);

    _textEditorTitle.reset (new juce::TextEditor ("textofTitle"));
    addAndMakeVisible (_textEditorTitle.get());
    _textEditorTitle->setMultiLine (false);
    _textEditorTitle->setReturnKeyStartsNewLine (false);
    _textEditorTitle->setReadOnly (false);
    _textEditorTitle->setScrollbarsShown (true);
    _textEditorTitle->setCaretVisible (true);
    _textEditorTitle->setPopupMenuEnabled (true);
    _textEditorTitle->setText (TRANS("Title..."));

    _textEditorTitle->setBounds (208, 824, 480, 24);

    _Author.reset (new juce::Label ("Author",
                                    TRANS("Author")));
    addAndMakeVisible (_Author.get());
    _Author->setFont (juce::Font (15.00f, juce::Font::plain).withTypefaceStyle ("Regular"));
    _Author->setJustificationType (juce::Justification::centredLeft);
    _Author->setEditable (false, false, false);
    _Author->setColour (juce::TextEditor::textColourId, juce::Colours::black);
    _Author->setColour (juce::TextEditor::backgroundColourId, juce::Colour (0x00000000));

    _Author->setBounds (42, 869, 150, 24);

    _textEditorAuthor.reset (new juce::TextEditor ("textofAuthor"));
    addAndMakeVisible (_textEditorAuthor.get());
    _textEditorAuthor->setMultiLine (false);
    _textEditorAuthor->setReturnKeyStartsNewLine (false);
    _textEditorAuthor->setReadOnly (false);
    _textEditorAuthor->setScrollbarsShown (true);
    _textEditorAuthor->setCaretVisible (true);
    _textEditorAuthor->setPopupMenuEnabled (true);
    _textEditorAuthor->setText (TRANS("Author..."));

    _textEditorAuthor->setBounds (210, 869, 678, 24);

    _Picture.reset (new juce::Label ("Picture",
                                     TRANS("Picture")));
    addAndMakeVisible (_Picture.get());
    _Picture->setFont (juce::Font (15.00f, juce::Font::plain).withTypefaceStyle ("Regular"));
    _Picture->setJustificationType (juce::Justification::centredLeft);
    _Picture->setEditable (false, false, false);
    _Picture->setColour (juce::TextEditor::textColourId, juce::Colours::black);
    _Picture->setColour (juce::TextEditor::backgroundColourId, juce::Colour (0x00000000));

    _Picture->setBounds (43, 910, 150, 24);

    _textEditorPicture.reset (new juce::TextEditor ("textofPicture"));
    addAndMakeVisible (_textEditorPicture.get());
    _textEditorPicture->setMultiLine (false);
    _textEditorPicture->setReturnKeyStartsNewLine (false);
    _textEditorPicture->setReadOnly (false);
    _textEditorPicture->setScrollbarsShown (true);
    _textEditorPicture->setCaretVisible (true);
    _textEditorPicture->setPopupMenuEnabled (true);
    _textEditorPicture->setText (TRANS("\n"));

    _textEditorPicture->setBounds (211, 910, 677, 24);

    _textButtonGenerator.reset (new juce::TextButton ("Generator"));
    addAndMakeVisible (_textButtonGenerator.get());
    _textButtonGenerator->addListener (this);

    _textButtonGenerator->setBounds (1080, 920, 150, 24);

    juce__label.reset (new juce::Label ("new label",
                                        TRANS("TimeQuardFragment\n")));
    addAndMakeVisible (juce__label.get());
    juce__label->setFont (juce::Font (15.00f, juce::Font::plain).withTypefaceStyle ("Regular"));
    juce__label->setJustificationType (juce::Justification::centredLeft);
    juce__label->setEditable (false, false, false);
    juce__label->setColour (juce::TextEditor::textColourId, juce::Colours::black);
    juce__label->setColour (juce::TextEditor::backgroundColourId, juce::Colour (0x00000000));

    juce__label->setBounds (40, 512, 150, 24);

    juce__label2.reset (new juce::Label ("new label",
                                         TRANS("TimeQuardVetex")));
    addAndMakeVisible (juce__label2.get());
    juce__label2->setFont (juce::Font (15.00f, juce::Font::plain).withTypefaceStyle ("Regular"));
    juce__label2->setJustificationType (juce::Justification::centredLeft);
    juce__label2->setEditable (false, false, false);
    juce__label2->setColour (juce::TextEditor::textColourId, juce::Colours::black);
    juce__label2->setColour (juce::TextEditor::backgroundColourId, juce::Colour (0x00000000));

    juce__label2->setBounds (40, 552, 150, 24);

    _textEditorTimeFrag.reset (new juce::TextEditor ("new text editor"));
    addAndMakeVisible (_textEditorTimeFrag.get());
    _textEditorTimeFrag->setMultiLine (false);
    _textEditorTimeFrag->setReturnKeyStartsNewLine (false);
    _textEditorTimeFrag->setReadOnly (false);
    _textEditorTimeFrag->setScrollbarsShown (true);
    _textEditorTimeFrag->setCaretVisible (true);
    _textEditorTimeFrag->setPopupMenuEnabled (true);
    _textEditorTimeFrag->setText (juce::String());

    _textEditorTimeFrag->setBounds (224, 512, 464, 24);

    _textEditorTimeVetex.reset (new juce::TextEditor ("new text editor"));
    addAndMakeVisible (_textEditorTimeVetex.get());
    _textEditorTimeVetex->setMultiLine (false);
    _textEditorTimeVetex->setReturnKeyStartsNewLine (false);
    _textEditorTimeVetex->setReadOnly (false);
    _textEditorTimeVetex->setScrollbarsShown (true);
    _textEditorTimeVetex->setCaretVisible (true);
    _textEditorTimeVetex->setPopupMenuEnabled (true);
    _textEditorTimeVetex->setText (juce::String());

    _textEditorTimeVetex->setBounds (224, 552, 464, 24);

    juce__label3.reset (new juce::Label ("new label",
                                         TRANS("BackGroundFragment")));
    addAndMakeVisible (juce__label3.get());
    juce__label3->setFont (juce::Font (15.00f, juce::Font::plain).withTypefaceStyle ("Regular"));
    juce__label3->setJustificationType (juce::Justification::centredLeft);
    juce__label3->setEditable (false, false, false);
    juce__label3->setColour (juce::TextEditor::textColourId, juce::Colours::black);
    juce__label3->setColour (juce::TextEditor::backgroundColourId, juce::Colour (0x00000000));

    juce__label3->setBounds (40, 600, 150, 24);

    juce__label4.reset (new juce::Label ("new label",
                                         TRANS("BackGroundVetex")));
    addAndMakeVisible (juce__label4.get());
    juce__label4->setFont (juce::Font (15.00f, juce::Font::plain).withTypefaceStyle ("Regular"));
    juce__label4->setJustificationType (juce::Justification::centredLeft);
    juce__label4->setEditable (false, false, false);
    juce__label4->setColour (juce::TextEditor::textColourId, juce::Colours::black);
    juce__label4->setColour (juce::TextEditor::backgroundColourId, juce::Colour (0x00000000));

    juce__label4->setBounds (40, 648, 150, 24);

    _textEditorBackGroundFragment.reset (new juce::TextEditor ("new text editor"));
    addAndMakeVisible (_textEditorBackGroundFragment.get());
    _textEditorBackGroundFragment->setMultiLine (false);
    _textEditorBackGroundFragment->setReturnKeyStartsNewLine (false);
    _textEditorBackGroundFragment->setReadOnly (false);
    _textEditorBackGroundFragment->setScrollbarsShown (true);
    _textEditorBackGroundFragment->setCaretVisible (true);
    _textEditorBackGroundFragment->setPopupMenuEnabled (true);
    _textEditorBackGroundFragment->setText (juce::String());

    _textEditorBackGroundFragment->setBounds (224, 608, 464, 24);

    _textEditorBackGroundVetex.reset (new juce::TextEditor ("new text editor"));
    addAndMakeVisible (_textEditorBackGroundVetex.get());
    _textEditorBackGroundVetex->setMultiLine (false);
    _textEditorBackGroundVetex->setReturnKeyStartsNewLine (false);
    _textEditorBackGroundVetex->setReadOnly (false);
    _textEditorBackGroundVetex->setScrollbarsShown (true);
    _textEditorBackGroundVetex->setCaretVisible (true);
    _textEditorBackGroundVetex->setPopupMenuEnabled (true);
    _textEditorBackGroundVetex->setText (juce::String());

    _textEditorBackGroundVetex->setBounds (224, 656, 464, 24);


    //[UserPreSize]
    //[/UserPreSize]

    setSize (600, 400);


    //[Constructor] You can add your own custom stuff here..
	setSize(1920 * 0.68, 1200 * 0.9);
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
    _difficulty = nullptr;
    _textEditorDifficulty = nullptr;
    _Type = nullptr;
    _textEditorType = nullptr;
    _Title = nullptr;
    _textEditorTitle = nullptr;
    _Author = nullptr;
    _textEditorAuthor = nullptr;
    _Picture = nullptr;
    _textEditorPicture = nullptr;
    _textButtonGenerator = nullptr;
    juce__label = nullptr;
    juce__label2 = nullptr;
    _textEditorTimeFrag = nullptr;
    _textEditorTimeVetex = nullptr;
    juce__label3 = nullptr;
    juce__label4 = nullptr;
    _textEditorBackGroundFragment = nullptr;
    _textEditorBackGroundVetex = nullptr;


    //[Destructor]. You can add your own custom destruction code here..
    //[/Destructor]
}

//==============================================================================
void BinGeneratorComponent::paint (juce::Graphics& g)
{
    //[UserPrePaint] Add your own custom painting code here..
    //[/UserPrePaint]

    g.fillAll (juce::Colour (0xff323e44));

    {
        int x = 996, y = 308, width = 316, height = 276;
        //[UserPaintCustomArguments] Customize the painting arguments here..

    		g.setColour(Colours::black);
    		g.drawImage(cachedImage_heartandsoulpiano_png_1,
    			x, y, width, height,
    			0, 0, cachedImage_heartandsoulpiano_png_1.getWidth(), cachedImage_heartandsoulpiano_png_1.getHeight());

        //[/UserPaintCustomArguments]
    }

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

void BinGeneratorComponent::buttonClicked (juce::Button* buttonThatWasClicked)
{
    //[UserbuttonClicked_Pre]
    //[/UserbuttonClicked_Pre]

    if (buttonThatWasClicked == _textButtonTexturePng.get())
    {
        //[UserButtonCode__textButtonTexturePng] -- add your button handler code here..
		//FileChooser myChooser("Please select the Texture Png File.",
		//	File::getCurrentWorkingDirectory(),
		//	//File("C:/Users/user/Desktop/test"),
		//	"*.txt;*.svg"); //"*.dll; *.*""
		//if (myChooser.browseForFileToOpen())
		//{
		//	juce::File textureFile = myChooser.getResult();
		//	_textEditorTexturePng->setText(textureFile.getFullPathName());
		//}

        //[/UserButtonCode__textButtonTexturePng]
    }
    else if (buttonThatWasClicked == _textButtonxmlSheet.get())
    {
        //[UserButtonCode__textButtonxmlSheet] -- add your button handler code here..

		FileChooser myChooser("Please select the sheet XML File.",
			File::getCurrentWorkingDirectory(),
			//File("C:/Users/user/Desktop/test"),
			"*.txt"); //"*.dll; *.*""

        auto chooserFlags = FileBrowserComponent::openMode | FileBrowserComponent::canSelectFiles;

        myChooser.launchAsync(chooserFlags, [this](const FileChooser& fc)
            {

                juce::File xmlFile = fc.getResult();
                _textEditorxmlSheet->setText(xmlFile.getFullPathName());

                fileName = xmlFile.getFileNameWithoutExtension();


                curDir = xmlFile.getParentDirectory();

                String texturePngName = fileName + "msdf.png";
                checkFile(curDir, texturePngName, _textEditorTexturePng);


                checkFile(curDir, "fParticle.txt", _textEditorParticleFragment);
                checkFile(curDir, "vParticle.txt", _textEditorParticleVetex);

                checkFile(curDir, "fStaffLine.txt", _textEditorstaffFragment2);
                checkFile(curDir, "vStaffLine.txt", _textEditorstaffVetex);


                checkFile(curDir, "fTie.txt", _textEditorTieFragment3);
                checkFile(curDir, "vTie.txt", _textEditorTieVetex);


                checkFile(curDir, "fTime.txt", _textEditorTimeFrag);
                checkFile(curDir, "vTime.txt", _textEditorTimeVetex);

                checkFile(curDir, "fBackground.txt", _textEditorBackGroundFragment);
                checkFile(curDir, "vBackground.txt", _textEditorBackGroundVetex);

                String themePngName = fileName + "theme.jpg";
                checkFile(curDir, themePngName, _textEditorPicture);



   /*             if (fc.getResult() == File{})
                    return;
                loadSettingFile(myChooser.getResult());*/

            });
	/*	if (myChooser.browseForFileToOpen())
		{
			juce::File xmlFile = myChooser.getResult();
			_textEditorxmlSheet->setText(xmlFile.getFullPathName());

			 fileName = xmlFile.getFileNameWithoutExtension();


			curDir = xmlFile.getParentDirectory();

			String texturePngName = fileName + "msdf.png";
			checkFile(curDir, texturePngName, _textEditorTexturePng);


			checkFile(curDir, "fParticle.txt", _textEditorParticleFragment);
			checkFile(curDir, "vParticle.txt", _textEditorParticleVetex);

			checkFile(curDir, "fStaffLine.txt", _textEditorstaffFragment2);
			checkFile(curDir, "vStaffLine.txt", _textEditorstaffVetex);


			checkFile(curDir, "fTie.txt", _textEditorTieFragment3);
			checkFile(curDir, "vTie.txt", _textEditorTieVetex);


			checkFile(curDir, "fTime.txt", _textEditorTimeFrag);
			checkFile(curDir, "vTime.txt", _textEditorTimeVetex);

			checkFile(curDir, "fBackground.txt", _textEditorBackGroundFragment);
			checkFile(curDir, "vBackground.txt", _textEditorBackGroundVetex);

			String themePngName = fileName + "theme.jpg";
			checkFile(curDir, themePngName, _textEditorPicture);





		}*/

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
    else if (buttonThatWasClicked == _textButtonGenerator.get())
    {
        //[UserButtonCode__textButtonGenerator] -- add your button handler code here..
		msg("begin to write file to disk");

		ValueTree sheetBin(_textEditorTitle->getText());  // contain memoryblock of png and string of sheet describe.

			//sheetBin.removeAllChildren(nullptr);
			//sheetBin.removeAllProperties(nullptr);
		String texturePngName = fileName + "msdf.png";
		String themePngName = fileName + "theme.jpg";
		{
			juce::File ThemePngFile = curDir.getChildFile(themePngName);
			if (ThemePngFile.existsAsFile())
			{
				cachedImage_heartandsoulpiano_png_1 = ImageFileFormat::loadFrom(ThemePngFile);
				repaint();
			}
			MemoryOutputStream ms;
			PNGImageFormat pngFormat;
			Image themeImage = pngFormat.loadFrom(ThemePngFile);
			pngFormat.writeImageToStream(themeImage, ms);

			MemoryBlock themePngBlock = ms.getMemoryBlock();


			sheetBin.setProperty("themepng", themePngBlock, nullptr);
		}


		{
			juce::File TexturePngFile = curDir.getChildFile(texturePngName);
			MemoryOutputStream ms;
			PNGImageFormat pngFormat;
			Image texturePngImage = pngFormat.loadFrom(TexturePngFile);
			pngFormat.writeImageToStream(texturePngImage, ms);

			MemoryBlock TexturePngBlock = ms.getMemoryBlock();
			sheetBin.setProperty("png", TexturePngBlock, nullptr);
		}


		{
			String sheetfilename = fileName + ".txt";
			juce::File sheetfile = curDir.getChildFile(sheetfilename);
			sheetBin.setProperty("sheet", sheetfile.loadFileAsString(), nullptr);
		}

		{
			juce::File fpFile = curDir.getChildFile("fParticle.txt");
			sheetBin.setProperty("frag", fpFile.loadFileAsString(), nullptr);
		}
		{
			juce::File fpFile = curDir.getChildFile("vParticle.txt");
			sheetBin.setProperty("vetex", fpFile.loadFileAsString(), nullptr);
		}



		{
			juce::File fpFile = curDir.getChildFile("fStaffLine.txt");
			sheetBin.setProperty("fragStaff", fpFile.loadFileAsString(), nullptr);
		}
		{
			juce::File fpFile = curDir.getChildFile("vStaffLine.txt");
			sheetBin.setProperty("vetexStaff", fpFile.loadFileAsString(), nullptr);
		}


		{
			juce::File fpFile = curDir.getChildFile("fTie.txt");
			sheetBin.setProperty("fragIndicator", fpFile.loadFileAsString(), nullptr);
		}
		{
			juce::File fpFile = curDir.getChildFile("vTie.txt");
			sheetBin.setProperty("vetexIndicator", fpFile.loadFileAsString(), nullptr);
		}


		{
			juce::File fpFile = curDir.getChildFile("fTime.txt");
			sheetBin.setProperty("fTimeQuard", fpFile.loadFileAsString(), nullptr);
		}
		{
			juce::File fpFile = curDir.getChildFile("vTime.txt");
			sheetBin.setProperty("vTimeQuard", fpFile.loadFileAsString(), nullptr);
		}



		{
			juce::File fpFile = curDir.getChildFile("fBackground.txt");
			sheetBin.setProperty("fBackground", fpFile.loadFileAsString(), nullptr);
		}
		{
			juce::File fpFile = curDir.getChildFile("vBackground.txt");
			sheetBin.setProperty("vBackground", fpFile.loadFileAsString(), nullptr);
		}



		sheetBin.setProperty("title", _textEditorTitle->getText(), nullptr);


		File sheetDescribePngBin = curDir.getChildFile(_textEditorTitle->getText() + ".bin");
		if (sheetDescribePngBin.existsAsFile())
		{
			sheetDescribePngBin.deleteFile();
		}
		if (sheetDescribePngBin.existsAsFile())
		{
			msg(" can not delete " + sheetDescribePngBin.getFullPathName(), "error");
			return;
		}


		FileOutputStream os(sheetDescribePngBin);
		if (os.openedOk())
		{
			os.setPosition(0);
			os.truncate();
			sheetBin.writeToStream(os);
			os.flush();
		}
		msg("complete to write file to disk");
        //[/UserButtonCode__textButtonGenerator]
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
  <BACKGROUND backgroundColour="ff323e44">
    <IMAGE pos="996 308 316 276" resource="" opacity="1.0" mode="0"/>
  </BACKGROUND>
  <LABEL name="new label" id="d77da4bf617327bb" memberName="_labelTexturePng"
         virtualName="" explicitFocusOrder="0" pos="40 152 150 24" edTextCol="ff000000"
         edBkgCol="0" labelText="texture png&#10;" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15.0" kerning="0.0" bold="0" italic="0" justification="33"/>
  <TEXTEDITOR name="texturePng" id="67d003976302167" memberName="_textEditorTexturePng"
              virtualName="" explicitFocusOrder="0" pos="216 152 472 24" initialText=""
              multiline="0" retKeyStartsLine="0" readonly="0" scrollbars="1"
              caret="1" popupmenu="1"/>
  <TEXTBUTTON name="_openTexturePng" id="60b09a8dcd1deaf6" memberName="_textButtonTexturePng"
              virtualName="" explicitFocusOrder="0" pos="740 152 150 24" buttonText="open"
              connectedEdges="0" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="_openxmlSheet" id="107f1754d581f00e" memberName="_textButtonxmlSheet"
              virtualName="" explicitFocusOrder="0" pos="740 80 150 24" buttonText="open"
              connectedEdges="0" needsCallback="1" radioGroupId="0"/>
  <TEXTEDITOR name="xmlSheet" id="1095a4a1e3f3cb21" memberName="_textEditorxmlSheet"
              virtualName="" explicitFocusOrder="0" pos="216 80 472 24" initialText=""
              multiline="0" retKeyStartsLine="0" readonly="0" scrollbars="1"
              caret="1" popupmenu="1"/>
  <LABEL name="XmlSheet" id="e9697c6ffb3ad626" memberName="_labelXmlSheet"
         virtualName="" explicitFocusOrder="0" pos="40 80 150 24" edTextCol="ff000000"
         edBkgCol="0" labelText="XmlSheet" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15.0"
         kerning="0.0" bold="0" italic="0" justification="33"/>
  <TEXTBUTTON name="_openParticleFragment" id="63d8fd3e8952293" memberName="_textButtonParticleFragment"
              virtualName="" explicitFocusOrder="0" pos="740 205 150 24" buttonText="open"
              connectedEdges="0" needsCallback="1" radioGroupId="0"/>
  <TEXTEDITOR name="ParticleFragment" id="59b14c8ae5fda44e" memberName="_textEditorParticleFragment"
              virtualName="" explicitFocusOrder="0" pos="216 200 472 24" initialText=""
              multiline="0" retKeyStartsLine="0" readonly="0" scrollbars="1"
              caret="1" popupmenu="1"/>
  <LABEL name="ParticleFragment" id="ce839e0227766d97" memberName="_labelParticleFragment"
         virtualName="" explicitFocusOrder="0" pos="40 205 150 24" edTextCol="ff000000"
         edBkgCol="0" labelText="ParticleFragment" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15.0" kerning="0.0" bold="0" italic="0" justification="33"/>
  <TEXTBUTTON name="_openParticleVetex" id="27680997b515b97f" memberName="_textButtonParticleVetex"
              virtualName="" explicitFocusOrder="0" pos="740 248 150 24" buttonText="open"
              connectedEdges="0" needsCallback="1" radioGroupId="0"/>
  <TEXTEDITOR name="ParticleVetex" id="7d6ed9ebe0c6a94e" memberName="_textEditorParticleVetex"
              virtualName="" explicitFocusOrder="0" pos="224 248 472 24" initialText=""
              multiline="0" retKeyStartsLine="0" readonly="0" scrollbars="1"
              caret="1" popupmenu="1"/>
  <LABEL name="ParticleVetex" id="bd0c1bbbf0971c22" memberName="_labelParticleVetex"
         virtualName="" explicitFocusOrder="0" pos="40 248 150 24" edTextCol="ff000000"
         edBkgCol="0" labelText="ParticleVetex" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15.0" kerning="0.0" bold="0" italic="0" justification="33"/>
  <TEXTBUTTON name="_openstaffFragment" id="fdbb90a7e463f5c2" memberName="_textButtonstaffFragment"
              virtualName="" explicitFocusOrder="0" pos="740 312 150 24" buttonText="open"
              connectedEdges="0" needsCallback="1" radioGroupId="0"/>
  <TEXTEDITOR name="staffFragment" id="89d6efd204450ea0" memberName="_textEditorstaffFragment2"
              virtualName="" explicitFocusOrder="0" pos="220 310 472 24" initialText=""
              multiline="0" retKeyStartsLine="0" readonly="0" scrollbars="1"
              caret="1" popupmenu="1"/>
  <LABEL name="staffFragment" id="f6d4e2dbf5a84c10" memberName="_labelstaffFragment"
         virtualName="" explicitFocusOrder="0" pos="40 310 150 24" edTextCol="ff000000"
         edBkgCol="0" labelText="staffFragment" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15.0" kerning="0.0" bold="0" italic="0" justification="33"/>
  <TEXTBUTTON name="_openstaffVetex" id="2293d53ddcdc496" memberName="_textButtonstaffVetex"
              virtualName="" explicitFocusOrder="0" pos="740 352 150 24" buttonText="open"
              connectedEdges="0" needsCallback="1" radioGroupId="0"/>
  <TEXTEDITOR name="staffVetex" id="8a3fc2adfb5d8e77" memberName="_textEditorstaffVetex"
              virtualName="" explicitFocusOrder="0" pos="224 353 472 24" initialText=""
              multiline="0" retKeyStartsLine="0" readonly="0" scrollbars="1"
              caret="1" popupmenu="1"/>
  <LABEL name="staffVetex" id="9e9223961494bdf8" memberName="_labelstaffVetex"
         virtualName="" explicitFocusOrder="0" pos="40 353 150 24" edTextCol="ff000000"
         edBkgCol="0" labelText="staffVetex" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15.0"
         kerning="0.0" bold="0" italic="0" justification="33"/>
  <TEXTBUTTON name="_openTieFragment" id="75ee31e2d4714000" memberName="_textButtonTieFragment2"
              virtualName="" explicitFocusOrder="0" pos="740 408 150 24" buttonText="open"
              connectedEdges="0" needsCallback="1" radioGroupId="0"/>
  <TEXTEDITOR name="TieFragment" id="22882ca1c86950d" memberName="_textEditorTieFragment3"
              virtualName="" explicitFocusOrder="0" pos="224 406 472 24" initialText=""
              multiline="0" retKeyStartsLine="0" readonly="0" scrollbars="1"
              caret="1" popupmenu="1"/>
  <LABEL name="TiefFragment" id="5753dea5002b258b" memberName="_labelTieFragment"
         virtualName="" explicitFocusOrder="0" pos="40 406 150 24" edTextCol="ff000000"
         edBkgCol="0" labelText="TieFragment" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15.0" kerning="0.0" bold="0" italic="0" justification="33"/>
  <TEXTBUTTON name="_openTieVetex" id="aa57d4730aee5fe3" memberName="_textButtonTieVetex"
              virtualName="" explicitFocusOrder="0" pos="740 465 150 24" buttonText="open"
              connectedEdges="0" needsCallback="1" radioGroupId="0"/>
  <TEXTEDITOR name="TieVetex" id="fb24e9bc42dace0e" memberName="_textEditorTieVetex"
              virtualName="" explicitFocusOrder="0" pos="220 465 472 24" initialText=""
              multiline="0" retKeyStartsLine="0" readonly="0" scrollbars="1"
              caret="1" popupmenu="1"/>
  <LABEL name="TieVetex" id="42bbac015cf07f06" memberName="_labelTieVetex2"
         virtualName="" explicitFocusOrder="0" pos="40 465 150 24" edTextCol="ff000000"
         edBkgCol="0" labelText="TieVetex" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15.0"
         kerning="0.0" bold="0" italic="0" justification="33"/>
  <LABEL name="difficulty" id="975da7d42a07b022" memberName="_difficulty"
         virtualName="" explicitFocusOrder="0" pos="48 736 150 24" edTextCol="ff000000"
         edBkgCol="0" labelText="difficulty&#10;" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15.0" kerning="0.0" bold="0" italic="0" justification="33"/>
  <TEXTEDITOR name="textofdifficulty" id="7abc5f97c4094e4" memberName="_textEditorDifficulty"
              virtualName="" explicitFocusOrder="0" pos="208 736 160 24" initialText="1"
              multiline="0" retKeyStartsLine="0" readonly="0" scrollbars="1"
              caret="1" popupmenu="1"/>
  <LABEL name="Type" id="3e578a153c9af6a9" memberName="_Type" virtualName=""
         explicitFocusOrder="0" pos="48 776 150 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Type" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15.0"
         kerning="0.0" bold="0" italic="0" justification="33"/>
  <TEXTEDITOR name="textofType" id="f50678b186f1d9ce" memberName="_textEditorType"
              virtualName="" explicitFocusOrder="0" pos="208 776 160 24" initialText="CLASSICAL"
              multiline="0" retKeyStartsLine="0" readonly="0" scrollbars="1"
              caret="1" popupmenu="1"/>
  <LABEL name="Title" id="bd43d19baed8f55c" memberName="_Title" virtualName=""
         explicitFocusOrder="0" pos="44 821 150 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Title" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15.0"
         kerning="0.0" bold="0" italic="0" justification="33"/>
  <TEXTEDITOR name="textofTitle" id="c5f4daa5f43c9f7f" memberName="_textEditorTitle"
              virtualName="" explicitFocusOrder="0" pos="208 824 480 24" initialText="Title..."
              multiline="0" retKeyStartsLine="0" readonly="0" scrollbars="1"
              caret="1" popupmenu="1"/>
  <LABEL name="Author" id="91618ead3e06ab8a" memberName="_Author" virtualName=""
         explicitFocusOrder="0" pos="42 869 150 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Author" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15.0"
         kerning="0.0" bold="0" italic="0" justification="33"/>
  <TEXTEDITOR name="textofAuthor" id="bc8f74d41e43ea02" memberName="_textEditorAuthor"
              virtualName="" explicitFocusOrder="0" pos="210 869 678 24" initialText="Author..."
              multiline="0" retKeyStartsLine="0" readonly="0" scrollbars="1"
              caret="1" popupmenu="1"/>
  <LABEL name="Picture" id="6f9bf486e7bc944a" memberName="_Picture" virtualName=""
         explicitFocusOrder="0" pos="43 910 150 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Picture" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15.0"
         kerning="0.0" bold="0" italic="0" justification="33"/>
  <TEXTEDITOR name="textofPicture" id="22222ffa3ed56b97" memberName="_textEditorPicture"
              virtualName="" explicitFocusOrder="0" pos="211 910 677 24" initialText="&#10;"
              multiline="0" retKeyStartsLine="0" readonly="0" scrollbars="1"
              caret="1" popupmenu="1"/>
  <TEXTBUTTON name="Generator" id="3c6a35835a1409ff" memberName="_textButtonGenerator"
              virtualName="" explicitFocusOrder="0" pos="1080 920 150 24" buttonText="Generator"
              connectedEdges="0" needsCallback="1" radioGroupId="0"/>
  <LABEL name="new label" id="da775e71f549b583" memberName="juce__label"
         virtualName="" explicitFocusOrder="0" pos="40 512 150 24" edTextCol="ff000000"
         edBkgCol="0" labelText="TimeQuardFragment&#10;" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15.0" kerning="0.0" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="737d10b40e887cc4" memberName="juce__label2"
         virtualName="" explicitFocusOrder="0" pos="40 552 150 24" edTextCol="ff000000"
         edBkgCol="0" labelText="TimeQuardVetex" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15.0" kerning="0.0" bold="0" italic="0" justification="33"/>
  <TEXTEDITOR name="new text editor" id="be45388e233227e0" memberName="_textEditorTimeFrag"
              virtualName="" explicitFocusOrder="0" pos="224 512 464 24" initialText=""
              multiline="0" retKeyStartsLine="0" readonly="0" scrollbars="1"
              caret="1" popupmenu="1"/>
  <TEXTEDITOR name="new text editor" id="97f8435b0fb4ea8d" memberName="_textEditorTimeVetex"
              virtualName="" explicitFocusOrder="0" pos="224 552 464 24" initialText=""
              multiline="0" retKeyStartsLine="0" readonly="0" scrollbars="1"
              caret="1" popupmenu="1"/>
  <LABEL name="new label" id="8e12ec90409cf2e8" memberName="juce__label3"
         virtualName="" explicitFocusOrder="0" pos="40 600 150 24" edTextCol="ff000000"
         edBkgCol="0" labelText="BackGroundFragment" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15.0" kerning="0.0" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="9e37c81fb857aa84" memberName="juce__label4"
         virtualName="" explicitFocusOrder="0" pos="40 648 150 24" edTextCol="ff000000"
         edBkgCol="0" labelText="BackGroundVetex" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15.0" kerning="0.0" bold="0" italic="0" justification="33"/>
  <TEXTEDITOR name="new text editor" id="a2a1d9ddc3677763" memberName="_textEditorBackGroundFragment"
              virtualName="" explicitFocusOrder="0" pos="224 608 464 24" initialText=""
              multiline="0" retKeyStartsLine="0" readonly="0" scrollbars="1"
              caret="1" popupmenu="1"/>
  <TEXTEDITOR name="new text editor" id="d0e4d9d44b368753" memberName="_textEditorBackGroundVetex"
              virtualName="" explicitFocusOrder="0" pos="224 656 464 24" initialText=""
              multiline="0" retKeyStartsLine="0" readonly="0" scrollbars="1"
              caret="1" popupmenu="1"/>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif


//[EndFile] You can add extra defines here...
//[/EndFile]

