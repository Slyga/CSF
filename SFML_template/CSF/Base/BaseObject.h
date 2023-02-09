#pragma once
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>

using namespace sf;
using namespace std;

namespace csf
{
	/// <summary>
	/// ������
	/// </summary>
	class BaseObject
	{
	public:
		/// <summary>
		/// ��� ��������� ��� ���������
		/// nonAwakening � ��� ���������,
		/// ChangeColor � ����� �����,
		/// ChangeFrame � ����� �����������,
		/// Scale � ��������� ��������,
		/// Outline � �������,
		/// Other � ������
		/// </summary>
		enum AwakeningTypes {nonAwakening, ChangeColor, ChangeFrame, ChangeScale, Outline, Other};
	
	protected:
		AwakeningTypes AwakeningType;

		Color color;
		Color colorAwakening;

		Vector2f location;
		Vector2f originLocation;
		Vector2f maskLocation;
		Vector2f realLocation;

		Vector2f originalDimensions;
		Vector2f scaleDimensions;
		Vector2f realDimensions;
		
		String name;
		bool visible;
		bool enable;
		bool awakening;

		Vector2f origin;
		float rotate;

		Vector2f scale;
		Vector2f scaleAwakening;

		FloatRect textureRect;
		FloatRect maskRect;
		FloatRect maskTextureRect;


		/// <summary>
		/// �����������
		/// </summary>
		BaseObject();
		/// <summary>
		/// �����������
		/// </summary>
		/// <param name="x">������� �� x</param>
		/// <param name="y">������� �� y</param>
		/// <param name="name">��� �������</param>
		BaseObject(float x, float y, string name);
		/// <summary>
		/// �����������
		/// </summary>
		/// <param name="location">�������</param>
		/// <param name="name">��� �������</param>
		BaseObject(Vector2f location, string name);

		/// <summary>
		/// ������� ��������� �����. ���� ����� ����� -1, �� �� �� ��������
		/// </summary>
		/// <param name="red">�������</param>
		/// <param name="green">������</param>
		/// <param name="blue">�����</param>
		/// <param name="alpha">������������</param>
		/// <returns>��������� �����</returns>
		virtual Color getUpdateColor(Color prev, int red, int green, int blue, int alpha);
		/// <summary>
		/// ������� ����� � ������������, ����������� ��������� ������� �����
		/// </summary>
		/// <param name="pos">������� �����</param>
		/// <param name="centre">�����, ������������ ������� ��������������� ������</param>
		/// <param name="angle">���� ��������</param>
		Vector2f Rotate(Vector2f pos, Vector2f centre, float angle);

		/// <summary>
		/// ����� ����� ��� ���������
		/// !!! ������� ��������. ���������� ��������������� !!!
		/// </summary>
		/// <param name="Awakening">��������� �������</param>
		virtual void AwakeningChangeColor(bool awakening);
		/// <summary>
		/// ����� ����������� ��� ���������
		/// !!! ������� ��������. ���������� ��������������� !!!
		/// </summary>
		/// <param name="Awakening">��������� �������</param>
		virtual void AwakeningChangeFrame(bool awakening);
		/// <summary>
		/// ����� �������� ��� ���������
		/// !!! ������� ��������. ���������� ��������������� !!!
		/// </summary>
		/// <param name="Awakening">��������� �������</param>
		virtual void AwakeningChangeScale(bool awakening);
		/// <summary>
		/// ������� ��� ���������
		///  !!! ������� ��������. ���������� ��������������� !!!
		/// </summary>
		/// <param name="Awakening">��������� �������</param>
		virtual void AwakeningOutline(bool awakening);
		/// <summary>
		/// ������ ��� ���������
		///  !!! ������� ��������. ���������� ��������������� !!!
		/// </summary>
		/// <param name="Awakening">��������� �������</param>
		virtual void AwakeningOther(bool awakening);

	public:
		/// <summary>
		/// ����� � ���� ��� ��������
		/// </summary>
		/// <param name="window">����</param>
		virtual void operator>(RenderWindow & window) = 0;
		/// <summary>
		/// ���� �������
		/// </summary>
		/// <param name="x">������� �� x</param>
		/// <param name="y">������� �� y</param>
		virtual void setPosition(float x, float y) = 0;
		/// <summary>
		/// ���� �����
		/// </summary>
		/// <param name="red">�������</param>
		/// <param name="green">������</param>
		/// <param name="blue">�����</param>
		/// <param name="alpha">������������</param>
		virtual void setColor(int red, int green, int blue, int alpha = -1) = 0;
		/// <summary>
		/// ���� ����� ������� �������
		/// </summary>
		/// <param name="x">������� �� x</param>
		/// <param name="y">������� �� y</param>
		virtual void setOrigin(float x, float y) = 0;
		/// <summary>
		/// ���� �������� �������
		/// </summary>
		/// <param name="x">�������� �� x</param>
		/// <param name="y">�������� �� y</param>
		virtual void setScale(float x, float y) = 0;
		/// <summary>
		/// ���� �������� �������
		/// </summary>
		/// <param name="angle">���� �������� � ��������</param>
		virtual void setRotate(float angle) = 0;
		/// <summary>
		/// ������ ������������� ��������
		/// </summary>
		/// <param name="textureRect">������������� �������</param>
		virtual void setTextureRect(FloatRect textureRect) {};

