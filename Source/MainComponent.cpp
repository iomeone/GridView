/*
  ==============================================================================

    This file was auto-generated!

  ==============================================================================
*/

#include "MainComponent.h"
//https://dribbble.com/srioz

 

//==============================================================================
MainComponent::MainComponent() //, stylecom("teststyle123123123")// : manager(false)
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
	Icon.reset(new juce::Label("hi", "PIANO"));
	auto f = Icon->getFont();
	f.setSizeAndStyle(fontSize, Font::FontStyleFlags::plain, 1.0, 0);
	Icon->setFont(f);
	Icon->setJustificationType(Justification::right);
	//Icon->setBorderSize(juce::BorderSize<int>(5));  //need set outline width
	//Icon->setColour(juce::Label::outlineColourId, juce::Colours::black);
	addAndMakeVisible(Icon.get());





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


 

	_binGenerator.reset(new BinGeneratorComponent());
	//addAndMakeVisible(_binGenerator.get());


	_contentComp.reset(new ContentComponent());
	//addAndMakeVisible(_contentComp.get());

	addAndMakeVisible(&contentViewport);

	contentViewport.setViewedComponent(_contentComp.get(), false);

	tbAbout->onClick = [this]() {

		if (this->_binGenerator->isVisible())
		{
			this->_binGenerator->setVisible(false);
		}
		else
		{
			this->_binGenerator->setBounds(this->getBounds());

			this->_binGenerator->setResizable(true, true);
			this->_binGenerator->setUsingNativeTitleBar(true);
			this->_binGenerator->setVisible(true);
		}
		//juce::AlertWindow::showMessageBox(AlertWindow::AlertIconType::WarningIcon, "title", "msg", "btntext");
	};


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
	g.fillAll(juce::Colour(35, 62, 84));

    //g.setFont (Font (16.0f));
    //g.setColour (Colours::white);
    //g.drawText ("Hello World!", getLocalBounds(), Justification::centred, true);


	{
		//int x = 0, y = menuHeight, width = getWidth(), height = 400;
		//Colour fillColour = Colours::black;
		//g.setColour(fillColour);
		//g.fillRect(x, y, width, height);
	}
}

void MainComponent::resized()
{
    // This is called when the MainComponent is resized.
    // If you add any child components, this is where you should
    // update their positions.

	
	auto r = getLocalBounds();
		
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

 

	
	contentViewport.setBounds(r);
	_contentComp->setBounds(r.getX(), r.getY(), r.getWidth(), r.getHeight());


	//contentViewport.setBounds(100, 100, 100, 100);
	
	return;
	
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
