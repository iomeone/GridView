/*
  ==============================================================================

    This file was auto-generated!

  ==============================================================================
*/

#include "MainComponent.h"
//https://dribbble.com/srioz
//==============================================================================
MainComponent::MainComponent() : c1("EASY"), c2("MEDIUM"), c3("HARD")//, stylecom("teststyle123123123")// : manager(false)
{
   


	//addAndMakeVisible(manager);

	//addAndMakeVisible(view);

	//comp.setBounds(0, 0, 600, 600);  // smaller than the Viewport...
	////comp.setTransform(AffineTransform::scale(2.0f));  // ...but scaled bigger.

	//view.setBounds(Rectangle<int>(0, 0, 400, 400));
	//view.setViewedComponent(&comp, false);
	//view.setScrollBarsShown(true, true);

	//view.setViewPosition(0, 0);


	// test lbl
	{
		testlbl.reset(new juce::Label("hi2", "AIUOPadfasdf "));
		auto f = testlbl->getFont();
		f.setSizeAndStyle(fontSize, Font::FontStyleFlags::plain, 1.0, 0);
		testlbl->setFont(f);
		testlbl->setJustificationType(Justification::left);
		addAndMakeVisible(testlbl.get());
	}



	//icon 
	Icon.reset(new juce::Label("hi", "AIUOP"));
	auto f = Icon->getFont();
	f.setSizeAndStyle(fontSize, Font::FontStyleFlags::plain, 1.0, 0);
	Icon->setFont(f);
	Icon->setJustificationType(Justification::right);
	//Icon->setBorderSize(juce::BorderSize<int>(5));  //need set outline width
	//Icon->setColour(juce::Label::outlineColourId, juce::Colours::black);
	addAndMakeVisible(Icon.get());


	//book library
	
	bookLibrary.reset(new juce::Label("bk", "BOOK LIBRARY"));
	f = Icon->getFont();
	f.setSizeAndStyle(fontSize , Font::FontStyleFlags::bold, 1.0, 0);
	bookLibrary->setFont(f);
	bookLibrary->setJustificationType(Justification::centred);
	bookLibrary->setColour(juce::Label::ColourIds::backgroundColourId, juce::Colours::black);
	//Icon->setBorderSize(juce::BorderSize<int>(5));  //need set outline width
	//Icon->setColour(juce::Label::outlineColourId, juce::Colours::black);
	addAndMakeVisible(bookLibrary.get());


	// menu
	//strWidthMap[] = 
	tbAbout.reset(new juce::TextButton(juce::String("ABOUT")));
	addAndMakeVisible(tbAbout.get());

	tbAcademy.reset(new juce::TextButton(juce::String("ACADEMY")));
	addAndMakeVisible(tbAcademy.get());

	tbSongs.reset(new juce::TextButton(juce::String("SONGS")));
	addAndMakeVisible(tbSongs.get());

	tbConnect.reset(new juce::TextButton(juce::String("CONNECT")));
	addAndMakeVisible(tbConnect.get());

	tbPro.reset(new juce::TextButton(juce::String("PRO")));
	addAndMakeVisible(tbPro.get());




	//addAndMakeVisible(buttons.add(new juce::TextButton(juce::String("ACADEMY"))));
	//addAndMakeVisible(buttons.add(new juce::TextButton(juce::String("SONGS"))));


	//addAndMakeVisible(buttons.add(new juce::TextButton(juce::String("CONNECT"))));
	//addAndMakeVisible(buttons.add(new juce::TextButton(juce::String("PRO"))));


	addAndMakeVisible(&c1);
	//addAndMakeVisible(&c2);
	//addAndMakeVisible(&c3);
 

	//addAndMakeVisible(&stylecom);

	for (int i = 0; i < 10; i++)
	{
		styles1.add(new TStyleComponent(   String::repeatedString(String(i), i % 10 + 1)
		));
	}

	for (int i = 0; i < 20; i++)
	{
		styles2.add(new TStyleComponent(String::repeatedString(String(i), i % 10 + 1)
		));
	}

	for (int i = 0; i < styles1.size(); ++i)
	{
		addAndMakeVisible(styles1[i]);
		/*buttons[i]->setBounds(buttonSize * (i % 3),
			buttonSize * (i / 3) + bounds.getHeight() / 3,
			buttonSize,
			buttonSize);*/
	}

	for (int i = 0; i < styles2.size(); ++i)
	{
		//addAndMakeVisible(styles2[i]);
	}

	setSize(1920 * 0.75, 1200 * 0.75);
}



