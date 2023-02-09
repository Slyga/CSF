#pragma once
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <fstream>
#include "myTexture.h"

#define INFORMATIONFORIMAGE "AccompanyingInformation.txt"

using namespace sf;
using namespace std;

namespace csf
{
	/// <summary>
	/// ���� �������
	/// </summary>
	class TextureBank
	{
	private:
		vector <myTexture> texture;

	public:
		/// <summary>
		/// ������ ���� � ���������
		/// </summary>
		/// <param name="Way">���� � ���������</param>
		void setTextureBank(string Way);
		/// <summary>
		/// �������� ��������
		/// </summary>
		/// <param name="index">������ ��������</param>
		/// <returns>��������</returns>
		myTexture& operator[](int index);
		/// <summary>
		/// �������� ��������
		/// </summary>
		/// <param name="Name">��� ��������</param>
		/// <returns>��������</returns>
		myTexture& operator[](string Name);
		/// <summary>
		/// �������� ��������
		/// </summary>
		/// <param name="index">������ ��������</param>
		/// <returns>��������</returns>
		myTexture& getTexture(int index);
		/// <summary>
		/// �������� ��������
		/// </summary>
		/// <param name="Name">��� ��������</param>
		/// <returns>��������</returns>
		myTexture& getTexture(string Name);
	};
	
}


