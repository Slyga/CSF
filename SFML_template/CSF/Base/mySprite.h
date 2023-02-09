#pragma once
#include "BaseObject.h"
#include "TextureBank.h"

namespace csf
{
	/// <summary>
	/// ����������� ������
	/// </summary>
	class mySprite :public BaseObject
	{
	protected:
		enum TypeForm{ useSprite,useShape } typeForm;
		/// <summary>
		/// ���� �������
		/// </summary>
		static TextureBank* textureBank;

		Shape* shape;
		Sprite sprite;
		
		/// <summary>
		/// ���������� ��������
		/// </summary>
		virtual void updateDimentions();
		/// <summary>
		/// ���������� �������
		/// </summary>
		virtual void updateLocation();
		/// <summary>
		/// ����� ����� ��� ���������
		/// </summary>
		/// <param name="Awakening">��������� �������</param>
		virtual void AwakeningChangeColor(bool awakening) override;
		/// <summary>
		/// ����� ����������� ��� ���������
		/// </summary>
		/// <param name="Awakening">��������� �������</param>
		virtual void AwakeningChangeFrame(bool awakening) override;
		/// <summary>
		/// ����� �������� ��� ���������
		/// </summary>
		/// <param name="Awakening">��������� �������</param>
		virtual void AwakeningChangeScale(bool awakening) override;
	public:
		/// <summary>
		/// �����������
		/// </summary>
		mySprite();
		/// <summary>
		/// �����������
		/// </summary>
		/// <param name="name">��� ��������</param>
		/// <param name="x">������� �� �</param>
		/// <param name="y">������� �� y</param>
		mySprite(string name, float x = -1, float y = -1);
		/// <summary>
		/// �����������
		/// </summary>
		/// <param name="name">��� ��������</param>
		/// <param name="location">�������</param>
		mySprite(string name, Vector2f location);
		/// <summary>
		/// �����������
		/// </summary>
		/// <param name="name">������</param>
		mySprite(const Sprite& sprite);
		/// <summary>
		/// �����������
		/// !!! ���������� �������� ����� DELETE ��� �������� ������������ ������ !!!
		/// </summary>
		/// <param name="name">��������� �� ������. </param>
		mySprite(Shape* shape);
		/// <summary>
		/// �������� ������
		/// </summary>
		/// <param name="name">��� ��������</param>
		/// <param name="x">������� �� �</param>
		/// <param name="y">������� �� y</param>
		void Reload(string name, float x = -1, float y = -1);
		/// <summary>
		/// �������� ������
		/// </summary>
		/// <param name="name">��� ��������</param>
		/// <param name="location">�������</param>
		void Reload(string name, Vector2f location);
		/// <summary>
		/// �������� ������
		/// </summary>
		/// <param name="name">������</param>
		void Reload(const Sprite& sprite);
		/// <summary>
		/// �������� ������
		/// !!! ���������� �������� ����� DELETE ��� �������� ������������ ������ !!!
		/// </summary>
		/// <param name="name">��������� �� ������. </param>
		void Reload(Shape* shape);
		/// <summary>
		/// ����� � ���� ��� ��������
		/// </summary>
		/// <param name="window">����</param>
		virtual void operator>(RenderWindow & window) override;
		/// <summary>
		/// ���� �������
		/// </summary>
		/// <param name="x">������� �� x</param>
		/// <param name="y">������� �� y</param>
		virtual void setPosition(float x, float y);
		/// <summary>
		/// ���� �������
		/// </summary>
		/// <param name="_location">�������</param>
		virtual void setPosition(Vector2f _location);
		/// <summary>6n                           
		/// ���� ����� ��������
		/// </summary>
		/// <param name="name">��� ��������</param>
		virtual void setTexture(string name);
		/// <summary>
		/// ���� �����
		/// </summary>
		/// <param name="red">�������</param>
		/// <param name="green">������</param>
		/// <param name="blue">�����</param>
		/// <param name="alpha">������������</param>
		virtual void setColor(int red, int green, int blue, int alpha = -1) override;
		/// <summary>
		/// ���� ����� ������ �������
		/// </summary>
		/// <param name="x">������� �� x</param>
		/// <param name="y">������� �� y</param>
		virtual void setOrigin(float x, float y) override;
		/// <summary>
		/// ���� �������� �������
		/// </summary>
		/// <param name="x">�������� �� x</param>
		/// <param name="y">�������� �� y</param>
		virtual void setScale(float x, float y) override;
		/// <summary>
		/// ���� �������� �������
		/// </summary>
		/// <param name="angle">���� �������� � ��������</param>
		virtual void setRotate(float angle) override;
		/// <summary>
		/// ������ ������������� ��������
		/// </summary>
		/// <param name="textureRect">������������� �������</param>
		virtual void setTextureRect(FloatRect textureRect) override;
		/// <summary>
		/// ���� ���� ��������� �������
		/// </summary>
		/// <param name="i">��� ��������� �������</param>
		virtual void setAwakeningType(AwakeningTypes AwakeningType) override;
		/// <summary>
		/// ������� ������
		/// </summary>
		/// <returns>������</returns>
		virtual Sprite getSprite();
		/// <summary>
		/// ���� ����� �������
		/// </summary>
		/// <param name="external">������ ���� �������</param>
		static void set�urrentTextureBank(TextureBank* external);
		/// <summary>
		/// �������� ���� �������� �� ������������ ������
		/// ��������� ��� ������������� Shape
		/// </summary>
		virtual void Delete();
		/// <summary>
		/// ������� ����� �������
		/// </summary> 
		/// <param name="external">���� �������</param>
		/// <returns></returns>
		static TextureBank* get�urrentTextureBank(TextureBank* external);
	};
}
