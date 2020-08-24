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
class BinGeneratorComponent  : public DocumentWindow,
                               public Button::Listener
{
public:
    //==============================================================================
    BinGeneratorComponent ();
    ~BinGeneratorComponent();

    //==============================================================================
    //[UserMethods]     -- You can add your own custom methods in this section.
	virtual void closeButtonPressed()
	{
		this->setVisible(false);
	}

	void msg(String s, String title = "caption", AlertWindow::AlertIconType t = AlertWindow::AlertIconType::InfoIcon)
	{
		AlertWindow::showMessageBox(t, title, s, "ok");
	}


	void checkFile(File curDir, String name, std::unique_ptr<TextEditor> & edt)
	{
		juce::File FileTexturePng = curDir.getChildFile(name);
		if (FileTexturePng.existsAsFile())
			edt->setText(FileTexturePng.getFullPathName());
		else
			msg(FileTexturePng.getFullPathName(), "File Not Found");
	}


    //[/UserMethods]

    void paint (Graphics& g) override;
    void resized() override;
    void buttonClicked (Button* buttonThatWasClicked) override;

    // Binary resources:
    static const char* becauseoltheme_png;
    static const int becauseoltheme_pngSize;


private:
    //[UserVariables]   -- You can add your own custom variables in this section.
    //[/UserVariables]

    //==============================================================================
    std::unique_ptr<Label> _labelTexturePng;
    std::unique_ptr<TextEditor> _textEditorTexturePng;
    std::unique_ptr<TextButton> _textButtonTexturePng;
    std::unique_ptr<TextButton> _textButtonxmlSheet;
    std::unique_ptr<TextEditor> _textEditorxmlSheet;
    std::unique_ptr<Label> _labelXmlSheet;
    std::unique_ptr<TextButton> _textButtonParticleFragment;
    std::unique_ptr<TextEditor> _textEditorParticleFragment;
    std::unique_ptr<Label> _labelParticleFragment;
    std::unique_ptr<TextButton> _textButtonParticleVetex;
    std::unique_ptr<TextEditor> _textEditorParticleVetex;
    std::unique_ptr<Label> _labelParticleVetex;
    std::unique_ptr<TextButton> _textButtonstaffFragment;
    std::unique_ptr<TextEditor> _textEditorstaffFragment2;
    std::unique_ptr<Label> _labelstaffFragment;
    std::unique_ptr<TextButton> _textButtonstaffVetex;
    std::unique_ptr<TextEditor> _textEditorstaffVetex;
    std::unique_ptr<Label> _labelstaffVetex;
    std::unique_ptr<TextButton> _textButtonTieFragment2;
    std::unique_ptr<TextEditor> _textEditorTieFragment3;
    std::unique_ptr<Label> _labelTieFragment;
    std::unique_ptr<TextButton> _textButtonTieVetex;
    std::unique_ptr<TextEditor> _textEditorTieVetex;
    std::unique_ptr<Label> _labelTieVetex2;
    std::unique_ptr<Label> _difficulty;
    std::unique_ptr<TextEditor> _textEditorDifficulty;
    std::unique_ptr<Label> _Type;
    std::unique_ptr<TextEditor> _textEditorType;
    std::unique_ptr<Label> _Title;
    std::unique_ptr<TextEditor> _textEditorTitle;
    std::unique_ptr<Label> _Author;
    std::unique_ptr<TextEditor> _textEditorAuthor;
    std::unique_ptr<Label> _Picture;
    std::unique_ptr<TextEditor> _textEditorPicture;
    std::unique_ptr<TextButton> _textButtonGenerator;
    Image cachedImage_becauseoltheme_png_1;


    //==============================================================================
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (BinGeneratorComponent)
};

//[EndFile] You can add extra defines here...
//[/EndFile]

