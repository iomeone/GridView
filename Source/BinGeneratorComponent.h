/*
  ==============================================================================

  This is an automatically generated GUI class created by the Projucer!

  Be careful when adding custom code to these files, as only the code within
  the "//[xyz]" and "//[/xyz]" sections will be retained when the file is loaded
  and re-saved.

  Created with Projucer version: 6.1.5

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
class BinGeneratorComponent  : public DocumentWindow,
                               public juce::Button::Listener
{
public:
    //==============================================================================
    BinGeneratorComponent ();
    ~BinGeneratorComponent() override;

    //==============================================================================
    //[UserMethods]     -- You can add your own custom methods in this section.
	virtual void closeButtonPressed()
	{
		this->setVisible(false);
	}

	void msg(String s, String title = "caption", AlertWindow::AlertIconType t = AlertWindow::AlertIconType::InfoIcon)
	{
		//AlertWindow::showMessageBox(t, title, s, "ok");
        AlertWindow::showMessageBoxAsync(t,
            title,
            s);
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

    void paint (juce::Graphics& g) override;
    void resized() override;
    void buttonClicked (juce::Button* buttonThatWasClicked) override;



private:
    //[UserVariables]   -- You can add your own custom variables in this section.
	Image cachedImage_heartandsoulpiano_png_1;
	String fileName;
	juce::File curDir;
    //[/UserVariables]

    //==============================================================================
    std::unique_ptr<juce::Label> _labelTexturePng;
    std::unique_ptr<juce::TextEditor> _textEditorTexturePng;
    std::unique_ptr<juce::TextButton> _textButtonTexturePng;
    std::unique_ptr<juce::TextButton> _textButtonxmlSheet;
    std::unique_ptr<juce::TextEditor> _textEditorxmlSheet;
    std::unique_ptr<juce::Label> _labelXmlSheet;
    std::unique_ptr<juce::TextButton> _textButtonParticleFragment;
    std::unique_ptr<juce::TextEditor> _textEditorParticleFragment;
    std::unique_ptr<juce::Label> _labelParticleFragment;
    std::unique_ptr<juce::TextButton> _textButtonParticleVetex;
    std::unique_ptr<juce::TextEditor> _textEditorParticleVetex;
    std::unique_ptr<juce::Label> _labelParticleVetex;
    std::unique_ptr<juce::TextButton> _textButtonstaffFragment;
    std::unique_ptr<juce::TextEditor> _textEditorstaffFragment2;
    std::unique_ptr<juce::Label> _labelstaffFragment;
    std::unique_ptr<juce::TextButton> _textButtonstaffVetex;
    std::unique_ptr<juce::TextEditor> _textEditorstaffVetex;
    std::unique_ptr<juce::Label> _labelstaffVetex;
    std::unique_ptr<juce::TextButton> _textButtonTieFragment2;
    std::unique_ptr<juce::TextEditor> _textEditorTieFragment3;
    std::unique_ptr<juce::Label> _labelTieFragment;
    std::unique_ptr<juce::TextButton> _textButtonTieVetex;
    std::unique_ptr<juce::TextEditor> _textEditorTieVetex;
    std::unique_ptr<juce::Label> _labelTieVetex2;
    std::unique_ptr<juce::Label> _difficulty;
    std::unique_ptr<juce::TextEditor> _textEditorDifficulty;
    std::unique_ptr<juce::Label> _Type;
    std::unique_ptr<juce::TextEditor> _textEditorType;
    std::unique_ptr<juce::Label> _Title;
    std::unique_ptr<juce::TextEditor> _textEditorTitle;
    std::unique_ptr<juce::Label> _Author;
    std::unique_ptr<juce::TextEditor> _textEditorAuthor;
    std::unique_ptr<juce::Label> _Picture;
    std::unique_ptr<juce::TextEditor> _textEditorPicture;
    std::unique_ptr<juce::TextButton> _textButtonGenerator;
    std::unique_ptr<juce::Label> juce__label;
    std::unique_ptr<juce::Label> juce__label2;
    std::unique_ptr<juce::TextEditor> _textEditorTimeFrag;
    std::unique_ptr<juce::TextEditor> _textEditorTimeVetex;
    std::unique_ptr<juce::Label> juce__label3;
    std::unique_ptr<juce::Label> juce__label4;
    std::unique_ptr<juce::TextEditor> _textEditorBackGroundFragment;
    std::unique_ptr<juce::TextEditor> _textEditorBackGroundVetex;


    //==============================================================================
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (BinGeneratorComponent)
};

//[EndFile] You can add extra defines here...
//[/EndFile]

