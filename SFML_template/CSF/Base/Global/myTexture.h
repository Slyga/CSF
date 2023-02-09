#pragma once
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
 

using namespace sf;
using namespace std;

namespace csf
{
	/// <summary>
	/// ��������
	/// </summary>
	class myTexture
	{
	private:
		/// <summary>
		/// ��������
		/// </summary>
		Texture texture;
		/// <summary>
		/// ��� ��������
		/// </summary>
		string name;
		/// <summary>
		/// �������
		/// </summary>
		Vector2f location;
		/// <summary>
		/// �������
		/// </summary>
		Vector2f dimensions;
	public:
		/// <summary>
		/// �����������
		/// </summary>
		myTexture();
		/// <summary>
		/// �����������
		/// </summary>
		/// <param name="way">���� � �������</param>
		/// <param name="name">��� ��������</param>
		/// <param name="x">������� �� �</param>
		/// <param name="y">������� �� y/param>
		myTexture(string way, string name, int x, int y);
		/// <summary>
		/// ������� ��������
		/// </summary>
		/// <returns>��������</returns>
		Texture& getTexture(){ return texture; }
		/// <summary>
		/// ������� ��� ��������
		/// </summary>
		/// <returns>��� ��������</returns>
		string& getName(){ return name; }
		/// <summary>
		/// ������� �������
		/// </summary>
		/// <returns>�������</returns>
		Vector2f getPosition(){ return location; }
		/// <summary>
		/// ������� �������
		/// </summary>
		/// <returns>�������</returns>
		Vector2f getDimensions(){ return dimensions; }
	};
}

