#pragma once
#include <iostream>
#include <string>
namespace Calculator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBoxForResult;
	private: System::Windows::Forms::Label^ lab_calculator;
	private: System::Windows::Forms::Button^ but_7;
	private: System::Windows::Forms::Button^ but_8;
	private: System::Windows::Forms::Button^ but_9;
	private: System::Windows::Forms::Button^ but_4;
	private: System::Windows::Forms::Button^ but_5;
	private: System::Windows::Forms::Button^ but_6;
	private: System::Windows::Forms::Button^ but_1;
	private: System::Windows::Forms::Button^ but_2;
	private: System::Windows::Forms::Button^ but_3;
	private: System::Windows::Forms::Button^ but_0;
	private: System::Windows::Forms::Button^ but_dot;
	private: System::Windows::Forms::Button^ but_clear;
	private: System::Windows::Forms::Button^ but_Divis;
	private: System::Windows::Forms::Button^ but_Multi;
	private: System::Windows::Forms::Button^ but_Minus;
	private: System::Windows::Forms::Button^ but_Plus;
	private: System::Windows::Forms::Button^ but_Result;
	private: System::Windows::Forms::Button^ but_bitOR;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	protected:
	protected:
	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->textBoxForResult = (gcnew System::Windows::Forms::TextBox());
			this->lab_calculator = (gcnew System::Windows::Forms::Label());
			this->but_7 = (gcnew System::Windows::Forms::Button());
			this->but_8 = (gcnew System::Windows::Forms::Button());
			this->but_9 = (gcnew System::Windows::Forms::Button());
			this->but_4 = (gcnew System::Windows::Forms::Button());
			this->but_5 = (gcnew System::Windows::Forms::Button());
			this->but_6 = (gcnew System::Windows::Forms::Button());
			this->but_1 = (gcnew System::Windows::Forms::Button());
			this->but_2 = (gcnew System::Windows::Forms::Button());
			this->but_3 = (gcnew System::Windows::Forms::Button());
			this->but_0 = (gcnew System::Windows::Forms::Button());
			this->but_dot = (gcnew System::Windows::Forms::Button());
			this->but_clear = (gcnew System::Windows::Forms::Button());
			this->but_Divis = (gcnew System::Windows::Forms::Button());
			this->but_Multi = (gcnew System::Windows::Forms::Button());
			this->but_Minus = (gcnew System::Windows::Forms::Button());
			this->but_Plus = (gcnew System::Windows::Forms::Button());
			this->but_Result = (gcnew System::Windows::Forms::Button());
			this->but_bitOR = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// textBoxForResult
			// 
			this->textBoxForResult->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->textBoxForResult->Location = System::Drawing::Point(12, 59);
			this->textBoxForResult->Multiline = true;
			this->textBoxForResult->Name = L"textBoxForResult";
			this->textBoxForResult->ReadOnly = true;
			this->textBoxForResult->Size = System::Drawing::Size(360, 51);
			this->textBoxForResult->TabIndex = 0;
			this->textBoxForResult->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// lab_calculator
			// 
			this->lab_calculator->BackColor = System::Drawing::Color::Transparent;
			this->lab_calculator->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lab_calculator->ForeColor = System::Drawing::SystemColors::MenuText;
			this->lab_calculator->Location = System::Drawing::Point(12, 9);
			this->lab_calculator->Name = L"lab_calculator";
			this->lab_calculator->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->lab_calculator->Size = System::Drawing::Size(360, 38);
			this->lab_calculator->TabIndex = 1;
			this->lab_calculator->Text = L"сalculator";
			this->lab_calculator->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// but_7
			// 
			this->but_7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->but_7->Location = System::Drawing::Point(12, 125);
			this->but_7->Name = L"but_7";
			this->but_7->Size = System::Drawing::Size(60, 47);
			this->but_7->TabIndex = 2;
			this->but_7->Text = L"7";
			this->but_7->UseVisualStyleBackColor = true;
			this->but_7->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// but_8
			// 
			this->but_8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->but_8->Location = System::Drawing::Point(78, 125);
			this->but_8->Name = L"but_8";
			this->but_8->Size = System::Drawing::Size(60, 47);
			this->but_8->TabIndex = 2;
			this->but_8->Text = L"8";
			this->but_8->UseVisualStyleBackColor = true;
			this->but_8->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// but_9
			// 
			this->but_9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->but_9->Location = System::Drawing::Point(144, 125);
			this->but_9->Name = L"but_9";
			this->but_9->Size = System::Drawing::Size(60, 47);
			this->but_9->TabIndex = 2;
			this->but_9->Text = L"9";
			this->but_9->UseVisualStyleBackColor = true;
			this->but_9->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// but_4
			// 
			this->but_4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->but_4->Location = System::Drawing::Point(12, 178);
			this->but_4->Name = L"but_4";
			this->but_4->Size = System::Drawing::Size(60, 47);
			this->but_4->TabIndex = 2;
			this->but_4->Text = L"4";
			this->but_4->UseVisualStyleBackColor = true;
			this->but_4->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// but_5
			// 
			this->but_5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->but_5->Location = System::Drawing::Point(78, 178);
			this->but_5->Name = L"but_5";
			this->but_5->Size = System::Drawing::Size(60, 47);
			this->but_5->TabIndex = 2;
			this->but_5->Text = L"5";
			this->but_5->UseVisualStyleBackColor = true;
			this->but_5->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// but_6
			// 
			this->but_6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->but_6->Location = System::Drawing::Point(144, 178);
			this->but_6->Name = L"but_6";
			this->but_6->Size = System::Drawing::Size(60, 47);
			this->but_6->TabIndex = 2;
			this->but_6->Text = L"6";
			this->but_6->UseVisualStyleBackColor = true;
			this->but_6->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// but_1
			// 
			this->but_1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->but_1->Location = System::Drawing::Point(12, 231);
			this->but_1->Name = L"but_1";
			this->but_1->Size = System::Drawing::Size(60, 47);
			this->but_1->TabIndex = 2;
			this->but_1->Text = L"1";
			this->but_1->UseVisualStyleBackColor = true;
			this->but_1->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// but_2
			// 
			this->but_2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->but_2->Location = System::Drawing::Point(78, 231);
			this->but_2->Name = L"but_2";
			this->but_2->Size = System::Drawing::Size(60, 47);
			this->but_2->TabIndex = 2;
			this->but_2->Text = L"2";
			this->but_2->UseVisualStyleBackColor = true;
			this->but_2->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// but_3
			// 
			this->but_3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->but_3->Location = System::Drawing::Point(144, 231);
			this->but_3->Name = L"but_3";
			this->but_3->Size = System::Drawing::Size(60, 47);
			this->but_3->TabIndex = 2;
			this->but_3->Text = L"3";
			this->but_3->UseVisualStyleBackColor = true;
			this->but_3->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// but_0
			// 
			this->but_0->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->but_0->Location = System::Drawing::Point(12, 284);
			this->but_0->Name = L"but_0";
			this->but_0->Size = System::Drawing::Size(60, 47);
			this->but_0->TabIndex = 2;
			this->but_0->Text = L"0";
			this->but_0->UseVisualStyleBackColor = true;
			this->but_0->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// but_dot
			// 
			this->but_dot->BackColor = System::Drawing::SystemColors::ControlLight;
			this->but_dot->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->but_dot->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->but_dot->Location = System::Drawing::Point(78, 284);
			this->but_dot->Name = L"but_dot";
			this->but_dot->Size = System::Drawing::Size(60, 47);
			this->but_dot->TabIndex = 2;
			this->but_dot->Text = L",";
			this->but_dot->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->but_dot->UseVisualStyleBackColor = false;
			this->but_dot->Click += gcnew System::EventHandler(this, &MyForm::but_dot_Click);
			// 
			// but_clear
			// 
			this->but_clear->BackColor = System::Drawing::SystemColors::ControlLight;
			this->but_clear->Font = (gcnew System::Drawing::Font(L"Wingdings", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(2)));
			this->but_clear->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->but_clear->Location = System::Drawing::Point(144, 284);
			this->but_clear->Name = L"but_clear";
			this->but_clear->Size = System::Drawing::Size(60, 47);
			this->but_clear->TabIndex = 2;
			this->but_clear->Text = L"";
			this->but_clear->UseVisualStyleBackColor = false;
			this->but_clear->Click += gcnew System::EventHandler(this, &MyForm::but_Clear_Click);
			// 
			// but_Divis
			// 
			this->but_Divis->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->but_Divis->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->but_Divis->Location = System::Drawing::Point(210, 125);
			this->but_Divis->Name = L"but_Divis";
			this->but_Divis->Size = System::Drawing::Size(77, 47);
			this->but_Divis->TabIndex = 2;
			this->but_Divis->Text = L"/";
			this->but_Divis->UseVisualStyleBackColor = false;
			this->but_Divis->Click += gcnew System::EventHandler(this, &MyForm::EnterOperator);
			// 
			// but_Multi
			// 
			this->but_Multi->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->but_Multi->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->but_Multi->Location = System::Drawing::Point(210, 178);
			this->but_Multi->Name = L"but_Multi";
			this->but_Multi->Size = System::Drawing::Size(77, 47);
			this->but_Multi->TabIndex = 2;
			this->but_Multi->Text = L"*";
			this->but_Multi->UseVisualStyleBackColor = false;
			this->but_Multi->Click += gcnew System::EventHandler(this, &MyForm::EnterOperator);
			// 
			// but_Minus
			// 
			this->but_Minus->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->but_Minus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->but_Minus->Location = System::Drawing::Point(295, 125);
			this->but_Minus->Name = L"but_Minus";
			this->but_Minus->Size = System::Drawing::Size(77, 47);
			this->but_Minus->TabIndex = 2;
			this->but_Minus->Text = L"-";
			this->but_Minus->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->but_Minus->UseVisualStyleBackColor = false;
			this->but_Minus->Click += gcnew System::EventHandler(this, &MyForm::EnterOperator);
			// 
			// but_Plus
			// 
			this->but_Plus->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->but_Plus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->but_Plus->Location = System::Drawing::Point(295, 178);
			this->but_Plus->Name = L"but_Plus";
			this->but_Plus->Size = System::Drawing::Size(77, 47);
			this->but_Plus->TabIndex = 2;
			this->but_Plus->Text = L"+";
			this->but_Plus->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->but_Plus->UseVisualStyleBackColor = false;
			this->but_Plus->Click += gcnew System::EventHandler(this, &MyForm::EnterOperator);
			// 
			// but_Result
			// 
			this->but_Result->BackColor = System::Drawing::SystemColors::Control;
			this->but_Result->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->but_Result->Location = System::Drawing::Point(210, 284);
			this->but_Result->Name = L"but_Result";
			this->but_Result->Size = System::Drawing::Size(162, 47);
			this->but_Result->TabIndex = 2;
			this->but_Result->Text = L"=";
			this->but_Result->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->but_Result->UseVisualStyleBackColor = false;
			this->but_Result->Click += gcnew System::EventHandler(this, &MyForm::Result_Click);
			// 
			// but_bitOR
			// 
			this->but_bitOR->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->but_bitOR->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->but_bitOR->Location = System::Drawing::Point(210, 231);
			this->but_bitOR->Name = L"but_bitOR";
			this->but_bitOR->Size = System::Drawing::Size(50, 47);
			this->but_bitOR->TabIndex = 2;
			this->but_bitOR->Text = L"|";
			this->but_bitOR->UseVisualStyleBackColor = false;
			this->but_bitOR->Click += gcnew System::EventHandler(this, &MyForm::EnterOperator);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(322, 231);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(50, 47);
			this->button3->TabIndex = 2;
			this->button3->Text = L"^";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::EnterOperator);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(266, 231);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(50, 47);
			this->button2->TabIndex = 2;
			this->button2->Text = L"&&";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::EnterOperator);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(385, 360);
			this->Controls->Add(this->but_3);
			this->Controls->Add(this->but_6);
			this->Controls->Add(this->but_Result);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->but_bitOR);
			this->Controls->Add(this->but_Plus);
			this->Controls->Add(this->but_Minus);
			this->Controls->Add(this->but_Multi);
			this->Controls->Add(this->but_Divis);
			this->Controls->Add(this->but_9);
			this->Controls->Add(this->but_2);
			this->Controls->Add(this->but_5);
			this->Controls->Add(this->but_clear);
			this->Controls->Add(this->but_dot);
			this->Controls->Add(this->but_0);
			this->Controls->Add(this->but_1);
			this->Controls->Add(this->but_4);
			this->Controls->Add(this->but_8);
			this->Controls->Add(this->but_7);
			this->Controls->Add(this->lab_calculator);
			this->Controls->Add(this->textBoxForResult);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public:
		String^ operators;
		String^ sDisplay = ""; // clear value
		String^ sValue1 = "";
		String^ sValue2 = "";
		double dResult{ 0 };
		int count{ 0 }; // Для очищения вычислений
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {}
	private: System::Void EnterNumber(System::Object^ sender, System::EventArgs^ e); // ВВЕДЕНИЕ ЧИСЛА
	private: System::Void but_dot_Click(System::Object^ sender, System::EventArgs^ e); // ТОЧКА
	private: System::Void EnterOperator(System::Object^ sender, System::EventArgs^ e); // ВВЕДЕНИЕ ОПЕРАТОРА
	private: System::Void but_Clear_Click(System::Object^ sender, System::EventArgs^ e); // ОЧИСТКА
	bool MyForm::Protect(); // Защита от нажатия на пробел, если выводить нечего
	private: System::Void Result_Click(System::Object^ sender, System::EventArgs^ e); //РЕЗУЛЬТАТ
	};
}