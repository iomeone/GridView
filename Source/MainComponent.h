/*
  ==============================================================================

    This file was auto-generated!

  ==============================================================================
*/

#pragma once

#include "../JuceLibraryCode/JuceHeader.h"
#include "TComponent.h"
#include "StackManager.h"

//==============================================================================
/*
    This component lives inside our window, and this is where you should put all
    your controls and content.
*/
class MainComponent   : public Component
{
public:
    //==============================================================================
    MainComponent();
    ~MainComponent();

    //==============================================================================
    void paint (Graphics&) override;
    void resized() override;

	void TryToFit(juce::AttributedString& text, int tryWidth, int tryHeight, int& resultWidth, int& resultHeight);

	void getCommpontIdealWidth(String s, int maxwidth, int buttonHeight, int & resultWidth, int & resultHeight);
public:
	juce::OwnedArray<juce::TextButton> buttons;
private:
    //==============================================================================
    // Your private member variables go here...
	//Viewport view;

	//bool firstCall{ true };
	//StackManager manager;
	TComponent c;

	float menuHeight{ 0.f };
	std::unique_ptr< juce::Label> Icon;

	std::unique_ptr< juce::Label> testlbl;
	float fontSize{ 100.0 };

	std::unique_ptr < TextButton > tbAbout;
	std::unique_ptr < TextButton > tbAcademy;
	std::unique_ptr < TextButton > tbSongs;
	std::unique_ptr < TextButton > tbConnect;
	std::unique_ptr < TextButton > tbPro;

	juce::HashMap<juce::String, int> strWidthMap;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (MainComponent)
};