MainComponent::~MainComponent()
{
}

//==============================================================================
void MainComponent::paint (Graphics& g)
{
    // (Our component is opaque, so we must completely fill the background with a solid colour)
    //g.fillAll (getLookAndFeel().findColour (ResizableWindow::backgroundColourId));
	g.fillAll(juce::Colour(91, 41, 154));

    //g.setFont (Font (16.0f));
    //g.setColour (Colours::white);
    //g.drawText ("Hello World!", getLocalBounds(), Justification::centred, true);


	{
		int x = 0, y = menuHeight, width = getWidth(), height = 400;
		Colour fillColour = Colours::black;
		g.setColour(fillColour);
		g.fillRect(x, y, width, height);
	}
}

void MainComponent::resized()
{
    // This is called when the MainComponent is resized.
    // If you add any child components, this is where you should
    // update their positions.

	int maxStyleWidth = getWidth() - 20 * 2;
	int spacing = 10;

	int totalW = 0;
	for (int i = 0; i < 10; i++)
	{
		totalW += styles1[i]->getIdealWidth();
	}

	totalW += (10 - 1) * spacing;

	int rows =  maxStyleWidth / totalW + 1;


	auto r = getLocalBounds().toFloat();

	auto styleRect = r.removeFromTop(TStyleComponent::_expectHeight * rows).toNearestInt();



	//stylecom.setBounds(sr.getX(), sr.getY(), stylecom.getIdealWidth(), stylecom._expectHeight);
	
	juce::FlexBox fbStyles1;                                               // [1]
	fbStyles1.flexDirection = juce::FlexBox::Direction::row;
	fbStyles1.flexWrap = juce::FlexBox::Wrap::wrap;                        // [2]
	fbStyles1.justifyContent = juce::FlexBox::JustifyContent::center;      // [3]
	fbStyles1.alignContent = juce::FlexBox::AlignContent::center;       // [4]

	for (int i = 0; i < 10; i++)
	{
		auto idealWidth = styles1[i]->getIdealWidth() ;
		auto fis = juce::FlexItem(*styles1[i]).withMinWidth(idealWidth).withMaxWidth(idealWidth).withMinHeight(TStyleComponent::_expectHeight).withMaxHeight(TStyleComponent::_expectHeight);
		fbStyles1.items.add(fis);
	}



	//fis = juce::FlexItem(c2).withMinWidth(200).withMaxWidth(200).withMinHeight(75).withMaxHeight(75);
	//fbStyles1.items.add(fis);

	//fis = juce::FlexItem(c3).withMinWidth(200).withMaxWidth(200).withMinHeight(75).withMaxHeight(75);
	//fbStyles1.items.add(fis);

	fbStyles1.performLayout(styleRect);



	return;
		

		juce::AttributedString attributedText;
		attributedText.append(Icon->getText(), Icon->getFont());
		attributedText.setJustification(juce::Justification::right);
		int textWidth;
		int textHeight;
		TryToFit(attributedText, getWidth(), getHeight(), textWidth, textHeight);
		menuHeight = textHeight;
		auto topRect = r.removeFromTop(textHeight);
		auto topIconRect = topRect.removeFromLeft(textWidth);
		Icon->setBounds(topIconRect.toNearestInt());

		//testlbl->setBounds(topRect.toNearestInt());
	




// add menu

	juce::FlexBox fb;                                               // [1]
	fb.flexDirection = juce::FlexBox::Direction::row;
	fb.flexWrap = juce::FlexBox::Wrap::wrap;                        // [2]
	fb.justifyContent = juce::FlexBox::JustifyContent::spaceAround;      // [3]
	fb.alignContent = juce::FlexBox::AlignContent::center;       // [4]

	//auto leftNotUse_TopLeft = topRect.removeFromLeft(256);
	auto rightNotUse_TopLeft = topRect.removeFromRight(256);
	auto menuArea = topRect.removeFromRight(600);

	float menuBtnHeight = topRect.getHeight() * 2.f/4.f;
	/*fb.items.add(juce::FlexItem(100, menuBtnHeight));*/

	// add menu->about
	int rw, rh;
	getCommpontIdealWidth("About", topRect.getWidth(), topRect.getHeight(), rw, rh);
	auto fi = juce::FlexItem(*tbAbout).withMinWidth(rw + 50).withMaxWidth(rw + 50).withMinHeight(menuBtnHeight).withMaxHeight(menuBtnHeight);//fi.flexBasis = 100;
	fb.items.add(fi);


	// add menu->ACADEMY
	getCommpontIdealWidth("ACADEMY", topRect.getWidth(), topRect.getHeight(), rw, rh);
	fi = juce::FlexItem(*tbAcademy).withMinWidth(rw + 50).withMaxWidth(rw + 50).withMinHeight(menuBtnHeight).withMaxHeight(menuBtnHeight);//fi.flexBasis = 100;
	fb.items.add(fi);

	// add menu->SONGS
	getCommpontIdealWidth("SONGS", topRect.getWidth(), topRect.getHeight(), rw, rh);
	fi = juce::FlexItem(*tbSongs).withMinWidth(rw + 50).withMaxWidth(rw + 50).withMinHeight(menuBtnHeight).withMaxHeight(menuBtnHeight);//fi.flexBasis = 100;
	fb.items.add(fi);


	// add menu->CONNECT
	getCommpontIdealWidth("CONNECT", topRect.getWidth(), topRect.getHeight(), rw, rh);
	fi = juce::FlexItem(*tbConnect).withMinWidth(rw + 50).withMaxWidth(rw + 50).withMinHeight(menuBtnHeight).withMaxHeight(menuBtnHeight);//fi.flexBasis = 100;
	fb.items.add(fi);


	// add menu->PRO
	getCommpontIdealWidth("PRO", topRect.getWidth(), topRect.getHeight(), rw, rh);
	fi = juce::FlexItem(*tbPro).withMinWidth(rw + 50).withMaxWidth(rw + 50).withMinHeight(menuBtnHeight).withMaxHeight(menuBtnHeight);//fi.flexBasis = 100;
	fb.items.add(fi);


	//fb.items.add(juce::FlexItem(100, menuBtnHeight));

	fb.performLayout(menuArea);                  // [6]



	auto bookLibraryRect = r.removeFromTop(105.f );
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

	fi = juce::FlexItem(c1).withMinWidth(200).withMaxWidth(200).withMinHeight(75).withMaxHeight(75);
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

	

	
}

void MainComponent::TryToFit(juce::AttributedString & text, int tryWidth, int tryHeight, int & resultWidth, int & resultHeight)
{
	juce::TextLayout textLayout;
	textLayout.createLayoutWithBalancedLineLengths(text, tryWidth, tryHeight);
	resultWidth = (int)textLayout.getWidth() + 1;
	resultHeight = (int)textLayout.getHeight() + 1;
}


void MainComponent::getCommpontIdealWidth(String s, int maxwidth ,int maxheight, int & resultWidth, int & resultHeight)
{
	int textWidth;
	int textHeight;
	juce::TextLayout textLayout;
	juce::AttributedString attributedText;
	attributedText.append(s, tbAbout->getLookAndFeel().getTextButtonFont(*tbAbout, maxheight));
	attributedText.setJustification(juce::Justification::right);

	textLayout.createLayoutWithBalancedLineLengths(attributedText, maxwidth, maxheight);

	resultWidth = (int)ceil(textLayout.getWidth());
	resultHeight = (int)ceil(textLayout.getHeight());
}
