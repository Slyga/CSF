#pragma once
#include "BaseObject.h"
namespace csf
{
	/// <summary>
	/// ����������� ��������
	/// </summary>
	class Carcas : public BaseObject
	{
	protected:
		vector<BaseObject*> Objects;

		/// <summary>
		/// ������ �������� �������� �������
		/// </summary>
		virtual void updateRealDimensions();
		/// <summary>
		/// ������ �������� �������
		/// </summary>
		virtual void updateDimensions();
		/// <summary>
		/// ������ ������� �������, ������������ �������� �������
		/// </summary>
		/// <param name="Object">������ �� ������</param>
		/// <param name="x">������� �� � ������������ �������� �������</param>
		/// <param name="y">������� �� y ������������ �������� �������</param>
		virtual void setPositionObject(BaseObject* Object, float x, float y);
		/// <summary>
		/// ������ ������������� ��������
		/// </summary>
		/// <param name="textureRect">������������� �������. �� ������������, ����� ���� �����</param>
		virtual void setTextureRect(FloatRect textureRect) override;
		/// <summary>
		/// �������� ������� ��������. 
		/// ������� ��������. 
		/// ���������� ���������������
		/// </summary>
		void updateConfiguration();
	public:
		/// <summary>
		/// �����������
		/// </summary>
		Carcas();
		/// <summary>
		/// �����������
		/// </summary>
		/// <param name="object">������� ������</param>
		Carcas(BaseObject* object);
		/// <summary>
		/// �������� ������
		/// </summary>
		/// <param name="object">������� ������</param>
		void Reload(BaseObject* object);

		/// <summary>
		/// ����� �������� ��� ��������
		/// </summary>
		/// <param name="window"></param>
		virtual void operator>(RenderWindow& window) override;
		/// <summary>
		/// ����� �������� � ���������
		/// </summary>
		/// <param name="window"></param>
		virtual void operator>>(RenderWindow& window) override;
		/// <summary>
		/// ���� �������
		/// </summary>
		/// <param name="_location">�������</param>
		virtual void setPosition(Vector2f _location);
		/// <summary>
		/// ���� �������
		/// </summary>
		/// <param name="x">������� �� x</param>
		/// <param name="y">������� �� y</param>
		virtual void setPosition(float x, float y) override;
		/// <summary>
		/// ���� ����� ���������
		/// </summary>
		/// <param name="red">�������</param>
		/// <param name="green">������</param>
		/// <param name="blue">�����</param>
		/// <param name="alpha">������������</param>
		virtual void setColorAwakening(int red, int green, int blue, int alpha = -1) override;
		/// <summary>
		/// ���� �������� ���������
		/// </summary>
		/// <param name="scale">�������</param>
		virtual void setScaleAwakening(Vector2f scale) override;
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
		virtual void setOrigin(float x, float y);
		/// <summary>
		/// ���� �����
		/// </summary>
		/// <param name="color">����</param>
		virtual void setColor(Color color) override;
		/// <summary>
		/// ���� ���������
		/// </summary>
		/// <returns>���������</returns>
		virtual void setVisible(bool visible) override;
		/// <summary>
		/// ���� ���������� �������� 
		/// </summary>
		/// <returns>���������� ��������</returns>
		virtual void setEnable(bool enable) override;
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
		/// <param name="index">������ �������</param>
		virtual void setTextureRect(FloatRect textureRect, int index);
		/// <summary>
		/// ������ ������������� �����
		/// </summary>
		/// /// <param name="maskRect">������������� �����</param>
		virtual void setMaskRect(FloatRect maskRect);
		/// <summary>
		/// �������� ������
		/// </summary>
		/// <param name="object">������ �� ������</param>
		virtual void setObject(BaseObject* object);
		/// <summary>
		/// ������ ������� �������, ������������ �������� �������
		/// </summary>
		/// <param name="index">������ �������</param>
		/// <param name="x">������� �� � ������������ �������� �������</param>
		/// <param name="y">������� �� y ������������ �������� �������</param>
		void setPositionObject(int index, float x, float y);/// <summary>
		/// ������ ������� �������, ������������ �������� �������
		/// </summary>
		/// <param name="name">��� �������</param>
		/// <param name="x">������� �� � ������������ �������� �������</param>
		/// <param name="y">������� �� y ������������ �������� �������</param>
		void setPositionObject(string name, float x, float y);
		/// <summary>
		/// �������� ���� �������� �� ������������ ������
		/// </summary>
		virtual void Delete() override;
	};
}