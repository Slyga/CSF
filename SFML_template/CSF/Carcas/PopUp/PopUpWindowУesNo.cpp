#include "PopUpWindow�esNo.h"

csf::PopUpWindow�esNo::PopUpWindow�esNo()
	:PopUpWindow()
{
	Question = NULL;
	Yes = NULL;
	No = NULL;
}

csf::PopUpWindow�esNo::PopUpWindow�esNo(mySprite* background, BaseObject* question, Button* yes, Button* no)
	:PopUpWindow(background)
{
	Question = question;
	Yes = yes;
	No = no;
	setObject(Question);
	setObject(Yes);
	setObject(No);
}

csf::PopUpWindow�esNo::PopUpWindow�esNo(string name)
{
	Background = new mySprite(name);
	Question = new mySprite(name + "Question");
	Yes = new Button(name + "Yes");
	No = new Button(name + "No");

	Yes->setAwakeningType(AwakeningTypes::ChangeFrame);
	No->setAwakeningType(AwakeningTypes::ChangeFrame);

	location.x = location.y = 0;
	Background->setPosition(location.x, location.y);
	Question->setPosition((float)(location.x + Background->getScaleDimensions().x * 0.5 - Question->getScaleDimensions().x * 0.5),
						  (float)(location.y + Background->getScaleDimensions().y * 0.1));
	Yes->setPosition((float)(location.x + Background->getScaleDimensions().x * 0.4 - Yes->getScaleDimensions().x),
				     (float)(location.y + Background->getScaleDimensions().y - Background->getScaleDimensions().y * 0.1 - Yes->getScaleDimensions().y));
	No->setPosition((float)(location.x + Background->getScaleDimensions().x * 0.6),
					(float)(location.y + Background->getScaleDimensions().y - Background->getScaleDimensions().y * 0.1 - No->getScaleDimensions().y));

	*this = PopUpWindow�esNo(Background, Question, Yes, No);
}

void csf::PopUpWindow�esNo::Reload(string name)
{
	Delete();
	*this = PopUpWindow�esNo(name);
}

void csf::PopUpWindow�esNo::Reload(mySprite* background, BaseObject* question, Button* yes, Button* no)
{
	Delete();
	*this = PopUpWindow�esNo(background, question, yes, no);
}

int csf::PopUpWindow�esNo::Update(Event& event, RenderWindow& window)
{
	if (visible)
	{
		if (Yes->Pressed(event, window)) return POPUPYES;
		if (No->Pressed(event, window)) return POPUPNO;
	}
	return POPUPCONTINUE;
}