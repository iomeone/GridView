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

#include "ContentComponent.h"


//[MiscUserDefs] You can add your own user definitions and misc code here...
//[/MiscUserDefs]

//==============================================================================
ContentComponent::ContentComponent ()
    : c1("EASY"), c2("MEDIUM"), c3("HARD")
{
    //[Constructor_pre] You can add your own custom stuff here..

		//book library

	bookLibrary.reset(new juce::Label("bk", "BOOK LIBRARY"));
	auto f = bookLibrary->getFont();
	f.setSizeAndStyle(fontSize, Font::FontStyleFlags::bold, 1.0, 0);
	bookLibrary->setFont(f);
	bookLibrary->setJustificationType(Justification::centred);
	bookLibrary->setColour(juce::Label::ColourIds::backgroundColourId, juce::Colours::black);
	//Icon->setBorderSize(juce::BorderSize<int>(5));  //need set outline width
	//Icon->setColour(juce::Label::outlineColourId, juce::Colours::black);
	addAndMakeVisible(bookLibrary.get());



	addAndMakeVisible(&c1);


	for (int i = 0; i < 10; i++)
	{
		styles1.add(new TStyleComponent(String::repeatedString(String(i), i % 10 + 1)
		));
	}



	for (int i = 0; i < styles1.size(); ++i)
	{
		addAndMakeVisible(styles1[i]);
	}



	_searchCom.reset(new SearchComponent());
	addAndMakeVisible(_searchCom.get());


    //[/Constructor_pre]


    //[UserPreSize]
    //[/UserPreSize]

    setSize (600, 400);


    //[Constructor] You can add your own custom stuff here..
    //[/Constructor]
}

ContentComponent::~ContentComponent()
{
    //[Destructor_pre]. You can add your own custom destruction code here..
    //[/Destructor_pre]



    //[Destructor]. You can add your own custom destruction code here..
    //[/Destructor]
}

//==============================================================================
void ContentComponent::paint (Graphics& g)
{
    //[UserPrePaint] Add your own custom painting code here..
    //[/UserPrePaint]

    g.fillAll (Colour (0xff323e44));

    //[UserPaint] Add your own custom painting code here..
    //[/UserPaint]
}

void ContentComponent::resized()
{
    //[UserPreResize] Add your own custom resize code here..
    //[/UserPreResize]

    //[UserResized] Add your own custom resize handling here..
	auto r = getLocalBounds();

	auto bookLibraryRect = r.removeFromTop(105.f);
	bookLibrary->setBounds(bookLibraryRect.toNearestInt());




	float difficultyWidth = 780.f;
	auto difficultyArea = r.removeFromTop(75.f);
	float leftNotUse = (getWidth() - difficultyWidth) / 2.0;
	difficultyArea.removeFromLeft(leftNotUse);
	difficultyArea.removeFromRight(leftNotUse);

	juce::FlexBox fbDifficulty;                                               // [1]
	fbDifficulty.flexDirection = juce::FlexBox::Direction::row;
	fbDifficulty.flexWrap = juce::FlexBox::Wrap::wrap;                        // [2]
	fbDifficulty.justifyContent = juce::FlexBox::JustifyContent::center;      // [3]
	fbDifficulty.alignContent = juce::FlexBox::AlignContent::center;       // [4]

	auto fi = juce::FlexItem(c1).withMinWidth(200).withMaxWidth(200).withMinHeight(75).withMaxHeight(75);
	fbDifficulty.items.add(fi);

	//fi = juce::FlexItem(c2).withMinWidth(200).withMaxWidth(200).withMinHeight(75).withMaxHeight(75);
	//fbDifficulty.items.add(fi);

	//fi = juce::FlexItem(c3).withMinWidth(200).withMaxWidth(200).withMinHeight(75).withMaxHeight(75);
	//fbDifficulty.items.add(fi);

	fbDifficulty.performLayout(difficultyArea);



	//////////////////////////////////
	//
	//
	//style
	//////////////////////////////////
	//height 40      lable width = whole width - 60

	int maxStyleWidth = getWidth() - 20 * 2;
	int spacing = 10;

	int totalW = 0;
	for (int i = 0; i < 10; i++)
	{
		totalW += styles1[i]->getIdealWidth();
	}

	totalW += (10 - 1) * spacing;

	int rows = totalW / maxStyleWidth + 1;

	auto styleRect = r.removeFromTop(TStyleComponent::_expectHeight * rows + rows * 20/*  20 is margin */).toNearestInt();


	auto lnotused = styleRect.removeFromLeft(20);
	auto rnotused = styleRect.removeFromRight(20);

	juce::FlexBox fbStyles1;
	fbStyles1.flexDirection = juce::FlexBox::Direction::row;
	fbStyles1.flexWrap = juce::FlexBox::Wrap::wrap;
	fbStyles1.justifyContent = juce::FlexBox::JustifyContent::spaceAround;
	fbStyles1.alignContent = juce::FlexBox::AlignContent::center;

	for (int i = 0; i < 10; i++)
	{
		auto idealWidth = styles1[i]->getIdealWidth();
		auto fis = juce::FlexItem(*styles1[i]).withMinWidth(idealWidth).withMaxWidth(idealWidth).withMinHeight(TStyleComponent::_expectHeight).withMaxHeight(TStyleComponent::_expectHeight)
			.withMargin(FlexItem::Margin(0, 10, 20, 0));
		fbStyles1.items.add(fis);
	}

	fbStyles1.performLayout(styleRect);








	/////////////////
	//
	//search
	////////////////
	r.removeFromTop(48);
	auto searchArea = r.removeFromTop(48);


	juce::FlexBox fbSearch;
	fbSearch.flexDirection = juce::FlexBox::Direction::row;
	fbSearch.flexWrap = juce::FlexBox::Wrap::noWrap;
	fbSearch.justifyContent = juce::FlexBox::JustifyContent::center;
	fbSearch.alignContent = juce::FlexBox::AlignContent::center;



	auto fitemsearch = juce::FlexItem(*_searchCom).withMinWidth(500).withMaxWidth(500).withMinHeight(48).withMaxHeight(48);

	fbSearch.items.add(fitemsearch);


	fbSearch.performLayout(searchArea);


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

<JUCER_COMPONENT documentType="Component" className="ContentComponent" componentName=""
                 parentClasses="public Component" constructorParams="" variableInitialisers=" c1(&quot;EASY&quot;), c2(&quot;MEDIUM&quot;), c3(&quot;HARD&quot;)"
                 snapPixels="8" snapActive="1" snapShown="1" overlayOpacity="0.330"
                 fixedSize="0" initialWidth="600" initialHeight="400">
  <BACKGROUND backgroundColour="ff323e44"/>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif


//[EndFile] You can add extra defines here...
//[/EndFile]