		/// <summary>
		/// �����a� ������� ������ ������� ���� �������
		/// </summary>
		/// <returns>�������</returns>
		virtual Vector2f getPosition();
		/// <summary>
		/// �����a� �������
		/// </summary>
		/// <returns>�������</returns>
		virtual Vector2f getOriginPosition();
		/// <summary>
		/// �����a� ������� � ������ �����
		/// </summary>
		/// <returns>�������</returns>
		virtual Vector2f getMaskPosition();
		/// <summary>
		/// �����a� �������
		/// </summary>
		/// <returns>�������</returns>
		virtual Vector2f getRealPosition();
		/// <summary>
		/// ����� � ���� ��� ���������
		/// </summary>
		/// <param name="window">����</param>
		virtual void Draw(RenderWindow& window);
		/// <summary>
		/// ����� � ���� � ����������
		/// </summary>
		/// <param name="window">����</param>
		virtual void DrawAwakening(RenderWindow& window);
		/// <summary>
		/// �����a� ��������� �� ������
		/// </summary>
		/// <returns>��������� �� ������</returns>
		virtual BaseObject* operator*();
		/// <summary>
		/// �������� ����� �� ������ �� ������
		/// </summary>
		/// <param name="window">����</param>
		/// <returns>true - ������ �� �������, false - ������ �� �� �������</returns>
		virtual bool operator<(RenderWindow& window);
		/// <summary>
		/// �������� ����� �� ������������ �� ������ � ����������
		/// </summary>
		/// <param name="window">����</param>
		/// <returns>true - ������ �� �������, false - ������ �� �� �������</returns>
		virtual bool operator<<(RenderWindow& window);
		/// <summary>
		/// ����� � ���� � ����������
		/// </summary>
		/// <param name="window">����</param>
		virtual void operator>>(RenderWindow& window);
		/// <summary>
		/// �������� ����� �� ������ �� ������
		/// </summary>
		/// <param name="window">����</param>
		/// <returns>true - ������ �� �������, false - ������ �� �� �������</returns>
		virtual bool isCursorOnObject(RenderWindow& window);
		/// <summary>
		/// �������� ����� �� ������������ �� ������ �� ������ �����
		/// </summary>
		/// <param name="window">����</param>
		/// <returns>true - ������ �� �������, false - ������ �� �� �������</returns>
		virtual bool isCursorOnObjectAwakening(RenderWindow& window);
		/// <summary>
		/// ���� ���������
		/// </summary>
		/// <param name="visible">���������</param>
		virtual void setVisible(bool visible);
		/// <summary>
		/// �����a� ���������
		/// </summary>
		/// <returns>���������</returns>
		virtual bool getVisible();
		/// <summary>
		/// ������� ���������� �������
		/// </summary>
		/// <returns>���������� �������</returns>
		virtual bool getEnable();
		/// <summary>
		/// ���� ���������� �������
		/// </summary>
		/// <param name="enable">���������� �������</param>
		virtual void setEnable(bool enable);
		/// <summary>
		/// ���� ����� �������
		/// </summary>
		/// <param name="name">��� �������</param>
		virtual void setName(String name);
		/// <summary>
		/// �����a� ����� �������
		/// </summary>
		/// <returns>��� �������</returns>
		virtual String getName();
		/// <summary>
		/// ���� ����� ���������
		/// </summary>
		/// <param name="red">�������</param>
		/// <param name="green">������</param>
		/// <param name="blue">�����</param>
		/// <param name="alpha">������������</param>
		virtual void setColorAwakening(int red, int green, int blue, int alpha = -1);
		/// <summary>
		/// ���� ����� ���������
		/// </summary>
		/// <param name="color">����</param>
		virtual void setColorAwakening(Color color);
		/// <summary>
		/// �����a� ����� ���������
		/// </summary>
		/// <returns>����</returns>
		virtual Color getColorAwakening();
		/// <summary>
		/// ���� �������� ���������
		/// </summary>
		/// <param name="scale">�������</param>
		virtual void setScaleAwakening(Vector2f scale);
		/// <summary>
		/// �����a� �������� ���������
		/// </summary>
		/// <returns>�������</returns>
		virtual Vector2f getScaleAwakening();
		/// <summary>
		/// ���� �����
		/// </summary>
		/// <param name="color">����</param>
		virtual void setColor(Color color);
		/// <summary>
		/// �����a� �����
		/// </summary>
		/// <returns>����</returns>
		virtual Color getColor();
		/// <summary>
		/// ���� ����� ������ �������
		/// </summary>
		/// <param name="origin">����� ������ �������</param>
		virtual void setOrigin(Vector2f origin);
		/// <summary>
		/// ���� �������� �������
		/// </summary>
		/// <param name="scale">������� �������</param>
		virtual void setScale(Vector2f scale);
		/// <summary>
		/// ������� ����� ������ �������
		/// </summary>
		/// <returns>����� ������ �������</returns>
		virtual Vector2f getOrigin();
		/// <summary>
		/// ������� ������� �������
		/// </summary>
		/// <returns>������� �������</returns>
		virtual Vector2f getScale();
		/// <summary>
		/// ������� �������
		/// </summary>
		/// <returns>���� ��������</returns>
		virtual float getRotate();
		/// <summary>
		/// ���� �������
		/// </summary>
		/// <param name="_location">�������</param>
		virtual void setPosition(Vector2f _location);
		/// <summary>
		/// �����a� �������� �a������
		/// </summary>
		/// <returns>������</returns>
		virtual Vector2f getOriginalDimensions();
		/// <summary>
		/// �����a� �a������ � ������ ��������. 
		/// ��� ����� �������� ���������
		/// </summary>
		/// <returns>������</returns>
		virtual Vector2f getScaleDimensions();
		/// <summary>
		/// �����a� �������� �a������ � ����
		/// </summary>
		/// <returns>������</returns>
		virtual Vector2f getRealDimensions();
		/// <summary>
		/// ��������
		/// !!! ������� ��������. ���������� ��������������� !!!
		/// </summary>
		/// <param name="scrolling">������� ���������</param>
		/// <returns>false</returns>
		virtual bool setScrolling(float scrolling);
		/// <summary>
		/// ���� ��������� �������
		/// </summary>
		/// <param name="awakening">��������� �������</param>
		virtual void setAwakening(bool awakening);
		/// <summary>
		/// ���� ���� ��������� �������
		/// </summary>
		/// <param name="AwakeningType">��� ��������� �������</param>
		virtual void setAwakeningType(AwakeningTypes AwakeningType);
		/// <summary>
		/// ������ ������������� �����.
		/// �� �������� ��� ������� Shape ��� ��� ��������.
		/// </summary>
		/// /// <param name="maskRect">������������� �����</param>
		virtual void setMaskRect(FloatRect maskRect);
		/// <summary>
		/// �����a� �a���� ��������� �������
		/// </summary>
		/// <returns>��� ��������� �������</returns>
		virtual AwakeningTypes getAwakeningType();
		/// <summary>
		/// ������� ������������� � �������� �������
		/// </summary>
		/// <returns></returns>
		virtual FloatRect getOriginalRect();
		/// <summary>
		/// ������� ������������� � ������ ��������. 
		/// ��� ����� �������� ���������
		/// </summary>
		/// <returns></returns>
		virtual FloatRect getScaleRect();
		/// <summary>
		/// ������� ������������� � �������� �������� ����
		/// </summary>
		/// <returns></returns>
		virtual FloatRect getRealRect();
		/// <summary>
		/// ������� ������������� ��������
		/// </summary>
		/// <returns>������������� ��������</returns>
		virtual FloatRect getTextureRect();
		/// <summary>
		/// ������� ������������� �������� �����
		/// </summary>
		/// <returns>������������� �����</returns>
		virtual FloatRect getMaskTextureRect();
		/// <summary>
		/// ������� ������������� �����
		/// </summary>
		/// <returns>������������� �����</returns>
		virtual FloatRect getMaskRect();
		/// <summary>
		/// ������� ����� ������� ����� ������� � �������� �����������.
		/// ����� ������� ����� � ��� ����� ������� ����� ������� ��� �������� 0 ��������
		/// </summary>
		/// <returns>���������� ����� ������� �����</returns>
		virtual Vector2f getRealPositionLeftUpper();
		/// <summary>
		/// ������� ������ ������� ����� ������� � �������� �����������.
		/// ������ ������� ����� � ��� ������ ������� ����� ������� ��� �������� 0 ��������
		/// </summary>
		/// <returns>���������� ������ ������� �����</returns>
		virtual Vector2f getRealPositionRightUpper();
		/// <summary>
		/// ������� ����� ������ ����� ������� � �������� �����������.
		/// ����� ������ ����� � ��� ����� ������ ����� ������� ��� �������� 0 ��������
		/// </summary>
		/// <returns>���������� ����� ������ �����</returns>
		virtual Vector2f getRealPositionLeftDown();
		/// <summary>
		/// ������� ������ ������ ����� ������� � �������� �����������.
		/// ������ ������ ����� � ��� ������ ������ ����� ������� ��� �������� 0 ��������
		/// </summary>
		/// <returns>���������� ������ ������ �����</returns>
		virtual Vector2f getRealPositionRightDown();
		/// <summary>
		/// �������� ���� �������� �� ������������ ������
		/// � ������ ������ ������ �� ������
		/// </summary>
		virtual void Delete();
	};
}