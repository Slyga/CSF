#pragma once
#include <iostream>
#include <SFML/Graphics.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include "csf.h"


#define WINDOW_CLOSE -1
#define SCENE_CONTINUE 0
#define SCENE_GAME_SITUATION_1 1


using namespace sf;
using namespace std;
using namespace csf;


class sceneGameSituation1 : Scene
{
	enum Status{Start, Game, Final} status;

	static Scene* scene;
	mySprite WindowBackgraund;
	Button ExitButton;
	Plate plate;
	DropWindow dropWindowBeginner;
	CheckBox checkBox;
	
	mySprite test;
	mySprite test2;

	myText text;
	MultilineText mtext;
	
	ScrollingVertical Scroll;
	
	PopUpWindow windowExport;
	PopUpWindowУesNo windowIsExport;
	PopUpTextBox textBoxExport;
	JumpOutPopUpWindow dropWindowGameOver;
	
	ComboBox comboboxMovement;
public: 
	/// <summary>
	/// Констуктор
	/// </summary>
	/// <param name="window">Окно</param>
	sceneGameSituation1(RenderWindow &window)
	{
		status = Start;
		WindowBackgraund.Reload("WindowBackgraund");
		ExitButton.Reload("ExitButton");

		//plate.Reload("cat", 400, 100);
		//plate.BaseObject::setColorAwakening(Color(255, 255, 255, 150));
		//plate.setAwakeningType(Plate::ChangeColor);
		//plate.BaseObject::setScale(Vector2f(0.5, 0.5));
		//plate.setMaskRect(FloatRect(0, 0, 1366, 316));
		
		checkBox.Reload("checkBox", false);
		
		text.Reload(250, 250, L"Полезно", 30);
		text.setColor(255, 255, 255);
		text.setOrigin(0, 15);
		text.setRotate(-125);
		text.setScale(2, 2);
		
		//plate.Reload(*text);

		mtext.Reload(L"Ну\nОчень\nПолезно", 900, 100);
		mtext.setSize(30);
		mtext.setColor(0, 0, 0);
		
		Scroll.Reload((mySprite*)*checkBox, "Scrolling");
		//Scroll.setRotate(-45);

		windowExport.Reload("windowExport");
		//windowExport.TurnOn();
		windowExport.setPosition(window);
		
		windowIsExport.Reload("windowIsExport");
		//windowIsExport.TurnOn();
		windowIsExport.setPosition(window);
		
		textBoxExport.Reload("textBoxExport");
		//textBoxExport.TurnOn();
		textBoxExport.setPosition(window);
		
		dropWindowGameOver.Reload("dropWindowGameOver", JumpOutPopUpWindow::Right, 100);
		//dropWindowGameOver.TurnOn();
		dropWindowGameOver.setPosition(50, 50, window);
		
		comboboxMovement.Reload("comboboxMovement", 4);
		comboboxMovement.setLineSpacing((float)1.1);
		comboboxMovement.setStartPositionPlate(Vector2f(-1, -1));
		comboboxMovement.setRotate(-45);

		test.Reload("ExitButton", 500, 500);
		//test.setScale(0.5, 0.5);
		//test.setRotate(45);
		//test.setOrigin(test.getDimensions().x / 2, test.getDimensions().y / 2);

		test2.Reload(test.getSprite());
		test2.setMaskRect(FloatRect(500, 500, 174, 88));
		test2.setOrigin(184, 44);
		//test2.setScale(2, 2);
		test2.setPosition(684, 500);
		
		//test2.setRotate(-45);

		plate.Reload(*test2);
		plate.setScaleAwakening(Vector2f(1.2, 1.2));
		plate.setAwakeningType(BaseObject::ChangeScale);

		//test2.setPosition(0, 0);
		//test2.setAwakeningType(Plate::ChangeFrame);
		//est2.setMaskRect(FloatRect(0, 0, 100, 100));
		//test2.setTexture("ExitButton");
		
		dropWindowBeginner.Reload(*plate, "dropWindowBeginner");
		test.setColor(100, 100, 100);
	}
	
	/// <summary>
	/// Обновление/Оживление окнa
	/// </summary>
	/// <param name="window">Окно</param>
	/// <returns></returns>
	virtual int Update(RenderWindow &window) override
	{
		if (ExitButton.Pressed(event, window)) window.close();
		checkBox.Update(event, window);
		auto temp = plate.MovePlate(window);
		//if (temp == *plate) Scroll.updatePosition();
		dropWindowBeginner.Update(event, window);
		Scroll.Update(event, window);
		comboboxMovement.MovePlates(window);
		
		windowIsExport.Update(event, window);
		textBoxExport.Update(event, window);
		dropWindowGameOver.Update(event, window);

		switch (status)
		{
		case sceneGameSituation1::Start:
			
			break;

		case sceneGameSituation1::Game:
			
			break;

		case sceneGameSituation1::Final:
			
			break;
		}
		
		return SCENE_CONTINUE;
	}

	/// <summary>
	/// Отрисовкa объектов сцены
	/// </summary>
	/// <param name="window">Окно</param>
	virtual void Draw(RenderWindow &window) override
	{
		window.clear(); {
			WindowBackgraund > window;
			ExitButton >> window;
			
			checkBox >> window;
			
			text > window;
			mtext > window;
			
			Scroll >> window;
			
			plate >> window;
			dropWindowBeginner > window;

			comboboxMovement >> window;
			
			windowExport >> window;
			windowIsExport >> window;
			textBoxExport >> window;
			dropWindowGameOver >> window;

			test >> window;
			test2 >> window;

			switch (status)
			{
			case sceneGameSituation1::Start:
				
				break;
			case sceneGameSituation1::Game:
				
				break;
			case sceneGameSituation1::Final:
				
				break;
			}
		} window.display();
	}
	
	/// <summary>
	/// Удаление дaнных окнa
	/// </summary>
	virtual void Reborn() override
	{
		Scroll.Delete();
		windowExport.Delete();
		windowIsExport.Delete();
		textBoxExport.Delete();
		dropWindowGameOver.Delete();
		comboboxMovement.Delete();
		ExitButton.Delete();
		plate.Delete();
		dropWindowBeginner.Delete();
		checkBox.Delete();
		test2.Delete();
	}
	/// <summary>
	/// Создание сцены
	/// </summary>
	/// <param name="window">Окно</param>
	/// <returns>Возврат новой ссылки на объект сцены если её не было или возврат существующей ссылки на объект сцены</returns>
	static Scene* getScene(RenderWindow &window)
	{
		if (scene == NULL) scene = new sceneGameSituation1(window);
		return scene;
	}
	/// <summary>
	/// Возврaт объектa сцены
	/// </summary>
	/// <returns>Возврат ссылки на объект сцены</returns>
	static Scene* getScene() { return scene; }
	/// <summary>
	/// Возврат существует ли сцена
	/// </summary>
	/// <returns>true — сцена существует, false — сцена не существует</returns>
	static bool isScene()
	{
		if (scene == NULL) return false;
		return true;
	}
};
Scene* sceneGameSituation1::scene;
