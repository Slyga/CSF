#pragma once
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include "ClassesSFML.h"

using namespace std;
using namespace sf;

namespace ClassesSFML
{	
	/// <summary>
	/// �������� � 100 ��
	/// </summary>
	void Delay();
	
	/// <summary>
	/// ���������� �������
	/// </summary>
	/// <returns>������� ������</returns>
	float getTimer();
}